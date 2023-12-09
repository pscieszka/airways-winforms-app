#include "pch.h"
#include "Form1.h"
#include "Baggage.h"
#include "SmallBag.h"
#include "HandLuggage.h"
// #include "Form1.h"

System::Void CppCLRWinFormsProject::Form1::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    Baggage* bag = new HandLuggage(System::Convert::ToDouble(this->textBox4->Text), { System::Convert::ToInt32(this->textBox1->Text),System::Convert::ToInt32(this->textBox2->Text),System::Convert::ToInt32(this->textBox3->Text) });
    this->textBox1->Text = "";
    this->textBox2->Text = ""; 
    this->textBox3->Text = "";
    this->textBox4->Text = "";
    String^ bagInfo = gcnew String(bag->display().c_str());

    this->listBox1->Items->Add(bagInfo);
}
