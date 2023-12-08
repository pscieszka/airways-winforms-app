#include "pch.h"
#include "Form1.h"
#include "Baggage.h"
#include "SmallBag.h"
// #include "Form1.h"

System::Void CppCLRWinFormsProject::Form1::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	Baggage* smallBagObject = new SmallBag(10.0, { 1, 2, 3 }, true);
	this->label1->Text = gcnew String(smallBagObject->display().c_str());
	delete smallBagObject;


}
