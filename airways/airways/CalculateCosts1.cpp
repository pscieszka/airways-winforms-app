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

    if (String::IsNullOrWhiteSpace(textBoxNormal->Text))
    {
        labelErr1->Text = "Please fill text box.";
        isValid = false;
    }
    else {
        try {
            int val  = Int32::Parse(textBoxNormal->Text);
            if (checkBoxAirbus->Checked && (val>90 || val<0)) {
                labelErr1->Text = "Normal seats number can not be higher than 90 or lower than 0.";
                isValid = false;
            }
            else if (checkBoxBoeing->Checked && (val > 126 || val < 0)) {
                labelErr1->Text = "Normal seats number can not be higher than 126 or lower than 0.";
                isValid = false;

            }
            else {
                labelErr1->Text = "";
            }
        }
        catch (FormatException^)
        {
            labelErr1->Text = "The entered number is not a valid integer.";
            isValid = false;
        }
        catch (OverflowException^)
        {
            labelErr1->Text = "The entered number exceeds the range of integers.";
            isValid = false;
        }
    }

    if (String::IsNullOrWhiteSpace(textBoxBuisness->Text))
    {
        labelErr2->ForeColor = System::Drawing::Color::FromArgb(255, 0, 0);

        labelErr2->Text = "Please fill text box.";
        isValid = false;
    }
    else {
        try {
            int val = Int32::Parse(textBoxBuisness->Text);
            if (checkBoxAirbus->Checked && (val > 24 || val < 0)) {
                labelErr2->ForeColor = System::Drawing::Color::FromArgb(255, 0, 0);
                labelErr2->Text = "Buisness seats number can not be higher than 90 or lower than 0.";
                isValid = false;
            }
            else if (checkBoxBoeing->Checked ) {
                textBoxBuisness->Text = "0";
                labelErr2->Text = "This plane does not have any business seats.";
                labelErr2->ForeColor = System::Drawing::Color::FromArgb(255, 255,0);
                isValid = true;

            }
            else {
                    labelErr2->Text = "";
                    labelErr2->ForeColor = System::Drawing::Color::FromArgb(255, 0, 0);
                
            }
        }
        catch (FormatException^)
        {
            labelErr2->Text = "The entered number is not a valid integer.";
            isValid = false;
        }
        catch (OverflowException^)
        {
            labelErr2->Text = "The entered number exceeds the range of integers.";
            isValid = false;
        }
    }

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

        if (String::IsNullOrWhiteSpace(textBoxAdditional->Text))
        {
            labelErr4->Text = "Please fill text box.";
            isValid = false;
        }
        else {
            try {
                int val = Int32::Parse(textBoxAdditional->Text);
                if (checkBoxAirbus->Checked && (val > 10000000 || val < 0)) {
                    labelErr4->Text = "Additional cost can not be higher than 10 000 000 or lower than 0.";
                    isValid = false;
                }
                else {
                    labelErr4->Text = "";

                }
            }
            catch (FormatException^)
            {
                labelErr4->Text = "The entered number is not a valid integer.";
                isValid = false;
            }
            catch (OverflowException^)
            {
                labelErr4->Text = "The entered number exceeds the range of integers.";
                isValid = false;
            }
        }

    return isValid;

}

System::Void airways::CalculateCosts1::checkBoxAirbus_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBoxAirbus->Checked == true) {
        if (String::IsNullOrWhiteSpace(textBoxBuisness->Text) || this->textBoxBuisness->Text == "0") {
            this->textBoxBuisness->Text = "";
        }
        

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
        this->textBoxBuisness->Text = "0";

        checkBoxAirbus->Checked = false;
        checkBoxAirbus->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);
        checkBoxBoeing->ForeColor = System::Drawing::Color::FromArgb(229, 128, 15);
    }
    else {
        checkBoxBoeing->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);

    }
}
