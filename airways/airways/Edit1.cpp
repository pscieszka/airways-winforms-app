#include "Edit1.h"
#include "string"

bool airways::Edit1::validTextBoxes()
{
    int monthDays2;

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


            if (month < 1 || month > 12) {
                infoLabelDD->Text = "Month must be between 1 and 12.";
                isValid = false;
            }
            else
            {
                if (month == 4 || month == 6 || month == 9 || month == 11) {
                    monthDays2 = 30;
                }
                else if (month == 2) {
                    monthDays2 = 28;
                }
                else {
                    monthDays2 = 31;
                }

                if (!(day >= 1 && day <= monthDays2))
                {
                    infoLabelDD->Text = "The entered day must be between 1 and " + gcnew String(std::to_string(monthDays2).c_str()) + ".";
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
    //gate
    if (String::IsNullOrWhiteSpace(textBoxGate->Text))
    {
        infoLabelGate->Text = "";
        isValid = true;
    }
    else
    {
        try
        {
            String^ gateText = textBoxGate->Text;

            // SprawdŸ, czy pierwszy znak to du¿a litera od A do Z
            if (!(gateText[0] >= 'A' && gateText[0] <= 'Z'))
            {
                infoLabelGate->Text = "The first character must be a capital letter (A-Z).";
                isValid = false;
            }
            // SprawdŸ, czy drugi znak to cyfra od 1 do 9
            else if (!(gateText[1] >= '0' && gateText[1] <= '9') || !(gateText[2] >= '0' && gateText[2] <= '9'))
            {
                infoLabelGate->Text = "The second character must be a digit (1-9).";
                isValid = false;
            }
            // SprawdŸ, czy trzeci znak (jeœli istnieje) to cyfra od 0 do 9
            else if (gateText->Length > 3)
            {
                infoLabelGate->Text = "Invalid gate number format. The number is too long.";
                isValid = false;
            }
            else
            {
                infoLabelGate->Text = "";
            }
        }
        catch (FormatException^)
        {
            infoLabelGate->Text = "Make sure it follows the pattern [A-Z][1-9][0-9].";
            isValid = false;
        }
        catch (OverflowException^)
        {
            infoLabelGate->Text = "The entered value exceeds the range of integers.";
            isValid = false;
        }
    }
    return isValid;
}

System::Void airways::Edit1::buttonChangeData_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (validTextBoxes()) {
        return;
    }
}
