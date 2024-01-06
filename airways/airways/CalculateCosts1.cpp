#include "CalculateCosts1.h"




bool airways::CalculateCosts1::validBoxes()
{
    bool isValid = true;
    if (checkBoxAirbus->Checked == false && checkBoxBoeing->Checked == false) {
        labelErr0->Text = "Please choose one.";
        isValid = false;
    }
    else {
        labelErr0->Text = "";
    }
    if (checkBoxYes->Checked == false && checkBoxNo->Checked == false) {
        labelErr1->Text = "Please choose one.";
        isValid = false;
    }
    else {
        labelErr1->Text = "";
    }
    /*
   
    if (String::IsNullOrWhiteSpace(textBoxFirstClass->Text))
    {
        labelErr3->Text = "Please fill text box.";
        isValid = false;
    }
    else {
        try {
            int val = Int32::Parse(textBoxFirstClass->Text);
            if ( val > 12 || val < 0) {
                labelErr3->Text = "First class seats number can not be higher than 12 or lower than 0.";
                isValid = false;
            }
            else {
                labelErr3->Text = "";

            }
        }
        catch (FormatException^)
        {
            labelErr3->Text = "The entered number is not a valid integer.";
            isValid = false;
        }
        catch (OverflowException^)
        {
            labelErr3->Text = "The entered number exceeds the range of integers.";
            isValid = false;
        }
    }

       
        */
       

    return isValid;

}

System::Void airways::CalculateCosts1::checkBoxAirbus_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBoxAirbus->Checked == true) {
    

        checkBoxBoeing->Checked = false;
        checkBoxBoeing->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);
        checkBoxAirbus->ForeColor = System::Drawing::Color::FromArgb(229, 128, 15);
    }
    else {
        checkBoxAirbus->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);

    }
}

System::Void airways::CalculateCosts1::checkBoxBoeing_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBoxBoeing->Checked == true) {

        checkBoxAirbus->Checked = false;
        checkBoxAirbus->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);
        checkBoxBoeing->ForeColor = System::Drawing::Color::FromArgb(229, 128, 15);
    }
    else {
        checkBoxBoeing->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);

    }
}

void airways::CalculateCosts1::resetForm()
{
    //raczej da sie prosciej 
    flowLayoutPanel1->Controls->Clear();
    FlowLayoutPanel^ newFlowLayoutPanel = gcnew FlowLayoutPanel();

    newFlowLayoutPanel->AutoScroll = flowLayoutPanel1->AutoScroll;
    newFlowLayoutPanel->BorderStyle = flowLayoutPanel1->BorderStyle;
    newFlowLayoutPanel->Location = flowLayoutPanel1->Location;
    newFlowLayoutPanel->Name = flowLayoutPanel1->Name;
    newFlowLayoutPanel->Size = flowLayoutPanel1->Size;

    this->Controls->Remove(flowLayoutPanel1);
    this->Controls->Add(newFlowLayoutPanel);

    flowLayoutPanel1 = newFlowLayoutPanel; 
   //


    distanceInt = 0;
    distanceDouble = 0;
    costInt = 0;
    costDouble = 0;
    lastCoordsInt = CityCoords<int>(0, 0);
    lastCoordsDouble = CityCoords<double>(0.0, 0.0);
    
    labelDistance->Text = "";
    labelCost->Text = "";

    checkBoxBoeing->Checked = false;
    checkBoxAirbus->Checked = false;

    checkBoxBoeing->Enabled = true;
    checkBoxAirbus->Enabled = true;

    checkBoxYes->Checked = false;
    checkBoxNo->Checked = false;

    checkBoxYes->Enabled = true;
    checkBoxNo->Enabled = true;
    labelErr0->Text = "";
    labelErr1->Text = "";
    labelErr2->Text = "";
    labelErr4->Text = "";
    labelErr5->Text = "";
   
    comboBox1->SelectedIndex = -1;

}

System::Void airways::CalculateCosts1::checkBoxYes_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBoxYes->Checked == true) {

        checkBoxNo->Checked = false;
        checkBoxNo->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);
        checkBoxYes->ForeColor = System::Drawing::Color::FromArgb(229, 128, 15);
    }
    else {
        checkBoxYes->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);

    }
}

