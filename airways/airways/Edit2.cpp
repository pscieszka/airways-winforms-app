#include "Edit2.h"
#include "Baggage.h"
#include "SmallBag.h"
#include "CheckedLuggage.h"
#include "HandLuggage.h"

std::string ticketType;
double weight;
bool airways::Edit2::validTextBoxes()
{
	bool isValid = true;

    if (String::IsNullOrWhiteSpace(textBoxName->Text) || String::IsNullOrWhiteSpace(textBoxSurname->Text))
    {
        infoLabel->Text = "Please fill name and surname.";
        isValid = false;
    }
    else
    {
        try
        {
            if (textBoxName->Text->Length > 16 || textBoxSurname->Text->Length > 16) {
                infoLabel->Text = "Name and surname can contain max 16 characters.";

            }
        }
        catch (FormatException^)
        {
            infoLabel->Text = "The entered time is not a valid integer.";
            isValid = false;
        }
        catch (OverflowException^)
        {
            infoLabel->Text = "The entered time exceeds the range of integers.";
            isValid = false;
        }
    }

    if (this->checkBoxEconomic->Checked == false && this->checkBoxBusiness->Checked == false && this->checkBoxFirstClass->Checked == false) {
        isValid = false;
        infoLabel->Text += "\nPlease pick ticket type.";
    }

    if (this->checkBoxHand->Checked == false && this->checkBoxSmall->Checked == false && this->checkBoxChecked->Checked == false) {
        isValid = false;
        infoLabel->Text += "\nPlease pick baggage type.";
    }

    if (checkBoxChecked->Checked || checkBoxSmall->Checked || checkBoxHand->Checked) {
        if (String::IsNullOrWhiteSpace(textBoxWeight->Text)) {
            infoLabelWeight->Text = "Please fill field.";
            isValid = false;
        }
        else
        {
            try
            {
                weight = parseToDouble(textBoxWeight->Text);
                if (weight == 0.0) {
                    throw gcnew FormatException;
                }

                if (checkBoxHand->Checked)
                {
                    if (weight < 0 || weight>=10) {
                        infoLabelWeight->Text = "Invalid weight.";
                        isValid = false;
                    }
                }
                else if (checkBoxChecked->Checked) {
                    if (weight < 0 || weight>=21) {


                        infoLabelWeight->Text = "Invalid weight.";
                        isValid = false;
                    }
                }
                else {
                    if (weight < 0 || weight>=100) {


                        infoLabelWeight->Text = "Invalid weight";
                        isValid = false;
                    }
                }
            }
            catch (FormatException^)
            {
                infoLabelWeight->Text = "The entered time is not a valid number.";
                isValid = false;
            }
            catch (OverflowException^)
            {
                infoLabelWeight->Text = "The entered time exceeds the range of variable.";
                isValid = false;
            }
        }

        if (String::IsNullOrWhiteSpace(textBoxSizeX->Text) || String::IsNullOrWhiteSpace(textBoxSizeY->Text) || String::IsNullOrWhiteSpace(textBoxSizeZ->Text)) {
            infoLabelSize->Text = "Please fill field.";
            isValid = false;
        }
        else
        {

            try
            {
                int x = Int32::Parse(textBoxSizeX->Text);
                int y = Int32::Parse(textBoxSizeY->Text);
                int z = Int32::Parse(textBoxSizeZ->Text);
                if (checkBoxHand->Checked)
                {
                    if (x <= 0 || x > 55 || y <= 0 || y > 40 || z <= 0 || z > 20) {
                        infoLabelSize->Text = "Invalid size.";
                        isValid = false;
                    }
                }
                else if (checkBoxChecked->Checked) {
                    if (x <= 0 || x > 350 || y <= 0 || y > 350 || z <= 0 || z > 350) {


                        infoLabelSize->Text = "Invalid size.";
                        isValid = false;
                    }
                }
                else {
                    if (x < 0 || x > 40 || y <= 0 || y > 20 || z <= 0 || z > 25) {

                        infoLabelSize->Text = "Invalid size.";
                        isValid = false;
                    }
                }
            }
            catch (FormatException^)
            {
                infoLabelSize->Text = "The entered time is not a valid integer.";
                isValid = false;
            }
            catch (OverflowException^)
            {
                infoLabelSize->Text = "The entered time exceeds the range of integers.";
                isValid = false;
            }
        }
    }
    
    if (checkBoxSmall->Checked) {
        if (this->checkBoxYes->Checked == false && this->checkBoxNo->Checked == false) {
            isValid = false;
            infoLabelBackpack->Text = "Please choose one.";
        }
    }
    
    return isValid;
}

