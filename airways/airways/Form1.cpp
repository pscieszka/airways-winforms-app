#include "Form1.h"
#include "Baggage.h"
#include "SmallBag.h"
#include "HandLuggage.h"
#include "Form1.h"
#include "Map1.h"
#include "Home1.h"
#include "List1.h"
#include "SaveLoad1.h"
#include "CalculateCosts1.h"




System::Void airways::Form1::openChildForm(Form^ childForm, Object^ btnSender)
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
   

    // Otw�rz formularz
    openChildForm(map1, sender);
}

System::Void airways::Form1::buttonHome_Click(System::Object^ sender, System::EventArgs^ e)
{
    Home1^ home1 = gcnew Home1();

    openChildForm(home1, sender);

}
System::Void airways::Form1::Form1_Load(System::Object^ sender, System::EventArgs^ e)
{
   
    Home1^ home1 = gcnew Home1();
    openChildForm(home1, sender);
}

System::Void airways::Form1::buttonShowFlights_Click(System::Object^ sender, System::EventArgs^ e)
{
   List1^ list1 = gcnew List1();

    openChildForm(list1, sender);

}

System::Void airways::Form1::buttonSaveLoad_Click(System::Object^ sender, System::EventArgs^ e)
{
    SaveLoad1^ saveLoad1 = gcnew SaveLoad1();
    openChildForm(saveLoad1, sender);
}

System::Void airways::Form1::buttonCalculate_Click(System::Object^ sender, System::EventArgs^ e)
{
    CalculateCosts1^ calculateCosts1 = gcnew CalculateCosts1;
    openChildForm(calculateCosts1, sender);
}

