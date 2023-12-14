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
			this->London->Location = System::Drawing::Point(263, 284);
			this->London->Name = L"London";
			this->London->Size = System::Drawing::Size(25, 25);
			this->London->TabIndex = 5;
			this->London->UseVisualStyleBackColor = false;
			this->London->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Map1::London_Paint);
			// 
			// Map1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1039, 681);
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

		}
#pragma endregion
	private: 
	System::Void circleButton(System::Windows::Forms::Control^ control);
	System::Void Warsaw_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
    System::Void Berlin_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
	System::Void Paris_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
	System::Void Madrid_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
	System::Void London_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
	
		
	
	
	};
}
