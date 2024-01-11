#pragma once
#include <msclr/marshal_cppstd.h>
#include "Map1.h"
#include "flightsList.h"

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



	public ref class Map2 : public System::Windows::Forms::Form
	{
		Form^ activeForm;
		

	public:
		Map2(void)
		{
			InitializeComponent();
			//
			activeForm = gcnew Form();


			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Map2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ background;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ labelDeparture;
	private: System::Windows::Forms::Label^ labelDestination;


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ labelTime;
	private: System::Windows::Forms::Label^ labelTylda;
	private: System::Windows::Forms::Label^ labelFtime;
	private: System::Windows::Forms::Label^ labelDate;
	private: System::Windows::Forms::TextBox^ textBoxDD;
	private: System::Windows::Forms::Label^ labelDateSep;


	private: System::Windows::Forms::TextBox^ textBoxMM;
	private: System::Windows::Forms::Label^ labelDateFormat;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxHours;

	private: System::Windows::Forms::TextBox^ textBoxMinutes;


	private: System::Windows::Forms::Label^ labelTimeSeparator;
	private: System::Windows::Forms::Label^ labelTimeFormat;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxGate;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ checkBoxBoeing;
	private: System::Windows::Forms::CheckBox^ checkBoxAirbus;
	private: System::Windows::Forms::PictureBox^ pictureBoxBoeing;
	private: System::Windows::Forms::PictureBox^ pictureBoxAirbus;
	private: System::Windows::Forms::Label^ infoLabelDD;
	private: System::Windows::Forms::Button^ buttonConfirm;
	private: System::Windows::Forms::Label^ infoLabelHH;
	private: System::Windows::Forms::Label^ labelGateFormat;
	private: System::Windows::Forms::Label^ infoLabelModel;
	private: System::Windows::Forms::Label^ infoLabelGate;

























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Map2::typeid));
			this->background = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->labelFtime = (gcnew System::Windows::Forms::Label());
			this->labelTylda = (gcnew System::Windows::Forms::Label());
			this->labelTime = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->labelDestination = (gcnew System::Windows::Forms::Label());
			this->labelDeparture = (gcnew System::Windows::Forms::Label());
			this->labelDate = (gcnew System::Windows::Forms::Label());
			this->textBoxDD = (gcnew System::Windows::Forms::TextBox());
			this->labelDateSep = (gcnew System::Windows::Forms::Label());
			this->textBoxMM = (gcnew System::Windows::Forms::TextBox());
			this->labelDateFormat = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxHours = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMinutes = (gcnew System::Windows::Forms::TextBox());
			this->labelTimeSeparator = (gcnew System::Windows::Forms::Label());
			this->labelTimeFormat = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxGate = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBoxBoeing = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxAirbus = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBoxBoeing = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxAirbus = (gcnew System::Windows::Forms::PictureBox());
			this->infoLabelDD = (gcnew System::Windows::Forms::Label());
			this->buttonConfirm = (gcnew System::Windows::Forms::Button());
			this->infoLabelHH = (gcnew System::Windows::Forms::Label());
			this->labelGateFormat = (gcnew System::Windows::Forms::Label());
			this->infoLabelModel = (gcnew System::Windows::Forms::Label());
			this->infoLabelGate = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->background))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxBoeing))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAirbus))->BeginInit();
			this->SuspendLayout();
			// 
			// background
			// 
			this->background->Location = System::Drawing::Point(0, 0);
			this->background->Name = L"background";
			this->background->Size = System::Drawing::Size(1040, 720);
			this->background->TabIndex = 0;
			this->background->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->panel1->Controls->Add(this->labelFtime);
			this->panel1->Controls->Add(this->labelTylda);
			this->panel1->Controls->Add(this->labelTime);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->labelDestination);
			this->panel1->Controls->Add(this->labelDeparture);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1039, 100);
			this->panel1->TabIndex = 1;
			// 
			// labelFtime
			// 
			this->labelFtime->AutoSize = true;
			this->labelFtime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelFtime->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelFtime->Location = System::Drawing::Point(663, 38);
			this->labelFtime->Name = L"labelFtime";
			this->labelFtime->Size = System::Drawing::Size(200, 39);
			this->labelFtime->TabIndex = 5;
			this->labelFtime->Text = L"Flight time:";
			// 
			// labelTylda
			// 
			this->labelTylda->AutoSize = true;
			this->labelTylda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelTylda->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->labelTylda->Location = System::Drawing::Point(869, 49);
			this->labelTylda->Name = L"labelTylda";
			this->labelTylda->Size = System::Drawing::Size(38, 39);
			this->labelTylda->TabIndex = 4;
			this->labelTylda->Text = L"~";
			// 
			// labelTime
			// 
			this->labelTime->AutoSize = true;
			this->labelTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelTime->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->labelTime->Location = System::Drawing::Point(902, 38);
			this->labelTime->Name = L"labelTime";
			this->labelTime->Size = System::Drawing::Size(0, 39);
			this->labelTime->TabIndex = 3;
			this->labelTime->Text = msclr::interop::marshal_as<System::String^>(calculateTime(distanceRem));

			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(264, 29);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(80, 48);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// labelDestination
			// 
			this->labelDestination->AutoSize = true;
			this->labelDestination->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelDestination->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelDestination->Location = System::Drawing::Point(430, 38);
			this->labelDestination->Name = L"labelDestination";
			this->labelDestination->Size = System::Drawing::Size(0, 39);
			this->labelDestination->TabIndex = 1;
			this->labelDestination->Text = msclr::interop::marshal_as<System::String^>(dest);

			// 
			// labelDeparture
			// 
			this->labelDeparture->AutoSize = true;
			this->labelDeparture->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelDeparture->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelDeparture->Location = System::Drawing::Point(58, 38);
			this->labelDeparture->Name = L"labelDeparture";
			this->labelDeparture->Size = System::Drawing::Size(0, 39);
			this->labelDeparture->TabIndex = 0;
			this->labelDeparture->Text = msclr::interop::marshal_as<System::String^>(dep);

			// 
			// labelDate
			// 
			this->labelDate->AutoSize = true;
			this->labelDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelDate->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelDate->Location = System::Drawing::Point(24, 206);
			this->labelDate->Name = L"labelDate";
			this->labelDate->Size = System::Drawing::Size(85, 29);
			this->labelDate->TabIndex = 2;
			this->labelDate->Text = L"Date*:";
			// 
			// textBoxDD
			// 
			this->textBoxDD->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->textBoxDD->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxDD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxDD->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->textBoxDD->Location = System::Drawing::Point(120, 203);
			this->textBoxDD->Name = L"textBoxDD";
			this->textBoxDD->Size = System::Drawing::Size(29, 30);
			this->textBoxDD->TabIndex = 3;
			// 
			// labelDateSep
			// 
			this->labelDateSep->AutoSize = true;
			this->labelDateSep->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelDateSep->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelDateSep->Location = System::Drawing::Point(155, 202);
			this->labelDateSep->Name = L"labelDateSep";
			this->labelDateSep->Size = System::Drawing::Size(24, 33);
			this->labelDateSep->TabIndex = 4;
			this->labelDateSep->Text = L"/";
			// 
			// textBoxMM
			// 
			this->textBoxMM->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->textBoxMM->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxMM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxMM->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->textBoxMM->Location = System::Drawing::Point(180, 203);
			this->textBoxMM->Name = L"textBoxMM";
			this->textBoxMM->Size = System::Drawing::Size(29, 30);
			this->textBoxMM->TabIndex = 6;
			// 
			// labelDateFormat
			// 
			this->labelDateFormat->AutoSize = true;
			this->labelDateFormat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelDateFormat->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelDateFormat->Location = System::Drawing::Point(215, 218);
			this->labelDateFormat->Name = L"labelDateFormat";
			this->labelDateFormat->Size = System::Drawing::Size(54, 15);
			this->labelDateFormat->TabIndex = 7;
			this->labelDateFormat->Text = L"(dd/mm)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->label3->Location = System::Drawing::Point(24, 296);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 29);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Time*:";
			// 
			// textBoxHours
			// 
			this->textBoxHours->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->textBoxHours->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxHours->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxHours->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->textBoxHours->Location = System::Drawing::Point(120, 297);
			this->textBoxHours->Name = L"textBoxHours";
			this->textBoxHours->Size = System::Drawing::Size(29, 30);
			this->textBoxHours->TabIndex = 9;
			// 
			// textBoxMinutes
			// 
			this->textBoxMinutes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->textBoxMinutes->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxMinutes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxMinutes->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->textBoxMinutes->Location = System::Drawing::Point(180, 297);
			this->textBoxMinutes->Name = L"textBoxMinutes";
			this->textBoxMinutes->Size = System::Drawing::Size(29, 30);
			this->textBoxMinutes->TabIndex = 10;
			// 
			// labelTimeSeparator
			// 
			this->labelTimeSeparator->AutoSize = true;
			this->labelTimeSeparator->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->labelTimeSeparator->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelTimeSeparator->Location = System::Drawing::Point(155, 292);
			this->labelTimeSeparator->Name = L"labelTimeSeparator";
			this->labelTimeSeparator->Size = System::Drawing::Size(24, 33);
			this->labelTimeSeparator->TabIndex = 11;
			this->labelTimeSeparator->Text = L":";
			// 
			// labelTimeFormat
			// 
			this->labelTimeFormat->AutoSize = true;
			this->labelTimeFormat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelTimeFormat->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelTimeFormat->Location = System::Drawing::Point(215, 312);
			this->labelTimeFormat->Name = L"labelTimeFormat";
			this->labelTimeFormat->Size = System::Drawing::Size(54, 15);
			this->labelTimeFormat->TabIndex = 12;
			this->labelTimeFormat->Text = L"(hh:mm)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->label1->Location = System::Drawing::Point(24, 386);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 29);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Gate:";
			// 
			// textBoxGate
			// 
			this->textBoxGate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->textBoxGate->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxGate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxGate->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->textBoxGate->Location = System::Drawing::Point(120, 385);
			this->textBoxGate->Name = L"textBoxGate";
			this->textBoxGate->Size = System::Drawing::Size(59, 30);
			this->textBoxGate->TabIndex = 14;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->label2->Location = System::Drawing::Point(24, 475);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(193, 29);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Aircraft model*:";
			// 
			// checkBoxBoeing
			// 
			this->checkBoxBoeing->AutoSize = true;
			this->checkBoxBoeing->FlatAppearance->BorderSize = 0;
			this->checkBoxBoeing->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBoxBoeing->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->checkBoxBoeing->Location = System::Drawing::Point(45, 539);
			this->checkBoxBoeing->Name = L"checkBoxBoeing";
			this->checkBoxBoeing->Size = System::Drawing::Size(183, 29);
			this->checkBoxBoeing->TabIndex = 16;
			this->checkBoxBoeing->Text = L"Boeing 737-800";
			this->checkBoxBoeing->UseVisualStyleBackColor = true;
			this->checkBoxBoeing->CheckedChanged += gcnew System::EventHandler(this, &Map2::checkBoxBoeing_CheckedChanged);
			// 
			// checkBoxAirbus
			// 
			this->checkBoxAirbus->AutoSize = true;
			this->checkBoxAirbus->FlatAppearance->BorderSize = 0;
			this->checkBoxAirbus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBoxAirbus->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->checkBoxAirbus->Location = System::Drawing::Point(45, 586);
			this->checkBoxAirbus->Name = L"checkBoxAirbus";
			this->checkBoxAirbus->Size = System::Drawing::Size(191, 29);
			this->checkBoxAirbus->TabIndex = 17;
			this->checkBoxAirbus->Text = L"Airbus A320-200";
			this->checkBoxAirbus->UseVisualStyleBackColor = true;
			this->checkBoxAirbus->CheckedChanged += gcnew System::EventHandler(this, &Map2::checkBoxAirbus_CheckedChanged);
			// 
			// pictureBoxBoeing
			// 
			this->pictureBoxBoeing->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxBoeing.Image")));
			this->pictureBoxBoeing->Location = System::Drawing::Point(363, 120);
			this->pictureBoxBoeing->Name = L"pictureBoxBoeing";
			this->pictureBoxBoeing->Size = System::Drawing::Size(410, 483);
			this->pictureBoxBoeing->TabIndex = 18;
			this->pictureBoxBoeing->TabStop = false;
			this->pictureBoxBoeing->Visible = false;
			// 
			// pictureBoxAirbus
			// 
			this->pictureBoxAirbus->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxAirbus.Image")));
			this->pictureBoxAirbus->Location = System::Drawing::Point(363, 120);
			this->pictureBoxAirbus->Name = L"pictureBoxAirbus";
			this->pictureBoxAirbus->Size = System::Drawing::Size(410, 483);
			this->pictureBoxAirbus->TabIndex = 19;
			this->pictureBoxAirbus->TabStop = false;
			this->pictureBoxAirbus->Visible = false;
			// 
			// infoLabelDD
			// 
			this->infoLabelDD->AutoSize = true;
			this->infoLabelDD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->infoLabelDD->ForeColor = System::Drawing::Color::Red;
			this->infoLabelDD->Location = System::Drawing::Point(42, 244);
			this->infoLabelDD->Name = L"infoLabelDD";
			this->infoLabelDD->Size = System::Drawing::Size(0, 13);
			this->infoLabelDD->TabIndex = 20;
			// 
			// buttonConfirm
			// 
			this->buttonConfirm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->buttonConfirm->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->buttonConfirm->FlatAppearance->BorderSize = 0;
			this->buttonConfirm->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonConfirm->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->buttonConfirm->Location = System::Drawing::Point(816, 539);
			this->buttonConfirm->Name = L"buttonConfirm";
			this->buttonConfirm->Size = System::Drawing::Size(194, 64);
			this->buttonConfirm->TabIndex = 28;
			this->buttonConfirm->Text = L"Confirm";
			this->buttonConfirm->UseVisualStyleBackColor = false;
			this->buttonConfirm->Click += gcnew System::EventHandler(this, &Map2::buttonConfirm_Click);
			// 
			// infoLabelHH
			// 
			this->infoLabelHH->AutoSize = true;
			this->infoLabelHH->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->infoLabelHH->ForeColor = System::Drawing::Color::Red;
			this->infoLabelHH->Location = System::Drawing::Point(42, 335);
			this->infoLabelHH->Name = L"infoLabelHH";
			this->infoLabelHH->Size = System::Drawing::Size(0, 13);
			this->infoLabelHH->TabIndex = 29;
			// 
			// labelGateFormat
			// 
			this->labelGateFormat->AutoSize = true;
			this->labelGateFormat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelGateFormat->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelGateFormat->Location = System::Drawing::Point(185, 400);
			this->labelGateFormat->Name = L"labelGateFormat";
			this->labelGateFormat->Size = System::Drawing::Size(149, 15);
			this->labelGateFormat->TabIndex = 30;
			this->labelGateFormat->Text = L"([A-Z][1-99], e.g. A01, G12)";
			// 
			// infoLabelModel
			// 
			this->infoLabelModel->AutoSize = true;
			this->infoLabelModel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->infoLabelModel->ForeColor = System::Drawing::Color::Red;
			this->infoLabelModel->Location = System::Drawing::Point(42, 618);
			this->infoLabelModel->Name = L"infoLabelModel";
			this->infoLabelModel->Size = System::Drawing::Size(0, 13);
			this->infoLabelModel->TabIndex = 31;
			// 
			// infoLabelGate
			// 
			this->infoLabelGate->AutoSize = true;
			this->infoLabelGate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->infoLabelGate->ForeColor = System::Drawing::Color::Red;
			this->infoLabelGate->Location = System::Drawing::Point(42, 430);
			this->infoLabelGate->Name = L"infoLabelGate";
			this->infoLabelGate->Size = System::Drawing::Size(0, 13);
			this->infoLabelGate->TabIndex = 32;
			// 
			// Map2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->ClientSize = System::Drawing::Size(1039, 681);
			this->Controls->Add(this->infoLabelGate);
			this->Controls->Add(this->infoLabelModel);
			this->Controls->Add(this->labelGateFormat);
			this->Controls->Add(this->infoLabelHH);
			this->Controls->Add(this->buttonConfirm);
			this->Controls->Add(this->infoLabelDD);
			this->Controls->Add(this->pictureBoxAirbus);
			this->Controls->Add(this->pictureBoxBoeing);
			this->Controls->Add(this->checkBoxAirbus);
			this->Controls->Add(this->checkBoxBoeing);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxGate);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->labelTimeFormat);
			this->Controls->Add(this->labelTimeSeparator);
			this->Controls->Add(this->textBoxMinutes);
			this->Controls->Add(this->textBoxHours);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->labelDateFormat);
			this->Controls->Add(this->textBoxMM);
			this->Controls->Add(this->labelDateSep);
			this->Controls->Add(this->textBoxDD);
			this->Controls->Add(this->labelDate);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->background);
			this->Name = L"Map2";
			this->Text = L"Home1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->background))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxBoeing))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxAirbus))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:
			/**
* @brief Funkcja zamienia dystans na czas lotu.
* @return zwraca string w formacie hh:mm
*/
			static std::string calculateTime(int dist);

		private: 
			/**
* @brief Funkcja obsluguje zmiane koloru checkboxow.
*/
			System::Void checkBoxBoeing_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
			/**
* @brief Funkcja obsluguje zmiane koloru checkboxow.
*/
			System::Void checkBoxAirbus_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
			/**
* @brief Funkcja weryfikuje wszystkie inputy uzytkownika.
* @return zwraca true - jezeli inputy sa poprawne lub false w przeciwnym wypadku.
*/
			bool validTextBoxes();
			/**
* @brief Funkcja tworzy nowy obiektu lotu i nastepnie otwiera form (List1.h).
*/
			System::Void buttonConfirm_Click(System::Object^ sender, System::EventArgs^ e);
			/**
* @brief Funkcja tworzy nowy obiekt forma wewnatrz panelu.
*/
			System::Void openChildForm(Form^ childForm, Object^ btnSender);

 


};
}
