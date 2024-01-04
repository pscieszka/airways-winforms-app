#pragma once
#include "CalculateCostsClasses.h"

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
	public ref class CalculateCosts1 : public System::Windows::Forms::Form
	{
	public:
		CalculateCosts1(void)
		{
			InitializeComponent();
			comboBox1->Items->Add("Opcja 1");
			comboBox1->Items->Add("Opcja 2");
			comboBox1->Items->Add("Opcja 3");
		
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
	private: System::Windows::Forms::CheckBox^ checkBoxAirbus;
	private: System::Windows::Forms::CheckBox^ checkBoxBoeing;
	private: System::Windows::Forms::Label^ labelNormalSeats;
	private: System::Windows::Forms::Label^ labelBuisnessSeats;
	private: System::Windows::Forms::Label^ labelFirstClassSeats;
	private: System::Windows::Forms::TextBox^ textBoxNormal;
	private: System::Windows::Forms::TextBox^ textBoxBuisness;
	private: System::Windows::Forms::TextBox^ textBoxFirstClass;
	private: System::Windows::Forms::Label^ labelAdditionalCosts;
	private: System::Windows::Forms::TextBox^ textBoxAdditional;
	private: System::Windows::Forms::Label^ labelErr1;
	private: System::Windows::Forms::Label^ labelErr2;
	private: System::Windows::Forms::Label^ labelErr3;
	private: System::Windows::Forms::Label^ labelErr4;
	private: System::Windows::Forms::Label^ labelErr0;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ labelDistance;
	private: System::Windows::Forms::TextBox^ textBoxDistance;
	private: System::Windows::Forms::Label^ labelResult;

	private: System::Windows::Forms::Label^ labelErr5;
	private: System::Windows::Forms::ComboBox^ comboBox1;

















	protected:

	protected:
















	protected:


	protected:




















	protected:

	protected:




	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:

	private:


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
			this->checkBoxAirbus = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxBoeing = (gcnew System::Windows::Forms::CheckBox());
			this->labelNormalSeats = (gcnew System::Windows::Forms::Label());
			this->labelBuisnessSeats = (gcnew System::Windows::Forms::Label());
			this->labelFirstClassSeats = (gcnew System::Windows::Forms::Label());
			this->textBoxNormal = (gcnew System::Windows::Forms::TextBox());
			this->textBoxBuisness = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFirstClass = (gcnew System::Windows::Forms::TextBox());
			this->labelAdditionalCosts = (gcnew System::Windows::Forms::Label());
			this->textBoxAdditional = (gcnew System::Windows::Forms::TextBox());
			this->labelErr1 = (gcnew System::Windows::Forms::Label());
			this->labelErr2 = (gcnew System::Windows::Forms::Label());
			this->labelErr3 = (gcnew System::Windows::Forms::Label());
			this->labelErr4 = (gcnew System::Windows::Forms::Label());
			this->labelErr0 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->labelDistance = (gcnew System::Windows::Forms::Label());
			this->textBoxDistance = (gcnew System::Windows::Forms::TextBox());
			this->labelResult = (gcnew System::Windows::Forms::Label());
			this->labelErr5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
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
			// labelNormalSeats
			// 
			this->labelNormalSeats->AutoSize = true;
			this->labelNormalSeats->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->labelNormalSeats->CausesValidation = false;
			this->labelNormalSeats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelNormalSeats->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelNormalSeats->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->labelNormalSeats->Location = System::Drawing::Point(12, 258);
			this->labelNormalSeats->Name = L"labelNormalSeats";
			this->labelNormalSeats->Size = System::Drawing::Size(269, 29);
			this->labelNormalSeats->TabIndex = 4;
			this->labelNormalSeats->Text = L"Normal seats number:";
			// 
			// labelBuisnessSeats
			// 
			this->labelBuisnessSeats->AutoSize = true;
			this->labelBuisnessSeats->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->labelBuisnessSeats->CausesValidation = false;
			this->labelBuisnessSeats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelBuisnessSeats->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelBuisnessSeats->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->labelBuisnessSeats->Location = System::Drawing::Point(12, 362);
			this->labelBuisnessSeats->Name = L"labelBuisnessSeats";
			this->labelBuisnessSeats->Size = System::Drawing::Size(290, 29);
			this->labelBuisnessSeats->TabIndex = 5;
			this->labelBuisnessSeats->Text = L"Buisness seats number:";
			// 
			// labelFirstClassSeats
			// 
			this->labelFirstClassSeats->AutoSize = true;
			this->labelFirstClassSeats->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->labelFirstClassSeats->CausesValidation = false;
			this->labelFirstClassSeats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelFirstClassSeats->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelFirstClassSeats->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->labelFirstClassSeats->Location = System::Drawing::Point(12, 459);
			this->labelFirstClassSeats->Name = L"labelFirstClassSeats";
			this->labelFirstClassSeats->Size = System::Drawing::Size(303, 29);
			this->labelFirstClassSeats->TabIndex = 6;
			this->labelFirstClassSeats->Text = L"First class seats number:";
			// 
			// textBoxNormal
			// 
			this->textBoxNormal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->textBoxNormal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxNormal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxNormal->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->textBoxNormal->Location = System::Drawing::Point(17, 307);
			this->textBoxNormal->Name = L"textBoxNormal";
			this->textBoxNormal->Size = System::Drawing::Size(87, 35);
			this->textBoxNormal->TabIndex = 7;
			// 
			// textBoxBuisness
			// 
			this->textBoxBuisness->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->textBoxBuisness->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxBuisness->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxBuisness->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->textBoxBuisness->Location = System::Drawing::Point(17, 407);
			this->textBoxBuisness->Name = L"textBoxBuisness";
			this->textBoxBuisness->Size = System::Drawing::Size(87, 35);
			this->textBoxBuisness->TabIndex = 8;
			// 
			// textBoxFirstClass
			// 
			this->textBoxFirstClass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->textBoxFirstClass->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxFirstClass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxFirstClass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->textBoxFirstClass->Location = System::Drawing::Point(17, 502);
			this->textBoxFirstClass->Name = L"textBoxFirstClass";
			this->textBoxFirstClass->Size = System::Drawing::Size(87, 35);
			this->textBoxFirstClass->TabIndex = 9;
			// 
			// labelAdditionalCosts
			// 
			this->labelAdditionalCosts->AutoSize = true;
			this->labelAdditionalCosts->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->labelAdditionalCosts->CausesValidation = false;
			this->labelAdditionalCosts->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelAdditionalCosts->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelAdditionalCosts->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->labelAdditionalCosts->Location = System::Drawing::Point(12, 558);
			this->labelAdditionalCosts->Name = L"labelAdditionalCosts";
			this->labelAdditionalCosts->Size = System::Drawing::Size(205, 29);
			this->labelAdditionalCosts->TabIndex = 10;
			this->labelAdditionalCosts->Text = L"Additional costs:";
			// 
			// textBoxAdditional
			// 
			this->textBoxAdditional->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->textBoxAdditional->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxAdditional->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxAdditional->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->textBoxAdditional->Location = System::Drawing::Point(17, 614);
			this->textBoxAdditional->Name = L"textBoxAdditional";
			this->textBoxAdditional->Size = System::Drawing::Size(87, 35);
			this->textBoxAdditional->TabIndex = 11;
			// 
			// labelErr1
			// 
			this->labelErr1->AutoSize = true;
			this->labelErr1->ForeColor = System::Drawing::Color::Red;
			this->labelErr1->Location = System::Drawing::Point(121, 324);
			this->labelErr1->Name = L"labelErr1";
			this->labelErr1->Size = System::Drawing::Size(0, 13);
			this->labelErr1->TabIndex = 12;
			// 
			// labelErr2
			// 
			this->labelErr2->AutoSize = true;
			this->labelErr2->ForeColor = System::Drawing::Color::Red;
			this->labelErr2->Location = System::Drawing::Point(121, 429);
			this->labelErr2->Name = L"labelErr2";
			this->labelErr2->Size = System::Drawing::Size(0, 13);
			this->labelErr2->TabIndex = 13;
			// 
			// labelErr3
			// 
			this->labelErr3->AutoSize = true;
			this->labelErr3->ForeColor = System::Drawing::Color::Red;
			this->labelErr3->Location = System::Drawing::Point(121, 524);
			this->labelErr3->Name = L"labelErr3";
			this->labelErr3->Size = System::Drawing::Size(0, 13);
			this->labelErr3->TabIndex = 14;
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
			// button1
			// 
			this->button1->Location = System::Drawing::Point(765, 552);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(192, 97);
			this->button1->TabIndex = 17;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CalculateCosts1::button1_Click);
			// 
			// labelDistance
			// 
			this->labelDistance->AutoSize = true;
			this->labelDistance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->labelDistance->CausesValidation = false;
			this->labelDistance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelDistance->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelDistance->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->labelDistance->Location = System::Drawing::Point(506, 258);
			this->labelDistance->Name = L"labelDistance";
			this->labelDistance->Size = System::Drawing::Size(121, 29);
			this->labelDistance->TabIndex = 18;
			this->labelDistance->Text = L"Distance:";
			// 
			// textBoxDistance
			// 
			this->textBoxDistance->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->textBoxDistance->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxDistance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxDistance->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->textBoxDistance->Location = System::Drawing::Point(511, 302);
			this->textBoxDistance->Name = L"textBoxDistance";
			this->textBoxDistance->Size = System::Drawing::Size(140, 35);
			this->textBoxDistance->TabIndex = 19;
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
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(529, 442);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 23;
			// 
			// CalculateCosts1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->ClientSize = System::Drawing::Size(1039, 681);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->labelErr5);
			this->Controls->Add(this->labelResult);
			this->Controls->Add(this->textBoxDistance);
			this->Controls->Add(this->labelDistance);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->labelErr0);
			this->Controls->Add(this->labelErr4);
			this->Controls->Add(this->labelErr3);
			this->Controls->Add(this->labelErr2);
			this->Controls->Add(this->labelErr1);
			this->Controls->Add(this->textBoxAdditional);
			this->Controls->Add(this->labelAdditionalCosts);
			this->Controls->Add(this->textBoxFirstClass);
			this->Controls->Add(this->textBoxBuisness);
			this->Controls->Add(this->textBoxNormal);
			this->Controls->Add(this->labelFirstClassSeats);
			this->Controls->Add(this->labelBuisnessSeats);
			this->Controls->Add(this->labelNormalSeats);
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


	private: bool validBoxes();

	private: System::Void checkBoxAirbus_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void checkBoxBoeing_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (validBoxes()) {
		if (checkBoxAirbus->Checked) {
			Airbus a1;
			//a1 += 21;//Int32::Parse(textBoxAdditional->Text);
			double costs = calculateCost(a1, Int32::Parse(textBoxDistance->Text));
			this->labelResult->Text = costs.ToString();

		}
	}
}


};
}
