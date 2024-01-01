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
	public ref class SaveLoad1 : public System::Windows::Forms::Form
	{
	public:
		SaveLoad1(void)
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
		~SaveLoad1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ background;
	private: System::Windows::Forms::Button^ buttonSave;
	private: System::Windows::Forms::Button^ buttonLoad;
	private: System::Windows::Forms::TextBox^ textBoxSave;

	private: System::Windows::Forms::Label^ labelInfo1;
	private: System::Windows::Forms::Label^ labelInfo2;
	private: System::Windows::Forms::Label^ labelInfo3;
	private: System::Windows::Forms::Label^ labelInfo4;
	private: System::Windows::Forms::TextBox^ textBoxLoad;
	private: System::Windows::Forms::Label^ labelErrorSave;
	private: System::Windows::Forms::Label^ labelErrorLoad;
















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
			this->background = (gcnew System::Windows::Forms::PictureBox());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->buttonLoad = (gcnew System::Windows::Forms::Button());
			this->textBoxSave = (gcnew System::Windows::Forms::TextBox());
			this->labelInfo1 = (gcnew System::Windows::Forms::Label());
			this->labelInfo2 = (gcnew System::Windows::Forms::Label());
			this->labelInfo3 = (gcnew System::Windows::Forms::Label());
			this->labelInfo4 = (gcnew System::Windows::Forms::Label());
			this->textBoxLoad = (gcnew System::Windows::Forms::TextBox());
			this->labelErrorSave = (gcnew System::Windows::Forms::Label());
			this->labelErrorLoad = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->background))->BeginInit();
			this->SuspendLayout();
			// 
			// background
			// 
			this->background->Location = System::Drawing::Point(0, -1);
			this->background->Name = L"background";
			this->background->Size = System::Drawing::Size(1040, 720);
			this->background->TabIndex = 0;
			this->background->TabStop = false;
			// 
			// buttonSave
			// 
			this->buttonSave->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->buttonSave->FlatAppearance->BorderSize = 0;
			this->buttonSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonSave->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->buttonSave->Location = System::Drawing::Point(86, 103);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(311, 211);
			this->buttonSave->TabIndex = 1;
			this->buttonSave->Text = L"Save";
			this->buttonSave->UseVisualStyleBackColor = false;
			this->buttonSave->Click += gcnew System::EventHandler(this, &SaveLoad1::buttonSave_Click);
			// 
			// buttonLoad
			// 
			this->buttonLoad->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->buttonLoad->FlatAppearance->BorderSize = 0;
			this->buttonLoad->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonLoad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonLoad->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->buttonLoad->Location = System::Drawing::Point(635, 103);
			this->buttonLoad->Name = L"buttonLoad";
			this->buttonLoad->Size = System::Drawing::Size(311, 211);
			this->buttonLoad->TabIndex = 2;
			this->buttonLoad->Text = L"Load";
			this->buttonLoad->UseVisualStyleBackColor = false;
			this->buttonLoad->Click += gcnew System::EventHandler(this, &SaveLoad1::buttonLoad_Click);
			// 
			// textBoxSave
			// 
			this->textBoxSave->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->textBoxSave->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxSave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxSave->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->textBoxSave->Location = System::Drawing::Point(87, 440);
			this->textBoxSave->Name = L"textBoxSave";
			this->textBoxSave->Size = System::Drawing::Size(310, 40);
			this->textBoxSave->TabIndex = 3;
			// 
			// labelInfo1
			// 
			this->labelInfo1->AutoSize = true;
			this->labelInfo1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelInfo1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelInfo1->Location = System::Drawing::Point(77, 351);
			this->labelInfo1->Name = L"labelInfo1";
			this->labelInfo1->Size = System::Drawing::Size(257, 55);
			this->labelInfo1->TabIndex = 4;
			this->labelInfo1->Text = L"File name:";
			// 
			// labelInfo2
			// 
			this->labelInfo2->AutoSize = true;
			this->labelInfo2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelInfo2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelInfo2->Location = System::Drawing::Point(83, 406);
			this->labelInfo2->Name = L"labelInfo2";
			this->labelInfo2->Size = System::Drawing::Size(234, 20);
			this->labelInfo2->TabIndex = 5;
			this->labelInfo2->Text = L"(Files from project directory)";
			// 
			// labelInfo3
			// 
			this->labelInfo3->AutoSize = true;
			this->labelInfo3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelInfo3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelInfo3->Location = System::Drawing::Point(625, 351);
			this->labelInfo3->Name = L"labelInfo3";
			this->labelInfo3->Size = System::Drawing::Size(257, 55);
			this->labelInfo3->TabIndex = 6;
			this->labelInfo3->Text = L"File name:";
			// 
			// labelInfo4
			// 
			this->labelInfo4->AutoSize = true;
			this->labelInfo4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelInfo4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelInfo4->Location = System::Drawing::Point(631, 406);
			this->labelInfo4->Name = L"labelInfo4";
			this->labelInfo4->Size = System::Drawing::Size(234, 20);
			this->labelInfo4->TabIndex = 7;
			this->labelInfo4->Text = L"(Files from project directory)";
			// 
			// textBoxLoad
			// 
			this->textBoxLoad->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->textBoxLoad->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxLoad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxLoad->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->textBoxLoad->Location = System::Drawing::Point(636, 440);
			this->textBoxLoad->Name = L"textBoxLoad";
			this->textBoxLoad->Size = System::Drawing::Size(310, 40);
			this->textBoxLoad->TabIndex = 8;
			// 
			// labelErrorSave
			// 
			this->labelErrorSave->AutoSize = true;
			this->labelErrorSave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelErrorSave->ForeColor = System::Drawing::Color::Red;
			this->labelErrorSave->Location = System::Drawing::Point(84, 494);
			this->labelErrorSave->Name = L"labelErrorSave";
			this->labelErrorSave->Size = System::Drawing::Size(0, 15);
			this->labelErrorSave->TabIndex = 9;
			// 
			// labelErrorLoad
			// 
			this->labelErrorLoad->AutoSize = true;
			this->labelErrorLoad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelErrorLoad->ForeColor = System::Drawing::Color::Red;
			this->labelErrorLoad->Location = System::Drawing::Point(633, 494);
			this->labelErrorLoad->Name = L"labelErrorLoad";
			this->labelErrorLoad->Size = System::Drawing::Size(0, 15);
			this->labelErrorLoad->TabIndex = 10;
			// 
			// SaveLoad1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->ClientSize = System::Drawing::Size(1039, 681);
			this->Controls->Add(this->labelErrorLoad);
			this->Controls->Add(this->labelErrorSave);
			this->Controls->Add(this->textBoxLoad);
			this->Controls->Add(this->labelInfo4);
			this->Controls->Add(this->labelInfo3);
			this->Controls->Add(this->labelInfo2);
			this->Controls->Add(this->labelInfo1);
			this->Controls->Add(this->textBoxSave);
			this->Controls->Add(this->buttonLoad);
			this->Controls->Add(this->buttonSave);
			this->Controls->Add(this->background);
			this->Name = L"SaveLoad1";
			this->Text = L"Save//Load";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->background))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: bool validSave();
private: bool validLoad();



private: System::Void buttonSave_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonLoad_Click(System::Object^ sender, System::EventArgs^ e);



};
}
