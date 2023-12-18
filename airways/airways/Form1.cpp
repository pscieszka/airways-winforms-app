#include "Form1.h"
#include "Baggage.h"
#include "SmallBag.h"
#include "HandLuggage.h"
#include "Form1.h"
#include "Map1.h"
#include "Home1.h"



void airways::Form1::OpenChildForm(Form^ childForm, Object^ btnSender)
{
    if (activeForm != nullptr)
    {
        //jezeli jest juz aktywny form tego samego typu to nic nie robimy
        if (activeForm->GetType() == childForm->GetType())
            return;
        //jezeli istnieje innego typu to zamykamy go
        activeForm->Close();
    }
    //ustawiamy nowy form jako aktywny
    activeForm = childForm;
    //nie jest glownym oknem aplikacji
    childForm->TopLevel = false;
    //brak obramowania
    childForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
    //ma wypelniac caly panel 
    childForm->Dock = System::Windows::Forms::DockStyle::Fill;
    //czyscimy panel glowny
    this->panelMain->Controls->Clear();
    //dodajemy nowy form do panelu
    this->panelMain->Controls->Add(childForm);
    this->panelMain->Tag = childForm;
    //ustawiamy form na pierwszy plan i wyswietlamy
    childForm->BringToFront();
    childForm->Show();
}


System::Void airways::Form1::buttonNewFlight_Click(System::Object^ sender, System::EventArgs^ e)
{
  

     Map1^ map1 = gcnew Map1();
   

    // Otwórz formularz
    OpenChildForm(map1, sender);
}

System::Void airways::Form1::buttonHome_Click(System::Object^ sender, System::EventArgs^ e)
{
    Home1^ home1 = gcnew Home1();

    OpenChildForm(home1, sender);

}
System::Void airways::Form1::Form1_Load(System::Object^ sender, System::EventArgs^ e)
{
   
    Home1^ home1 = gcnew Home1();
    OpenChildForm(home1, nullptr);
}