double airways::Edit2::parseToDouble(String^ str)
{
    double result = 0.0; 
    try {
        str = str->Replace(",", ".");

        std::string str2 = msclr::interop::marshal_as<std::string>(str);
        if (str2.size() > 10) {
            return 0.0;
        }
        int dotCounter=0;
        for (auto ch : str2) {
            if (ch == '.') {
                dotCounter++;
            }
            if (dotCounter > 1) {
                return 0.0;
            }
            if (!isdigit(ch) && ch != '.') {
                return 0.0;
            }
        }
        result = std::stod(str2);


    }
    catch (...) {
        result = 0.0;
    }

    return result;

}

System::Void airways::Edit2::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
    if(validTextBoxes()){
        Passenger pass(
            msclr::interop::marshal_as<std::string>(this->textBoxName->Text), msclr::interop::marshal_as<std::string>(this->textBoxSurname->Text), ticketType, nullptr, (*flights)[idx].getPrice(), false);
       
        if (checkBoxHand->Checked) {
            pass.setBaggage(weight,
                { Int32::Parse(this->textBoxSizeX->Text), Int32::Parse(this->textBoxSizeY->Text), Int32::Parse(this->textBoxSizeZ->Text) });

        }
        else if (checkBoxSmall->Checked) {
            pass.setBaggage(weight,
                { Int32::Parse(this->textBoxSizeX->Text), Int32::Parse(this->textBoxSizeY->Text), Int32::Parse(this->textBoxSizeZ->Text) },this->checkBoxYes->Checked);
        }
        else {
            pass.setBaggage(weight,
                { Int32::Parse(this->textBoxSizeX->Text), Int32::Parse(this->textBoxSizeY->Text), Int32::Parse(this->textBoxSizeZ->Text) }, std::stod((*flights)[idx].getData()[3]));
        }


        (*flights)[idx].addPassenger(pass);
        this->Close();
    }
}

System::Void airways::Edit2::checkBoxEconomic_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBoxEconomic->Checked)
    {
        checkBoxBusiness->Checked = false;
        checkBoxFirstClass->Checked = false;
        ticketType = "Economic";
    }
    updateTextColor(checkBoxEconomic, checkBoxBusiness, checkBoxFirstClass);
}

System::Void airways::Edit2::checkBoxBusiness_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBoxBusiness->Checked)
    {
        checkBoxEconomic->Checked = false;
        checkBoxFirstClass->Checked = false;
        ticketType = "Business";
    }
    updateTextColor(checkBoxEconomic, checkBoxBusiness, checkBoxFirstClass);
}

System::Void airways::Edit2::checkBoxFirstClass_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBoxFirstClass->Checked)
    {
        checkBoxEconomic->Checked = false;
        checkBoxBusiness->Checked = false;
        ticketType = "First Class";
    }
    updateTextColor(checkBoxEconomic, checkBoxBusiness, checkBoxFirstClass);
}

System::Void airways::Edit2::checkBoxHand_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBoxHand->Checked) {
        checkBoxSmall->Checked = false;
        checkBoxChecked->Checked = false;
            
    }
    updateTextColor(checkBoxHand, checkBoxSmall, checkBoxChecked);
    displayBaggageBoxes(checkBoxHand, checkBoxChecked,checkBoxSmall);

}

System::Void airways::Edit2::checkBoxSmall_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBoxSmall->Checked) {
        checkBoxHand->Checked = false;
        checkBoxChecked->Checked = false;

    }
    updateTextColor(checkBoxHand, checkBoxSmall, checkBoxChecked);
    displayBaggageBoxes(checkBoxHand, checkBoxChecked, checkBoxSmall);
}

System::Void airways::Edit2::checkBoxChecked_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBoxChecked->Checked) {
        checkBoxSmall->Checked = false;
        checkBoxHand->Checked = false;

    }
    updateTextColor(checkBoxHand, checkBoxSmall, checkBoxChecked);
    displayBaggageBoxes(checkBoxHand, checkBoxChecked, checkBoxSmall);
   
}

