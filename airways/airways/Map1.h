#pragma once
namespace airways {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	static std::string dep = "";
	static std::string dest = "";
	static int distanceRem = 0;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Map1 : public System::Windows::Forms::Form
	{
	private:array<System::Windows::Forms::Button^>^ buttonArray;

		   Form^ activeForm;

	public:
		Map1(void)
		{
			buttonArray = gcnew array<System::Windows::Forms::Button^>{nullptr, nullptr}; // inicjalizacja buttonArray

			InitializeComponent();
			activeForm = gcnew Form();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Map1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ Warsaw;
	private: System::Windows::Forms::Button^ Berlin;
	private: System::Windows::Forms::Button^ Paris;
	private: System::Windows::Forms::Button^ Madrid;
	private: System::Windows::Forms::Button^ London;
	private: System::Windows::Forms::Label^ labelWarsaw;
	private: System::Windows::Forms::Label^ labelBerlin;
	private: System::Windows::Forms::Label^ labelParis;
	private: System::Windows::Forms::Label^ labelMadrid;
	private: System::Windows::Forms::Label^ labelLondon;




	private: System::Windows::Forms::Button^ Prague;
	private: System::Windows::Forms::Button^ Ankara;
	private: System::Windows::Forms::Button^ Milan;

	private: System::Windows::Forms::Button^ Budapest;
	private: System::Windows::Forms::Button^ Tallinn;

	private: System::Windows::Forms::Label^ labelPrague;
	private: System::Windows::Forms::Label^ labelMilan;
	private: System::Windows::Forms::Label^ labelBudapest;
	private: System::Windows::Forms::Label^ labelAnkara;
	private: System::Windows::Forms::Label^ labelTallinn;
	private: System::Int32 buttonsClicked = 0;
	private: System::Windows::Forms::Panel^ confirmationPanel;
	private: System::Windows::Forms::Label^ labelDistance;
	private: System::Windows::Forms::Label^ labelDestination;
	private: System::Windows::Forms::Label^ labelDeparture;
	private: System::Windows::Forms::Label^ Distance;
	private: System::Windows::Forms::Label^ Destination;
	private: System::Windows::Forms::Label^ Departure;

	private: System::Windows::Forms::Button^ buttonConfirm;
	private: System::Windows::Forms::Label^ confirmMask;












	private:











	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Map1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Warsaw = (gcnew System::Windows::Forms::Button());
			this->Berlin = (gcnew System::Windows::Forms::Button());
			this->Paris = (gcnew System::Windows::Forms::Button());
			this->Madrid = (gcnew System::Windows::Forms::Button());
			this->London = (gcnew System::Windows::Forms::Button());
			this->labelWarsaw = (gcnew System::Windows::Forms::Label());
			this->labelBerlin = (gcnew System::Windows::Forms::Label());
			this->labelParis = (gcnew System::Windows::Forms::Label());
			this->labelMadrid = (gcnew System::Windows::Forms::Label());
			this->labelLondon = (gcnew System::Windows::Forms::Label());
			this->Prague = (gcnew System::Windows::Forms::Button());
			this->Ankara = (gcnew System::Windows::Forms::Button());
			this->Milan = (gcnew System::Windows::Forms::Button());
			this->Budapest = (gcnew System::Windows::Forms::Button());
			this->Tallinn = (gcnew System::Windows::Forms::Button());
			this->labelPrague = (gcnew System::Windows::Forms::Label());
			this->labelMilan = (gcnew System::Windows::Forms::Label());
			this->labelBudapest = (gcnew System::Windows::Forms::Label());
			this->labelAnkara = (gcnew System::Windows::Forms::Label());
			this->labelTallinn = (gcnew System::Windows::Forms::Label());
			this->confirmationPanel = (gcnew System::Windows::Forms::Panel());
			this->confirmMask = (gcnew System::Windows::Forms::Label());
			this->buttonConfirm = (gcnew System::Windows::Forms::Button());
			this->Distance = (gcnew System::Windows::Forms::Label());
			this->Destination = (gcnew System::Windows::Forms::Label());
			this->Departure = (gcnew System::Windows::Forms::Label());
			this->labelDistance = (gcnew System::Windows::Forms::Label());
			this->labelDestination = (gcnew System::Windows::Forms::Label());
			this->labelDeparture = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->confirmationPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1035, 680);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Warsaw
			// 
			this->Warsaw->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->Warsaw->FlatAppearance->BorderSize = 0;
			this->Warsaw->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Warsaw->Location = System::Drawing::Point(632, 268);
			this->Warsaw->Name = L"Warsaw";
			this->Warsaw->Size = System::Drawing::Size(25, 25);
			this->Warsaw->TabIndex = 1;
			this->Warsaw->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Warsaw->UseVisualStyleBackColor = false;
			this->Warsaw->Click += gcnew System::EventHandler(this, &Map1::Warsaw_Click);
			this->Warsaw->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Map1::Warsaw_Paint);
			// 
			// Berlin
			// 
			this->Berlin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->Berlin->FlatAppearance->BorderSize = 0;
			this->Berlin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Berlin->Location = System::Drawing::Point(497, 284);
			this->Berlin->Name = L"Berlin";
			this->Berlin->Size = System::Drawing::Size(25, 25);
			this->Berlin->TabIndex = 2;
			this->Berlin->UseVisualStyleBackColor = false;
			this->Berlin->Click += gcnew System::EventHandler(this, &Map1::Berlin_Click);
			this->Berlin->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Map1::Berlin_Paint);
			// 
			// Paris
			// 
			this->Paris->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->Paris->FlatAppearance->BorderSize = 0;
			this->Paris->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Paris->Location = System::Drawing::Point(310, 375);
			this->Paris->Name = L"Paris";
			this->Paris->Size = System::Drawing::Size(25, 25);
			this->Paris->TabIndex = 3;
			this->Paris->UseVisualStyleBackColor = false;
			this->Paris->Click += gcnew System::EventHandler(this, &Map1::Paris_Click);
			this->Paris->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Map1::Paris_Paint);
			// 
			// Madrid
			// 
			this->Madrid->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->Madrid->FlatAppearance->BorderSize = 0;
			this->Madrid->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Madrid->Location = System::Drawing::Point(174, 581);
			this->Madrid->Name = L"Madrid";
			this->Madrid->Size = System::Drawing::Size(25, 25);
			this->Madrid->TabIndex = 4;
			this->Madrid->UseVisualStyleBackColor = false;
			this->Madrid->Click += gcnew System::EventHandler(this, &Map1::Madrid_Click);
			this->Madrid->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Map1::Madrid_Paint);
			// 
			// London
			// 
			this->London->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->London->FlatAppearance->BorderSize = 0;
			this->London->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->London->Location = System::Drawing::Point(260, 272);
			this->London->Name = L"London";
			this->London->Size = System::Drawing::Size(25, 25);
			this->London->TabIndex = 5;
			this->London->UseVisualStyleBackColor = false;
			this->London->Click += gcnew System::EventHandler(this, &Map1::London_Click);
			this->London->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Map1::London_Paint);
			// 
			// labelWarsaw
			// 
			this->labelWarsaw->AutoSize = true;
			this->labelWarsaw->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelWarsaw->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelWarsaw->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelWarsaw->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->labelWarsaw->Location = System::Drawing::Point(617, 296);
			this->labelWarsaw->Name = L"labelWarsaw";
			this->labelWarsaw->Size = System::Drawing::Size(62, 16);
			this->labelWarsaw->TabIndex = 6;
			this->labelWarsaw->Text = L"Warsaw";
			// 
			// labelBerlin
			// 
			this->labelBerlin->AutoSize = true;
			this->labelBerlin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelBerlin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelBerlin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelBerlin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->labelBerlin->Location = System::Drawing::Point(488, 312);
			this->labelBerlin->Name = L"labelBerlin";
			this->labelBerlin->Size = System::Drawing::Size(47, 16);
			this->labelBerlin->TabIndex = 7;
			this->labelBerlin->Text = L"Berlin";
			// 
			// labelParis
			// 
			this->labelParis->AutoSize = true;
			this->labelParis->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelParis->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelParis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelParis->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->labelParis->Location = System::Drawing::Point(300, 403);
			this->labelParis->Name = L"labelParis";
			this->labelParis->Size = System::Drawing::Size(43, 16);
			this->labelParis->TabIndex = 8;
			this->labelParis->Text = L"Paris";
			// 
			// labelMadrid
			// 
			this->labelMadrid->AutoSize = true;
			this->labelMadrid->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelMadrid->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelMadrid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelMadrid->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->labelMadrid->Location = System::Drawing::Point(159, 609);
			this->labelMadrid->Name = L"labelMadrid";
			this->labelMadrid->Size = System::Drawing::Size(55, 16);
			this->labelMadrid->TabIndex = 9;
			this->labelMadrid->Text = L"Madrid";
			// 
			// labelLondon
			// 
			this->labelLondon->AutoSize = true;
			this->labelLondon->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelLondon->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelLondon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelLondon->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->labelLondon->Location = System::Drawing::Point(240, 300);
			this->labelLondon->Name = L"labelLondon";
			this->labelLondon->Size = System::Drawing::Size(58, 16);
			this->labelLondon->TabIndex = 10;
			this->labelLondon->Text = L"London";
			// 
			// Prague
			// 
			this->Prague->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->Prague->FlatAppearance->BorderSize = 0;
			this->Prague->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Prague->Location = System::Drawing::Point(536, 353);
			this->Prague->Name = L"Prague";
			this->Prague->Size = System::Drawing::Size(15, 15);
			this->Prague->TabIndex = 11;
			this->Prague->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Prague->UseVisualStyleBackColor = false;
			this->Prague->Click += gcnew System::EventHandler(this, &Map1::Prague_Click);
			this->Prague->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Map1::Prague_Paint);
			// 
			// Ankara
			// 
			this->Ankara->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->Ankara->FlatAppearance->BorderSize = 0;
			this->Ankara->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Ankara->Location = System::Drawing::Point(948, 560);
			this->Ankara->Name = L"Ankara";
			this->Ankara->Size = System::Drawing::Size(25, 25);
			this->Ankara->TabIndex = 12;
			this->Ankara->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Ankara->UseVisualStyleBackColor = false;
			this->Ankara->Click += gcnew System::EventHandler(this, &Map1::Ankara_Click);
			this->Ankara->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Map1::Ankara_Paint);
			// 
			// Milan
			// 
			this->Milan->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->Milan->FlatAppearance->BorderSize = 0;
			this->Milan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Milan->Location = System::Drawing::Point(444, 486);
			this->Milan->Name = L"Milan";
			this->Milan->Size = System::Drawing::Size(15, 15);
			this->Milan->TabIndex = 13;
			this->Milan->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Milan->UseVisualStyleBackColor = false;
			this->Milan->Click += gcnew System::EventHandler(this, &Map1::Milan_Click);
			this->Milan->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Map1::Milan_Paint);
			// 
			// Budapest
			// 
			this->Budapest->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->Budapest->FlatAppearance->BorderSize = 0;
			this->Budapest->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Budapest->Location = System::Drawing::Point(632, 413);
			this->Budapest->Name = L"Budapest";
			this->Budapest->Size = System::Drawing::Size(15, 15);
			this->Budapest->TabIndex = 14;
			this->Budapest->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Budapest->UseVisualStyleBackColor = false;
			this->Budapest->Click += gcnew System::EventHandler(this, &Map1::Budapest_Click);
			this->Budapest->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Map1::Budapest_Paint);
			// 
			// Tallinn
			// 
			this->Tallinn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->Tallinn->FlatAppearance->BorderSize = 0;
			this->Tallinn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Tallinn->Location = System::Drawing::Point(675, 63);
			this->Tallinn->Name = L"Tallinn";
			this->Tallinn->Size = System::Drawing::Size(15, 15);
			this->Tallinn->TabIndex = 15;
			this->Tallinn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Tallinn->UseVisualStyleBackColor = false;
			this->Tallinn->Click += gcnew System::EventHandler(this, &Map1::Tallinn_Click);
			this->Tallinn->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Map1::Tallinn_Paint);
			// 
			// labelPrague
			// 
			this->labelPrague->AutoSize = true;
			this->labelPrague->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelPrague->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelPrague->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelPrague->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->labelPrague->Location = System::Drawing::Point(521, 371);
			this->labelPrague->Name = L"labelPrague";
			this->labelPrague->Size = System::Drawing::Size(47, 13);
			this->labelPrague->TabIndex = 16;
			this->labelPrague->Text = L"Prague";
			// 
			// labelMilan
			// 
			this->labelMilan->AutoSize = true;
			this->labelMilan->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelMilan->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelMilan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelMilan->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->labelMilan->Location = System::Drawing::Point(432, 504);
			this->labelMilan->Name = L"labelMilan";
			this->labelMilan->Size = System::Drawing::Size(37, 13);
			this->labelMilan->TabIndex = 17;
			this->labelMilan->Text = L"Milan";
			// 
			// labelBudapest
			// 
			this->labelBudapest->AutoSize = true;
			this->labelBudapest->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelBudapest->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelBudapest->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelBudapest->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->labelBudapest->Location = System::Drawing::Point(608, 431);
			this->labelBudapest->Name = L"labelBudapest";
			this->labelBudapest->Size = System::Drawing::Size(60, 13);
			this->labelBudapest->TabIndex = 18;
			this->labelBudapest->Text = L"Budapest";
			// 
			// labelAnkara
			// 
			this->labelAnkara->AutoSize = true;
			this->labelAnkara->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelAnkara->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelAnkara->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelAnkara->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->labelAnkara->Location = System::Drawing::Point(931, 588);
			this->labelAnkara->Name = L"labelAnkara";
			this->labelAnkara->Size = System::Drawing::Size(56, 16);
			this->labelAnkara->TabIndex = 19;
			this->labelAnkara->Text = L"Ankara";
			// 
			// labelTallinn
			// 
			this->labelTallinn->AutoSize = true;
			this->labelTallinn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelTallinn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labelTallinn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelTallinn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->labelTallinn->Location = System::Drawing::Point(662, 81);
			this->labelTallinn->Name = L"labelTallinn";
			this->labelTallinn->Size = System::Drawing::Size(45, 13);
			this->labelTallinn->TabIndex = 20;
			this->labelTallinn->Text = L"Tallinn";
			// 
			// confirmationPanel
			// 
			this->confirmationPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->confirmationPanel->Controls->Add(this->confirmMask);
			this->confirmationPanel->Controls->Add(this->buttonConfirm);
			this->confirmationPanel->Controls->Add(this->Distance);
			this->confirmationPanel->Controls->Add(this->Destination);
			this->confirmationPanel->Controls->Add(this->Departure);
			this->confirmationPanel->Controls->Add(this->labelDistance);
			this->confirmationPanel->Controls->Add(this->labelDestination);
			this->confirmationPanel->Controls->Add(this->labelDeparture);
			this->confirmationPanel->Location = System::Drawing::Point(0, 0);
			this->confirmationPanel->Name = L"confirmationPanel";
			this->confirmationPanel->Size = System::Drawing::Size(550, 100);
			this->confirmationPanel->TabIndex = 21;
			// 
			// confirmMask
			// 
			this->confirmMask->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->confirmMask->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->confirmMask->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->confirmMask->Location = System::Drawing::Point(444, 64);
			this->confirmMask->Name = L"confirmMask";
			this->confirmMask->Size = System::Drawing::Size(90, 30);
			this->confirmMask->TabIndex = 29;
			this->confirmMask->Text = L"Confirm";
			this->confirmMask->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->buttonConfirm->Location = System::Drawing::Point(444, 63);
			this->buttonConfirm->Name = L"buttonConfirm";
			this->buttonConfirm->Size = System::Drawing::Size(91, 28);
			this->buttonConfirm->TabIndex = 28;
			this->buttonConfirm->Text = L"Confirm";
			this->buttonConfirm->UseVisualStyleBackColor = false;
			this->buttonConfirm->Click += gcnew System::EventHandler(this, &Map1::buttonConfirm_Click);
			// 
			// Distance
			// 
			this->Distance->AutoSize = true;
			this->Distance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Distance->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->Distance->Location = System::Drawing::Point(334, 63);
			this->Distance->Name = L"Distance";
			this->Distance->Size = System::Drawing::Size(98, 24);
			this->Distance->TabIndex = 26;
			this->Distance->Text = L"________";
			// 
			// Destination
			// 
			this->Destination->AutoSize = true;
			this->Destination->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->Destination->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Destination->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->Destination->Location = System::Drawing::Point(183, 63);
			this->Destination->Name = L"Destination";
			this->Destination->Size = System::Drawing::Size(98, 24);
			this->Destination->TabIndex = 25;
			this->Destination->Text = L"________";
			// 
			// Departure
			// 
			this->Departure->AutoSize = true;
			this->Departure->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->Departure->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Departure->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->Departure->Location = System::Drawing::Point(35, 63);
			this->Departure->Name = L"Departure";
			this->Departure->Size = System::Drawing::Size(98, 24);
			this->Departure->TabIndex = 24;
			this->Departure->Text = L"________";
			// 
			// labelDistance
			// 
			this->labelDistance->AutoSize = true;
			this->labelDistance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelDistance->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelDistance->Location = System::Drawing::Point(334, 14);
			this->labelDistance->Name = L"labelDistance";
			this->labelDistance->Size = System::Drawing::Size(90, 24);
			this->labelDistance->TabIndex = 23;
			this->labelDistance->Text = L"Distance";
			// 
			// labelDestination
			// 
			this->labelDestination->AutoSize = true;
			this->labelDestination->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelDestination->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelDestination->Location = System::Drawing::Point(179, 14);
			this->labelDestination->Name = L"labelDestination";
			this->labelDestination->Size = System::Drawing::Size(113, 24);
			this->labelDestination->TabIndex = 22;
			this->labelDestination->Text = L"Destination";
			// 
			// labelDeparture
			// 
			this->labelDeparture->AutoSize = true;
			this->labelDeparture->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->labelDeparture->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelDeparture->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelDeparture->Location = System::Drawing::Point(35, 14);
			this->labelDeparture->Name = L"labelDeparture";
			this->labelDeparture->Size = System::Drawing::Size(102, 24);
			this->labelDeparture->TabIndex = 0;
			this->labelDeparture->Text = L"Departure";
			// 
			// Map1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1039, 681);
			this->Controls->Add(this->confirmationPanel);
			this->Controls->Add(this->labelTallinn);
			this->Controls->Add(this->labelAnkara);
			this->Controls->Add(this->labelBudapest);
			this->Controls->Add(this->labelMilan);
			this->Controls->Add(this->labelPrague);
			this->Controls->Add(this->Tallinn);
			this->Controls->Add(this->Budapest);
			this->Controls->Add(this->Milan);
			this->Controls->Add(this->Ankara);
			this->Controls->Add(this->Prague);
			this->Controls->Add(this->labelLondon);
			this->Controls->Add(this->labelMadrid);
			this->Controls->Add(this->labelParis);
			this->Controls->Add(this->labelBerlin);
			this->Controls->Add(this->labelWarsaw);
			this->Controls->Add(this->London);
			this->Controls->Add(this->Madrid);
			this->Controls->Add(this->Paris);
			this->Controls->Add(this->Berlin);
			this->Controls->Add(this->Warsaw);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Map1";
			this->Text = L"Map1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->confirmationPanel->ResumeLayout(false);
			this->confirmationPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		/**
 * @brief Funkcja liczy odleglosc miedzy 2 miastami w pikselach,
 * nastepnie przemnaza wartosc przez stala, aby przyblizyc realna odleglosc w kilometrach.
 */
		System::Void calculateDistance(Button^ button1, Button^ button2);
		/**
 * @brief Funkcja tworzy okragly przycisk do wybierania miast.
 */
		System::Void circleButton(System::Windows::Forms::Control^ control);
		/**
* @brief Funkcja odpowiada za rysowanie zakrzywionej linii.
*/
		System::Void drawCurvedLine(Graphics^ g, Point startPoint, Point controlPoint1, Point controlPoint2, Point endPoint, Color lineColor, float lineWidth);
		
 
		//Funkcje odpowiadaja ze zmiane guzikow na kola.

		System::Void Warsaw_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
		System::Void Berlin_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
		System::Void Paris_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
		System::Void Madrid_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
		System::Void London_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
		System::Void Prague_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
		System::Void Milan_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
		System::Void Budapest_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
		System::Void Ankara_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
		System::Void Tallinn_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);

		/**
* @brief Funckja obsluguje wybieranie dwoch miast, zapewnia ze jednoczesnie moga byc wybranie maksymalnie dwa,.
*/
		System::Void Map1::HandleButtonClick(Button^ button, Label^ label);

		/**
* @brief Funkcja odpowiada za rysowanie linii, ktora laczy 2 wybrane miasta.
*/
		System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e, System::Windows::Forms::Button^ button1, System::Windows::Forms::Button^ button2);
		/**
* @brief Funkcja odpowiada za zmiane koloru tekstu po wybraniu miasta.
*/

		System::Void airways::Map1::ChangeCityColor(System::Windows::Forms::Control^ cityButton, System::Windows::Forms::Label^ cityLabel);

		//Funkcje wywoluja  HandleButtonClick, dla kazdego z miast.

		System::Void Warsaw_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Berlin_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Prague_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Budapest_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Tallinn_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void London_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Paris_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Madrid_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Milan_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Ankara_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void OpenChildForm(Form^ childForm, Object^ btnSender);
		/**
* @brief Funkcja przekazuje wybranie miasta i otwiera nowy formularz (Map2.h).
*/
		System::Void buttonConfirm_Click(System::Object^ sender, System::EventArgs^ e);


};
}

