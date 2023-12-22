#include "Form1.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]


void main(array<String^>^ args) {


	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);
	airways::Form1 form;
	//Blokuje mozliwosc zmiany wielkosci okna, poniewaz wystapuje grafiki png, ktore sie nie skaluja
	form.FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;

	Application::Run(% form);
}