System::Void airways::Edit2::checkBoxYes_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBoxYes->Checked) {
        checkBoxYes->ForeColor = System::Drawing::Color::FromArgb(229, 128, 15);
        checkBoxNo->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);
        checkBoxNo->Checked = false;
    }
    else {
        checkBoxYes->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);
    }
}

System::Void airways::Edit2::checkBoxNo_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBoxNo->Checked) {
        checkBoxNo->ForeColor = System::Drawing::Color::FromArgb(229, 128, 15);
        checkBoxYes->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);
        checkBoxYes->Checked = false;
    }
    else {
        checkBoxNo->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);
    }
}

System::Void airways::Edit2::updateTextColor(System::Windows::Forms::CheckBox^ checkBox1,System::Windows::Forms::CheckBox^ checkBox2,System::Windows::Forms::CheckBox^ checkBox3)
{
    if (checkBox1->Checked)
    {
        checkBox1->ForeColor = System::Drawing::Color::FromArgb(229, 128, 15);
        checkBox2->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);
        checkBox3->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);
    }
    else if (checkBox2->Checked)
    {
        checkBox1->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);
        checkBox2->ForeColor = System::Drawing::Color::FromArgb(229, 128, 15);
        checkBox3->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);
    }
    else if (checkBox3->Checked)
    {
        checkBox1->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);
        checkBox2->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);
        checkBox3->ForeColor = System::Drawing::Color::FromArgb(229, 128, 15);
    }
    else
    {
        checkBox1->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);
        checkBox2->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);
        checkBox3->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);
    }

}

System::Void airways::Edit2::displayBaggageBoxes(System::Windows::Forms::CheckBox^ checkBox1, System::Windows::Forms::CheckBox^ checkBox2, System::Windows::Forms::CheckBox^ checkBox3)
{
    if (checkBox1->Checked) {
        this->labelWeight->Visible = true;
        this->labelSize->Visible = true;
        this->textBoxSizeX->Visible = true;
        this->textBoxSizeY->Visible = true;
        this->textBoxSizeZ->Visible = true;
        this->labelSeprator->Visible = true;
        this->labelSeparator2->Visible = true;
        this->textBoxWeight->Visible = true;
        this->labelBackpack->Visible = false;
        this->checkBoxYes->Visible = false;
        this->checkBoxNo->Visible = false;
        this->labelWeightInfo->Text = "Max 10kg";
        this->labelSizeInfo->Text = "Max 55x40x20";
    }
    else if(checkBox2->Checked){
        this->labelWeight->Visible = true;
        this->labelSize->Visible = true;
        this->textBoxSizeX->Visible = true;
        this->textBoxSizeY->Visible = true;
        this->textBoxSizeZ->Visible = true;
        this->labelSeprator->Visible = true;
        this->labelSeparator2->Visible = true;
        this->textBoxWeight->Visible = true;
        this->labelBackpack->Visible = false;
        this->checkBoxYes->Visible = false;
        this->checkBoxNo->Visible = false;
        this->labelWeightInfo->Text = "Max 20kg";
        this->labelSizeInfo->Text = "";
    }
    else if (checkBox3->Checked) {
        this->labelWeight->Visible = true;
        this->labelSize->Visible = true;
        this->textBoxSizeX->Visible = true;
        this->textBoxSizeY->Visible = true;
        this->textBoxSizeZ->Visible = true;
        this->labelSeprator->Visible = true;
        this->labelSeparator2->Visible = true;
        this->textBoxWeight->Visible = true;
        this->labelBackpack->Visible = true;
        this->checkBoxYes->Visible = true;
        this->checkBoxNo->Visible = true;
        this->labelWeightInfo->Text = "";
        this->labelSizeInfo->Text = "Max 40x20x25";

    }
    else {
        this->labelWeight->Visible = false;
        this->labelSize->Visible = false;
        this->textBoxSizeX->Visible = false;
        this->textBoxSizeY->Visible = false;
        this->textBoxSizeZ->Visible = false;
        this->labelSeprator->Visible = false;
        this->labelSeparator2->Visible = false;
        this->textBoxWeight->Visible = false;
        this->labelBackpack->Visible = false;
        this->checkBoxYes->Visible = false;
        this->checkBoxNo->Visible = false;
        this->labelWeightInfo->Text = "";
        this->labelSizeInfo->Text = "";
    }
}
