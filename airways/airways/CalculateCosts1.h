#pragma once
#include <msclr/marshal_cppstd.h>

#include "CalculateCostsClasses.h"
#include "CityItem.h"
#include "unordered_map"
#include "string"
#include <random>


static CityCoords<int> lastCoordsInt;
static CityCoords<double> lastCoordsDouble;
namespace airways {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	/// 
	//Lista miast i wspolrzednych (po pikselach).
  const std::unordered_map<std::string, std::pair<int, int>> cityMap = {
	{ "Ankara", { 948, 560 }},
	{ "Berlin", {497, 284} },
	{ "Budapest", {632, 413} },
	{ "London", {260, 272} },
	{ "Madrid", {174, 581} },
	{ "Milan", {444, 486} },
	{ "Paris", {310, 375} },
	{ "Prague", {536, 353} },
	{ "Tallinn", {675, 63} },
	{ "Warsaw", {632, 268} }
	};
	public ref class CalculateCosts1 : public System::Windows::Forms::Form
	{

	public:
		CalculateCosts1(void)
		{

			InitializeComponent();
			//Dodanie miast do comboBoxa
			for (const auto& city : cityMap) {
				comboBox1->Items->Add(gcnew System::String(city.first.c_str()));
			}
			distanceInt = 0;
			distanceDouble = 0;
			costInt = 0;
			costDouble = 0;
			lastCoordsInt = CityCoords<int>(0, 0);
			lastCoordsDouble = CityCoords<double>(0.0, 0.0);

		
			//


			//TODO: Add the constructor code here
			//
	
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CalculateCosts1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelHeader;
	protected:
	private: System::Windows::Forms::Label^ labelHeader;
	private: System::Windows::Forms::Label^ labelPlane;

	private: System::Windows::Forms::CheckBox^ checkBoxBoeing;











	private: System::Windows::Forms::Label^ labelErr4;

	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Label^ labelResult;

	private: System::Windows::Forms::Label^ labelErr5;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ labelAdd;
	private: System::Windows::Forms::Label^ labelPrecision;
	private: System::Windows::Forms::CheckBox^ checkBoxAirbus;
	private: System::Windows::Forms::CheckBox^ checkBoxYes;
	private: System::Windows::Forms::CheckBox^ checkBoxNo;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Label^ labelErr0;
	private: System::Windows::Forms::Label^ labelErr1;
	private: System::Windows::Forms::Button^ buttonAdd;


	private: System::Windows::Forms::Label^ labelErr2;
	private: System::Windows::Forms::Label^ labelDistance;
	private: System::Windows::Forms::Label^ labelInfoDistance;
	private: System::Windows::Forms::Label^ labelInfoCosts;
	private: System::Windows::Forms::Label^ labelCost;


















	protected:

	protected:
















	protected:


	protected:




















	protected:

	protected:




	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:
private: System::Windows::Forms::Button^ buttonReset;

	private:

		int distanceInt;
		double distanceDouble;
		int costInt;
		double costDouble;
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		/// 

		void InitializeComponent(void)
		{
			this->panelHeader = (gcnew System::Windows::Forms::Panel());
			this->labelHeader = (gcnew System::Windows::Forms::Label());
			this->labelPlane = (gcnew System::Windows::Forms::Label());
			this->checkBoxBoeing = (gcnew System::Windows::Forms::CheckBox());
			this->labelErr4 = (gcnew System::Windows::Forms::Label());
			this->labelErr0 = (gcnew System::Windows::Forms::Label());
			this->labelResult = (gcnew System::Windows::Forms::Label());
			this->labelErr5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->labelAdd = (gcnew System::Windows::Forms::Label());
			this->labelPrecision = (gcnew System::Windows::Forms::Label());
			this->checkBoxAirbus = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxYes = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxNo = (gcnew System::Windows::Forms::CheckBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->labelErr1 = (gcnew System::Windows::Forms::Label());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->labelErr2 = (gcnew System::Windows::Forms::Label());
			this->labelDistance = (gcnew System::Windows::Forms::Label());
			this->labelInfoDistance = (gcnew System::Windows::Forms::Label());
			this->labelInfoCosts = (gcnew System::Windows::Forms::Label());
			this->labelCost = (gcnew System::Windows::Forms::Label());
			this->buttonReset = (gcnew System::Windows::Forms::Button());
			this->panelHeader->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelHeader
			// 
			this->panelHeader->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->panelHeader->Controls->Add(this->labelHeader);
			this->panelHeader->Location = System::Drawing::Point(0, 0);
			this->panelHeader->Name = L"panelHeader";
			this->panelHeader->Size = System::Drawing::Size(1040, 100);
			this->panelHeader->TabIndex = 0;
			// 
			// labelHeader
			// 
			this->labelHeader->AutoSize = true;
			this->labelHeader->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->labelHeader->CausesValidation = false;
			this->labelHeader->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelHeader->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelHeader->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->labelHeader->Location = System::Drawing::Point(278, 23);
			this->labelHeader->Name = L"labelHeader";
			this->labelHeader->Size = System::Drawing::Size(459, 55);
			this->labelHeader->TabIndex = 0;
			this->labelHeader->Text = L"Calculate flight cost";
			// 
			// labelPlane
			// 
			this->labelPlane->AutoSize = true;
			this->labelPlane->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->labelPlane->CausesValidation = false;
			this->labelPlane->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelPlane->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelPlane->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->labelPlane->Location = System::Drawing::Point(12, 149);
			this->labelPlane->Name = L"labelPlane";
			this->labelPlane->Size = System::Drawing::Size(182, 29);
			this->labelPlane->TabIndex = 1;
			this->labelPlane->Text = L"Choose plane:";
			// 
			// checkBoxBoeing
			// 
			this->checkBoxBoeing->AutoSize = true;
			this->checkBoxBoeing->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBoxBoeing->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->checkBoxBoeing->Location = System::Drawing::Point(246, 207);
			this->checkBoxBoeing->Name = L"checkBoxBoeing";
			this->checkBoxBoeing->Size = System::Drawing::Size(150, 29);
			this->checkBoxBoeing->TabIndex = 3;
			this->checkBoxBoeing->Text = L"Boeing 737";
			this->checkBoxBoeing->UseVisualStyleBackColor = true;
			this->checkBoxBoeing->CheckedChanged += gcnew System::EventHandler(this, &CalculateCosts1::checkBoxBoeing_CheckedChanged);
			// 
			// labelErr4
			// 
			this->labelErr4->AutoSize = true;
			this->labelErr4->ForeColor = System::Drawing::Color::Red;
			this->labelErr4->Location = System::Drawing::Point(121, 636);
			this->labelErr4->Name = L"labelErr4";
			this->labelErr4->Size = System::Drawing::Size(0, 13);
			this->labelErr4->TabIndex = 15;
			// 
			// labelErr0
			// 
			this->labelErr0->AutoSize = true;
			this->labelErr0->ForeColor = System::Drawing::Color::Red;
			this->labelErr0->Location = System::Drawing::Point(420, 217);
			this->labelErr0->Name = L"labelErr0";
			this->labelErr0->Size = System::Drawing::Size(0, 13);
			this->labelErr0->TabIndex = 16;
			// 
			// labelResult
			// 
			this->labelResult->AutoSize = true;
			this->labelResult->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->labelResult->CausesValidation = false;
			this->labelResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelResult->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelResult->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->labelResult->Location = System::Drawing::Point(506, 417);
			this->labelResult->Name = L"labelResult";
			this->labelResult->Size = System::Drawing::Size(0, 29);
			this->labelResult->TabIndex = 20;
			// 
			// labelErr5
			// 
			this->labelErr5->AutoSize = true;
			this->labelErr5->ForeColor = System::Drawing::Color::Red;
			this->labelErr5->Location = System::Drawing::Point(508, 351);
			this->labelErr5->Name = L"labelErr5";
			this->labelErr5->Size = System::Drawing::Size(0, 13);
			this->labelErr5->TabIndex = 21;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->comboBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(17, 381);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 26);
			this->comboBox1->TabIndex = 23;
			// 
			// labelAdd
			// 
			this->labelAdd->AutoSize = true;
			this->labelAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->labelAdd->CausesValidation = false;
			this->labelAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelAdd->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelAdd->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->labelAdd->Location = System::Drawing::Point(12, 335);
			this->labelAdd->Name = L"labelAdd";
			this->labelAdd->Size = System::Drawing::Size(235, 29);
			this->labelAdd->TabIndex = 24;
			this->labelAdd->Text = L"Add cities from list:";
			// 
			// labelPrecision
			// 
			this->labelPrecision->AutoSize = true;
			this->labelPrecision->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->labelPrecision->CausesValidation = false;
			this->labelPrecision->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelPrecision->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelPrecision->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->labelPrecision->Location = System::Drawing::Point(12, 251);
			this->labelPrecision->Name = L"labelPrecision";
			this->labelPrecision->Size = System::Drawing::Size(219, 29);
			this->labelPrecision->TabIndex = 25;
			this->labelPrecision->Text = L"Double precision:";
			// 
			// checkBoxAirbus
			// 
			this->checkBoxAirbus->AutoSize = true;
			this->checkBoxAirbus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBoxAirbus->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->checkBoxAirbus->Location = System::Drawing::Point(17, 207);
			this->checkBoxAirbus->Name = L"checkBoxAirbus";
			this->checkBoxAirbus->Size = System::Drawing::Size(159, 29);
			this->checkBoxAirbus->TabIndex = 2;
			this->checkBoxAirbus->Text = L"Airbus A320";
			this->checkBoxAirbus->UseVisualStyleBackColor = true;
			this->checkBoxAirbus->CheckedChanged += gcnew System::EventHandler(this, &CalculateCosts1::checkBoxAirbus_CheckedChanged);
			// 
			// checkBoxYes
			// 
			this->checkBoxYes->AutoSize = true;
			this->checkBoxYes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBoxYes->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->checkBoxYes->Location = System::Drawing::Point(17, 288);
			this->checkBoxYes->Name = L"checkBoxYes";
			this->checkBoxYes->Size = System::Drawing::Size(72, 29);
			this->checkBoxYes->TabIndex = 26;
			this->checkBoxYes->Text = L"Yes";
			this->checkBoxYes->UseVisualStyleBackColor = true;
			this->checkBoxYes->CheckedChanged += gcnew System::EventHandler(this, &CalculateCosts1::checkBoxYes_CheckedChanged);
			// 
			// checkBoxNo
			// 
			this->checkBoxNo->AutoSize = true;
			this->checkBoxNo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBoxNo->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->checkBoxNo->Location = System::Drawing::Point(237, 288);
			this->checkBoxNo->Name = L"checkBoxNo";
			this->checkBoxNo->Size = System::Drawing::Size(60, 29);
			this->checkBoxNo->TabIndex = 27;
			this->checkBoxNo->Text = L"No";
			this->checkBoxNo->UseVisualStyleBackColor = true;
			this->checkBoxNo->CheckedChanged += gcnew System::EventHandler(this, &CalculateCosts1::checkBoxNo_CheckedChanged);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Location = System::Drawing::Point(17, 418);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(403, 218);
			this->flowLayoutPanel1->TabIndex = 28;
			// 
			// labelErr1
			// 
			this->labelErr1->AutoSize = true;
			this->labelErr1->ForeColor = System::Drawing::Color::Red;
			this->labelErr1->Location = System::Drawing::Point(294, 298);
			this->labelErr1->Name = L"labelErr1";
			this->labelErr1->Size = System::Drawing::Size(0, 13);
			this->labelErr1->TabIndex = 29;
			// 
			// buttonAdd
			// 
			this->buttonAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->buttonAdd->FlatAppearance->BorderSize = 0;
			this->buttonAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonAdd->Location = System::Drawing::Point(172, 381);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(59, 26);
			this->buttonAdd->TabIndex = 30;
			this->buttonAdd->Text = L"Add";
			this->buttonAdd->UseVisualStyleBackColor = false;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &CalculateCosts1::buttonAdd_Click);
			// 
			// labelErr2
			// 
			this->labelErr2->AutoSize = true;
			this->labelErr2->ForeColor = System::Drawing::Color::Red;
			this->labelErr2->Location = System::Drawing::Point(237, 394);
			this->labelErr2->Name = L"labelErr2";
			this->labelErr2->Size = System::Drawing::Size(0, 13);
			this->labelErr2->TabIndex = 31;
			// 
			// labelDistance
			// 
			this->labelDistance->AutoSize = true;
			this->labelDistance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->labelDistance->CausesValidation = false;
			this->labelDistance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelDistance->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->labelDistance->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->labelDistance->Location = System::Drawing::Point(627, 217);
			this->labelDistance->Name = L"labelDistance";
			this->labelDistance->Size = System::Drawing::Size(0, 29);
			this->labelDistance->TabIndex = 32;
			// 
			// labelInfoDistance
			// 
			this->labelInfoDistance->AutoSize = true;
			this->labelInfoDistance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->labelInfoDistance->CausesValidation = false;
			this->labelInfoDistance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelInfoDistance->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelInfoDistance->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->labelInfoDistance->Location = System::Drawing::Point(506, 217);
			this->labelInfoDistance->Name = L"labelInfoDistance";
			this->labelInfoDistance->Size = System::Drawing::Size(121, 29);
			this->labelInfoDistance->TabIndex = 33;
			this->labelInfoDistance->Text = L"Distance:";
			// 
			// labelInfoCosts
			// 
			this->labelInfoCosts->AutoSize = true;
			this->labelInfoCosts->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->labelInfoCosts->CausesValidation = false;
			this->labelInfoCosts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelInfoCosts->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelInfoCosts->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->labelInfoCosts->Location = System::Drawing::Point(506, 310);
			this->labelInfoCosts->Name = L"labelInfoCosts";
			this->labelInfoCosts->Size = System::Drawing::Size(73, 29);
			this->labelInfoCosts->TabIndex = 34;
			this->labelInfoCosts->Text = L"Cost:";
			// 
			// labelCost
			// 
			this->labelCost->AutoSize = true;
			this->labelCost->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->labelCost->CausesValidation = false;
			this->labelCost->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelCost->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->labelCost->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->labelCost->Location = System::Drawing::Point(574, 310);
			this->labelCost->Name = L"labelCost";
			this->labelCost->Size = System::Drawing::Size(0, 29);
			this->labelCost->TabIndex = 35;
			// 
			// buttonReset
			// 
			this->buttonReset->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->buttonReset->FlatAppearance->BorderSize = 0;
			this->buttonReset->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonReset->Location = System::Drawing::Point(695, 570);
			this->buttonReset->Name = L"buttonReset";
			this->buttonReset->Size = System::Drawing::Size(165, 66);
			this->buttonReset->TabIndex = 36;
			this->buttonReset->Text = L"Reset";
			this->buttonReset->UseVisualStyleBackColor = false;
			this->buttonReset->Click += gcnew System::EventHandler(this, &CalculateCosts1::buttonReset_Click);
			// 
			// CalculateCosts1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->ClientSize = System::Drawing::Size(1039, 681);
			this->Controls->Add(this->buttonReset);
			this->Controls->Add(this->labelCost);
			this->Controls->Add(this->labelInfoCosts);
			this->Controls->Add(this->labelInfoDistance);
			this->Controls->Add(this->labelDistance);
			this->Controls->Add(this->labelErr2);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->labelErr1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->checkBoxNo);
			this->Controls->Add(this->checkBoxYes);
			this->Controls->Add(this->labelPrecision);
			this->Controls->Add(this->labelAdd);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->labelErr5);
			this->Controls->Add(this->labelResult);
			this->Controls->Add(this->labelErr0);
			this->Controls->Add(this->labelErr4);
			this->Controls->Add(this->checkBoxBoeing);
			this->Controls->Add(this->checkBoxAirbus);
			this->Controls->Add(this->labelPlane);
			this->Controls->Add(this->panelHeader);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->Name = L"CalculateCosts1";
			this->Text = L"Calculate Costs";
			this->panelHeader->ResumeLayout(false);
			this->panelHeader->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: 
	
	/**
* @brief Funkcja sprawdza czy checkboxy sa wybrane.
*/
	bool validBoxes();
	/**
* @brief Funkcja resetuje okno.
*/
	void resetForm();

	//Obsluga zmiany kolorow i wybrania tylko 1 checkboxa
	System::Void checkBoxAirbus_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	
	System::Void checkBoxBoeing_CheckedChanged(System::Object^ sender, System::EventArgs^ e);



	System::Void checkBoxYes_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

	System::Void checkBoxNo_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	/**
* @brief Funkcja obsluguje dodwania miast, generowanie losowych rozwiniec dziesietnych,
* tworzy obiekt cityItem, oblicza koszt i dystans.
*/
	System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e);
	/**
* @brief Funkcja wywoluje resetForm().
*/
	System::Void buttonReset_Click(System::Object^ sender, System::EventArgs^ e) {
		resetForm();
	}
	



};
}
