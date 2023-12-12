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
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Input baggage";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(7, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"size";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(62, 45);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(34, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(104, 45);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(34, 20);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(144, 44);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(34, 20);
			this->textBox3->TabIndex = 4;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(63, 76);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(34, 20);
			this->textBox4->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(7, 75);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 18);
			this->label4->TabIndex = 7;
			this->label4->Text = L"weight";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(14, 114);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(82, 20);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(224, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(557, 134);
			this->listBox1->TabIndex = 9;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(144, 167);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(676, 517);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->FlatAppearance->BorderSize = 0;
			this->checkBox1->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->checkBox1->ForeColor = System::Drawing::Color::Transparent;
			this->checkBox1->Location = System::Drawing::Point(476, 455);
			this->checkBox1->Margin = System::Windows::Forms::Padding(0);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 11;
			this->checkBox1->UseVisualStyleBackColor = false;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::Color::Transparent;
			this->checkBox2->FlatAppearance->BorderSize = 0;
			this->checkBox2->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->checkBox2->ForeColor = System::Drawing::Color::Transparent;
			this->checkBox2->Location = System::Drawing::Point(390, 455);
			this->checkBox2->Margin = System::Windows::Forms::Padding(0);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(15, 14);
			this->checkBox2->TabIndex = 12;
			this->checkBox2->UseVisualStyleBackColor = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Form1_Paint);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion







	private:

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void Form1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{
	// Uzyskaj obiekt Graphics do rysowania na formularzu
	System::Drawing::Graphics^ g = e->Graphics;

	// Pobierz wspó³rzêdne punktów CheckBox1 i CheckBox2
	System::Drawing::Point point1 = checkBox1->Location;
	System::Drawing::Point point2 = checkBox2->Location;

	// Rysuj krzyw¹ liniê ³¹cz¹c¹ te dwa punkty
	array<System::Drawing::Point>^ points = { point1, System::Drawing::Point((point1.X + point2.X) / 2, point1.Y - 50), point2 };
	g->DrawCurve(System::Drawing::Pens::Green, points);
}

};
}
