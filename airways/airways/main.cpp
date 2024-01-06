#include "Form1.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace airways;

flightsList* flights = flightsList::getInstance();

void clean(Object^ sender, FormClosedEventArgs^ e)
{
	delete flights;
	flights = nullptr;
}
[STAThreadAttribute]


void main(array<String^>^ args) {


	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);
	airways::Form1 form;

	//Blokuje mozliwosc zmiany wielkosci okna, poniewaz wystapuje grafiki png, ktore sie nie skaluja
	if (args->Length == 0) {
		form.FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
	}

	//zwolnienie pamieci 
	form.FormClosed += gcnew FormClosedEventHandler(&clean);
	Application::Run(% form);
	
}