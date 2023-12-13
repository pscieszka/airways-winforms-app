#include "Form1.h"
#include "Baggage.h"
#include "SmallBag.h"
#include "HandLuggage.h"
#include "Form1.h"
#include "Form2.h"



void airways::Form1::OpenChildForm(Form^ childForm, Object^ btnSender)
{
    if (activeForm != nullptr)
        activeForm->Close();

    activeForm = childForm;
    childForm->TopLevel = false;
    childForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
    childForm->Dock = System::Windows::Forms::DockStyle::Fill;

    this->panelMain->Controls->Clear(); // Clear existing controls in the panel
    this->panelMain->Controls->Add(childForm);
    this->panelMain->Tag = childForm;
    childForm->BringToFront();
    childForm->Show();
}

System::Void airways::Form1::buttonNewFlight_Click(System::Object^ sender, System::EventArgs^ e)
{
    Form2^ form2 = gcnew Form2(); 
    OpenChildForm(form2, sender);
}
