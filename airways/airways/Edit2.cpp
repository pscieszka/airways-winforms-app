#include "Edit2.h"
#include "Baggage.h"
#include "SmallBag.h"
#include "HandLuggage.h"

bool airways::Edit2::validTextBoxes()
{
	bool isValid = true;

    if (String::IsNullOrWhiteSpace(textBoxName->Text) || String::IsNullOrWhiteSpace(textBoxSurname->Text))
    {
        infoLabel->Text = "Please fill in all date fields.";
        isValid = false;
    }

    if (this->checkBoxEconomic->Checked == false && this->checkBoxBusiness->Checked == false && this->checkBoxFirstClass->Checked == false) {
        isValid = false;
        infoLabel->Text += "\nPlease pick ticket type.";
    }
    if (this->checkBoxHand->Checked == false && this->checkBoxSmall->Checked == false && this->checkBoxChecked->Checked == false) {
        isValid = false;
        infoLabel->Text += "\nPlease pick baggage type.";
    }
    return isValid;
}

System::Void airways::Edit2::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
    if(validTextBoxes()){

        

        Passenger pass(
            msclr::interop::marshal_as<std::string>(this->textBoxName->Text), msclr::interop::marshal_as<std::string>(this->textBoxSurname->Text), "test");
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
    }
    UpdateTextColor(checkBoxEconomic, checkBoxBusiness, checkBoxFirstClass);
}

System::Void airways::Edit2::checkBoxBusiness_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBoxBusiness->Checked)
    {
        checkBoxEconomic->Checked = false;
        checkBoxFirstClass->Checked = false;
    }
    UpdateTextColor(checkBoxEconomic, checkBoxBusiness, checkBoxFirstClass);
}

System::Void airways::Edit2::checkBoxFirstClass_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBoxFirstClass->Checked)
    {
        checkBoxEconomic->Checked = false;
        checkBoxBusiness->Checked = false;
    }
    UpdateTextColor(checkBoxEconomic, checkBoxBusiness, checkBoxFirstClass);
}

System::Void airways::Edit2::checkBoxHand_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBoxHand->Checked) {
        checkBoxSmall->Checked = false;
        checkBoxChecked->Checked = false;
            
    }
    UpdateTextColor(checkBoxHand, checkBoxSmall, checkBoxChecked);
}

System::Void airways::Edit2::checkBoxSmall_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBoxSmall->Checked) {
        checkBoxHand->Checked = false;
        checkBoxChecked->Checked = false;

    }
    UpdateTextColor(checkBoxHand, checkBoxSmall, checkBoxChecked);
}

System::Void airways::Edit2::checkBoxChecked_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
    if (checkBoxChecked->Checked) {
        checkBoxSmall->Checked = false;
        checkBoxHand->Checked = false;

    }
    UpdateTextColor(checkBoxHand, checkBoxSmall, checkBoxChecked);
   
}

System::Void airways::Edit2::UpdateTextColor(System::Windows::Forms::CheckBox^ checkBox1,System::Windows::Forms::CheckBox^ checkBox2,System::Windows::Forms::CheckBox^ checkBox3)
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

}