System::Void airways::CalculateCosts1::checkBoxNo_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBoxNo->Checked == true) {

        checkBoxYes->Checked = false;
        checkBoxYes->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);
        checkBoxNo->ForeColor = System::Drawing::Color::FromArgb(229, 128, 15);
    }
    else {
        checkBoxNo->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);

    }
}

System::Void airways::CalculateCosts1::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
    try {
        if (validBoxes() && comboBox1->SelectedIndex != -1) {
            checkBoxNo->Enabled = false;
            checkBoxYes->Enabled = false;
            checkBoxAirbus->Enabled = false;
            checkBoxBoeing->Enabled = false;

            if (comboBox1->SelectedIndex != -1)
            {
                this->labelErr2->Text = "";
                System::String^ city = dynamic_cast<System::String^>(comboBox1->SelectedItem);
                std::string cityStd = msclr::interop::marshal_as<std::string>(city);

                auto it = cityMap.find(cityStd);

                int x = it->second.second;
                int y = it->second.first;
                if ( (lastCoordsInt.getX() != 0 && lastCoordsInt.getY() != 0) && (lastCoordsInt.getX()==x && lastCoordsInt.getY()==y) ) {
                    this->labelErr2->Text = "You cant add two the same cities in row.";
                    return;
                }


                if (checkBoxYes->Checked) {
                    //Random decimal expansion to simulate better precision of calculations.
                    //Coordinates of cities are pixels of screen so I cant get better approximates than ints.
                    std::random_device rd;

                    std::uniform_real_distribution<double> unif(0.001, 0.999);
                    std::default_random_engine re(rd());
                    double randomX = unif(re);
                    double randomY = unif(re);

                    //Round to 0-999 int than divide by 1000 to get 0.xxx value
                    randomX = std::round(randomX * 1000.0) / 1000.0 + x;
                    randomY = std::round(randomY * 1000.0) / 1000.0 + y;

                    CityCoords<double> coords(randomX, randomY);

                    CityItem^ cityItem = gcnew CityItem(city, coords.getX(), coords.getY());
                    cityItem->BackColor = Color::FromArgb(41, 41, 41);
                    cityItem->Size = System::Drawing::Size(378, 44);
                    flowLayoutPanel1->Controls->Add(cityItem);

                    if (lastCoordsDouble.getX() != 0 && lastCoordsDouble.getY() != 0) {
                        distanceDouble += coords + lastCoordsDouble;
                        if (checkBoxAirbus->Checked) {
                            Airbus airbus;
                            costDouble += calculateCost(airbus, distanceDouble);
                        }
                        else {
                            Boeing boeing;
                            costDouble += calculateCost(boeing, distanceDouble);
                        }
                    }

                    this->labelCost->Text = costDouble.ToString("F2") + " EUR";

                    this->labelDistance->Text = distanceDouble.ToString("F3")->Replace(',','.') + " km";
                    lastCoordsDouble = coords;


                }
                else {

                    CityCoords<int> coords(x, y);
                    CityItem^ cityItem = gcnew CityItem(city, coords.getX(), coords.getY());
                    cityItem->BackColor = Color::FromArgb(41, 41, 41);
                    cityItem->Size = System::Drawing::Size(378, 44);
                    flowLayoutPanel1->Controls->Add(cityItem);
                    

                    if (lastCoordsInt.getX() != 0 && lastCoordsInt.getY() != 0) {
                        distanceInt += (coords + lastCoordsInt);
                        if (checkBoxAirbus->Checked) {
                            Airbus airbus;
                            costInt += calculateCost(airbus, distanceInt);
                        }
                        else {
                            Boeing boeing;
                            costInt += calculateCost(boeing, distanceInt);
                        }
                    }
                    this->labelCost->Text = Convert::ToString(costInt) + " EUR";
                    this->labelDistance->Text = Convert::ToString(distanceInt) + " km";

                }
                lastCoordsInt = CityCoords<int>(x, y);

            }


        }
        else {
            this->labelErr2->Text = "Invalid city name.";
        }


    }
    catch (OverflowException^)
    {
        labelErr2->Text = "The name is too long.";
        
    }
   
   
}
