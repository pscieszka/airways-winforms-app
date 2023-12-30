#include "Edit2.h"
#include "Baggage.h"
#include "SmallBag.h"
#include "CheckedLuggage.h"
#include "HandLuggage.h"

std::string ticketType;
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
        Baggage* bag = nullptr;
        if (checkBoxHand->Checked) {
            bag = new HandLuggage(Double::Parse(this->textBoxWeight->Text),
                { Int32::Parse(this->textBoxSizeX->Text), Int32::Parse(this->textBoxSizeY->Text), Int32::Parse(this->textBoxSizeZ->Text) });

        }
        else if (checkBoxSmall->Checked) {
            bag = new SmallBag(Double::Parse(this->textBoxWeight->Text),
                { Int32::Parse(this->textBoxSizeX->Text), Int32::Parse(this->textBoxSizeY->Text), Int32::Parse(this->textBoxSizeZ->Text) },this->checkBoxYes->Checked);
        }
        else {
            //distance 3 dziala?
            bag = new CheckedLuggage(Double::Parse(this->textBoxWeight->Text),
                { Int32::Parse(this->textBoxSizeX->Text), Int32::Parse(this->textBoxSizeY->Text), Int32::Parse(this->textBoxSizeZ->Text) }, std::stod((*flights)[idx].getData()[3]));
        }
        Passenger pass(
            msclr::interop::marshal_as<std::string>(this->textBoxName->Text), msclr::interop::marshal_as<std::string>(this->textBoxSurname->Text),ticketType ,bag,(*flights)[idx].getPrice());

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
