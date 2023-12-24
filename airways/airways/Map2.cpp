#include "Map2.h"

std::string airways::Map2::calculateTime(int dist)
{
	double time = 0.551104 * pow((dist / 100), 0.608872) - 0.257423;
	int h = static_cast<int>(time);
	int m = static_cast<int>((time - h) * 60);
	std::string hours;
	std::string minutes;

	if (h < 10) {
		hours = "0" + std::to_string(h);
	}
	else {
		hours =  std::to_string(h);
	}

	if (m < 10) {
		minutes = "0" + std::to_string(m);
	}
	else {
		minutes = std::to_string(m);
	}


	return hours+":"+minutes;
}

System::Void airways::Map2::checkBoxBoeing_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (this->checkBoxBoeing->Checked) {
		// Jeœli Boeing jest zaznaczony, zresetuj Airbus
		this->checkBoxAirbus->Checked = false;
		this->checkBoxAirbus->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);
		// pic airbus
		this->pictureBoxBoeing->Visible = true;
		

		// Zmieñ kolor Boeinga
		this->checkBoxBoeing->ForeColor = System::Drawing::Color::FromArgb(229, 128, 15);
	}
	else {
		this->pictureBoxBoeing->Visible = false;

		// Jeœli Boeing nie jest zaznaczony, zresetuj kolor
		this->checkBoxBoeing->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);
	}

}

System::Void airways::Map2::checkBoxAirbus_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (this->checkBoxAirbus->Checked) {
		// Jeœli Airbus jest zaznaczony, zresetuj Boeing
		this->checkBoxBoeing->Checked = false;
		this->checkBoxBoeing->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);


		this->pictureBoxAirbus->Visible = true;

		// Zmieñ kolor Airbusa
		this->checkBoxAirbus->ForeColor = System::Drawing::Color::FromArgb(229, 128, 15);
	}
	else {
		// Jeœli Airbus nie jest zaznaczony, zresetuj kolor
		this->checkBoxAirbus->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);
		this->pictureBoxAirbus->Visible = false;

	}
}

//daty z tylko z 2023
bool airways::Map2::validTextBoxes()
{
    bool isValid = true;

    // data
    if (String::IsNullOrWhiteSpace(textBoxDD->Text) || String::IsNullOrWhiteSpace(textBoxMM->Text))
    {
        infoLabelDD->Text = "Please fill in all date fields.";
        isValid = false;
    }
    else
    {
        try
        {
            int day = Int32::Parse(textBoxDD->Text);
            int month = Int32::Parse(textBoxMM->Text);
            int monthDays;

            if (month < 1 || month > 12) {
                infoLabelDD->Text = "Month must be between 1 and 12.";
                isValid = false;
            }
            else
            {
                if (month == 4 || month == 6 || month == 9 || month == 11) {
                    monthDays = 30;
                }
                else if (month == 2) {
                    monthDays = 28;
                }
                else {
                    monthDays = 31;
                }

                if (!(day >= 1 && day <= monthDays))
                {
                    infoLabelDD->Text = "The entered day must be between 1 and " + gcnew String(std::to_string(monthDays).c_str()) + ".";
                    isValid = false;
                }
            }
        }
        catch (FormatException^)
        {
            infoLabelDD->Text = "The entered day is not an integer.";
            isValid = false;
        }
        catch (OverflowException^)
        {
            infoLabelDD->Text = "The entered day exceeds the range of integers.";
            isValid = false;
        }
    }

    //godzina
    if (String::IsNullOrWhiteSpace(textBoxHours->Text) || String::IsNullOrWhiteSpace(textBoxMinutes->Text))
    {
        infoLabelHH->Text = "Please fill in all time fields.";
        isValid = false;
    }
    else
    {
        try
        {
            int hours = Int32::Parse(textBoxHours->Text);
            int minutes = Int32::Parse(textBoxMinutes->Text);

            if (!(hours >= 0 && hours <= 23 && minutes >= 0 && minutes <= 59))
            {
                infoLabelHH->Text = "The entered time is not valid.";
                isValid = false;
            }
        }
        catch (FormatException^)
        {
            infoLabelHH->Text = "The entered time is not a valid integer.";
            isValid = false;
        }
        catch (OverflowException^)
        {
            infoLabelHH->Text = "The entered time exceeds the range of integers.";
            isValid = false;
        }
    }
    if (String::IsNullOrWhiteSpace(textBoxGate->Text))
    {
        infoLabelGate->Text = "Please fill gate number.";
        isValid = false;
    }
    else
    {
        try
        {
            String^ gateText = textBoxGate->Text;

            // SprawdŸ, czy pierwszy znak to du¿a litera od A do Z
            if (!(gateText[0] >= 'A' && gateText[0] <= 'Z'))
            {
                infoLabelGate->Text = "Invalid gate number format. The first character must be a capital letter (A-Z).";
                isValid = false;
            }
            // SprawdŸ, czy drugi znak to cyfra od 1 do 9
            else if (!(gateText[1] >= '1' && gateText[1] <= '9'))
            {
                infoLabelGate->Text = "Invalid gate number format. The second character must be a digit (1-9).";
                isValid = false;
            }
            // SprawdŸ, czy trzeci znak (jeœli istnieje) to cyfra od 0 do 9
            else if (gateText->Length > 2 && !(gateText[2] >= '0' && gateText[2] <= '9'))
            {
                infoLabelGate->Text = "Invalid gate number format. The third character (if present) must be a digit (0-9).";
                isValid = false;
            }
            else
            {
                infoLabelGate->Text = "";
            }
        }
        catch (FormatException^)
        {
            infoLabelGate->Text = "Invalid gate number format. Make sure it follows the pattern [A-Z][1-9] or [A-Z][1-9][0-9].";
            isValid = false;
        }
        catch (OverflowException^)
        {
            infoLabelGate->Text = "Invalid gate number format. The entered value exceeds the range of integers.";
            isValid = false;
        }
    }


    if (this->checkBoxBoeing->Checked == false && this->checkBoxAirbus->Checked == false) {
        isValid = false;
        infoLabelModel->Text = "Choose one option.";
    }
    return isValid;
}


System::Void airways::Map2::buttonConfirm_Click(System::Object^ sender, System::EventArgs^ e)
{
	validTextBoxes();
}

