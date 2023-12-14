#include "Form1.h"
#include "Baggage.h"
#include "SmallBag.h"
#include "HandLuggage.h"
#include "Form1.h"
#include "Map1.h"



void airways::Form1::OpenChildForm(Form^ childForm, Object^ btnSender)
{
    if (activeForm != nullptr)
        activeForm->Close();

    activeForm = childForm;
    childForm->TopLevel = false;
    childForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
    childForm->Dock = System::Windows::Forms::DockStyle::Fill;

    this->panelMain->Controls->Clear(); 
    this->panelMain->Controls->Add(childForm);
    this->panelMain->Tag = childForm;
    childForm->BringToFront();
    childForm->Show();
}

System::Void airways::Form1::buttonNewFlight_Click(System::Object^ sender, System::EventArgs^ e)
{
    Map1^ map1 = gcnew Map1();
    OpenChildForm(map1, sender);
}
