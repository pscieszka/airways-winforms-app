#include "CalculateCosts1.h"


CityCoords<int> lastCoords;

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
                if ( (lastCoords.getX() != 0 && lastCoords.getY() != 0) && (lastCoords.getX()==x && lastCoords.getY()==y) ) {
                    this->labelErr2->Text = "You cant add two the same cities in row.";
                    return;
                }

                lastCoords = CityCoords<int>(x,y);

                if (checkBoxYes->Checked) {
                    //Random decimal expansion to simulate better precision of calculations.
                    //Coordinates of cities are pixels of screen so I cant get better approximates than ints.
                    std::random_device rd;

                    std::uniform_real_distribution<double> unif(0.001, 0.999);
                    std::default_random_engine re(rd());
                    double randomX = unif(re);
                    double randomY = unif(re);

                    //Round to 0-999 int than divide by 1000 to get 0.xxx value
                    randomX = std::round(randomX * 1000.0) / 1000.0;
                    randomY = std::round(randomY * 1000.0) / 1000.0;

                    CityCoords<double> coords(x + randomX, y + randomY);

                    CityItem^ cityItem = gcnew CityItem(city, coords.getX(), coords.getY());
                    cityItem->BackColor = Color::FromArgb(41, 41, 41);
                    cityItem->Size = System::Drawing::Size(378, 35);
                    flowLayoutPanel1->Controls->Add(cityItem);

                }
                else {

                    CityCoords<int> coords(x, y);
                    CityItem^ cityItem = gcnew CityItem(city, coords.getX(), coords.getY());
                    cityItem->BackColor = Color::FromArgb(41, 41, 41);
                    cityItem->Size = System::Drawing::Size(378, 35);
                    flowLayoutPanel1->Controls->Add(cityItem);

                }
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
