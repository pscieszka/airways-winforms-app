#pragma once
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
	public ref class Map1 : public System::Windows::Forms::Form
	{
	public:
		Map1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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



	private: System::Windows::Forms::Label^ label5;









	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	

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
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Map1::pictureBox1_Paint);
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
			this->Paris->Location = System::Drawing::Point(325, 403);
			this->Paris->Name = L"Paris";
			this->Paris->Size = System::Drawing::Size(25, 25);
			this->Paris->TabIndex = 3;
			this->Paris->UseVisualStyleBackColor = false;
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
			this->labelParis->Location = System::Drawing::Point(317, 431);
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
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->label5->Location = System::Drawing::Point(240, 300);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"London";
			// 
			// Map1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1039, 681);
			this->Controls->Add(this->label5);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
	System::Void circleButton(System::Windows::Forms::Control^ control);
	System::Void DrawCurvedLine(Graphics^ g, Point startPoint, Point controlPoint1, Point controlPoint2, Point endPoint, Color lineColor, int lineWidth);
	System::Void Warsaw_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
    System::Void Berlin_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
	System::Void Paris_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
	System::Void Madrid_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
	System::Void London_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	// Rysowanie zakrzywionej i zaokr¹glonej linii miêdzy przyciskami
	System::Drawing::Graphics^ g = e->Graphics;
	System::Drawing::Pen^ pen = gcnew System::Drawing::Pen(System::Drawing::Color::Gray,3);
	pen->StartCap = Drawing2D::LineCap::Round;
	pen->EndCap = Drawing2D::LineCap::Round;

	// Pobranie œrodków przycisków
	Point center1 = Point(Warsaw->Left + Warsaw->Width / 2, Warsaw->Top + Warsaw->Height / 2);
	Point center2 = Point(Berlin->Left + Berlin->Width / 2, Berlin->Top + Berlin->Height / 2);

	// Modyfikacja punktów kontrolnych, aby krzywa by³a zakrzywiona w górê
	int midX = (center1.X + center2.X) / 2;
	Point controlPoint1 = Point(midX, center1.Y - 10);  // Adjust the value (-50) to control the upward curvature
	Point controlPoint2 = Point(midX, center2.Y - 10);

	// Narysowanie zaokr¹glonej linii ³¹cz¹cej œrodki przycisków
	g->DrawBezier(pen, center1, controlPoint1, controlPoint2, center2);

	// Zwolnienie zasobów
	delete pen;
}


		
private: System::Void airways::Map1::ChangeCityColor(System::Windows::Forms::Control^ cityButton, System::Windows::Forms::Label^ cityLabel);

private: System::Void Warsaw_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void Berlin_Click(System::Object^ sender, System::EventArgs^ e);

};
}
