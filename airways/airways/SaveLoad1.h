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
	private: System::Windows::Forms::Button^ buttonExplorerSave;
	private: System::Windows::Forms::Button^ buttonExplorerLoad;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog;
	private: System::Windows::Forms::Panel^ panelheader;
	private: System::Windows::Forms::Label^ labelHeader;
















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SaveLoad1::typeid));
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
			this->buttonExplorerSave = (gcnew System::Windows::Forms::Button());
			this->buttonExplorerLoad = (gcnew System::Windows::Forms::Button());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panelheader = (gcnew System::Windows::Forms::Panel());
			this->labelHeader = (gcnew System::Windows::Forms::Label());
			this->panelheader->SuspendLayout();
			this->SuspendLayout();
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
			this->buttonSave->Location = System::Drawing::Point(86, 181);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(311, 133);
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
			this->buttonLoad->Location = System::Drawing::Point(582, 181);
			this->buttonLoad->Name = L"buttonLoad";
			this->buttonLoad->Size = System::Drawing::Size(311, 133);
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
			this->textBoxSave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxSave->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->textBoxSave->Location = System::Drawing::Point(86, 440);
			this->textBoxSave->Name = L"textBoxSave";
			this->textBoxSave->Size = System::Drawing::Size(350, 26);
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
			this->labelInfo3->Location = System::Drawing::Point(572, 351);
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
			this->labelInfo4->Location = System::Drawing::Point(578, 406);
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
			this->textBoxLoad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxLoad->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->textBoxLoad->Location = System::Drawing::Point(583, 440);
			this->textBoxLoad->Name = L"textBoxLoad";
			this->textBoxLoad->Size = System::Drawing::Size(350, 26);
			this->textBoxLoad->TabIndex = 8;
			// 
			// labelErrorSave
			// 
			this->labelErrorSave->AutoSize = true;
			this->labelErrorSave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelErrorSave->ForeColor = System::Drawing::Color::Red;
			this->labelErrorSave->Location = System::Drawing::Point(84, 483);
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
			this->labelErrorLoad->Location = System::Drawing::Point(580, 483);
			this->labelErrorLoad->Name = L"labelErrorLoad";
			this->labelErrorLoad->Size = System::Drawing::Size(0, 15);
			this->labelErrorLoad->TabIndex = 10;
			// 
			// buttonExplorerSave
			// 
			this->buttonExplorerSave->AutoEllipsis = true;
			this->buttonExplorerSave->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->buttonExplorerSave->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->buttonExplorerSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonExplorerSave->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonExplorerSave.Image")));
			this->buttonExplorerSave->Location = System::Drawing::Point(431, 440);
			this->buttonExplorerSave->Name = L"buttonExplorerSave";
			this->buttonExplorerSave->Size = System::Drawing::Size(35, 26);
			this->buttonExplorerSave->TabIndex = 11;
			this->buttonExplorerSave->UseVisualStyleBackColor = false;
			this->buttonExplorerSave->Click += gcnew System::EventHandler(this, &SaveLoad1::buttonExplorerSave_Click);
			// 
			// buttonExplorerLoad
			// 
			this->buttonExplorerLoad->AutoEllipsis = true;
			this->buttonExplorerLoad->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->buttonExplorerLoad->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->buttonExplorerLoad->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonExplorerLoad->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonExplorerLoad.Image")));
			this->buttonExplorerLoad->Location = System::Drawing::Point(928, 440);
			this->buttonExplorerLoad->Name = L"buttonExplorerLoad";
			this->buttonExplorerLoad->Size = System::Drawing::Size(40, 26);
			this->buttonExplorerLoad->TabIndex = 12;
			this->buttonExplorerLoad->UseVisualStyleBackColor = false;
			this->buttonExplorerLoad->Click += gcnew System::EventHandler(this, &SaveLoad1::buttonExplorerLoad_Click);
			// 
			// openFileDialog
			// 
			this->openFileDialog->FileName = L"openFileDialog";
			this->openFileDialog->Filter = L"\"Binary Files (*.bin)|*.bin|All Files (*.*)|*.*\";";
			this->openFileDialog->InitialDirectory = L"\"C:\\\\\"";
			// 
			// panelheader
			// 
			this->panelheader->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->panelheader->Controls->Add(this->labelHeader);
			this->panelheader->Location = System::Drawing::Point(0, 0);
			this->panelheader->Name = L"panelheader";
			this->panelheader->Size = System::Drawing::Size(1040, 100);
			this->panelheader->TabIndex = 13;
			// 
			// labelHeader
			// 
			this->labelHeader->AutoSize = true;
			this->labelHeader->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelHeader->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelHeader->Location = System::Drawing::Point(276, 21);
			this->labelHeader->Name = L"labelHeader";
			this->labelHeader->Size = System::Drawing::Size(420, 55);
			this->labelHeader->TabIndex = 14;
			this->labelHeader->Text = L"Manage data files";
			// 
			// SaveLoad1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->ClientSize = System::Drawing::Size(1039, 681);
			this->Controls->Add(this->panelheader);
			this->Controls->Add(this->buttonExplorerLoad);
			this->Controls->Add(this->buttonExplorerSave);
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
			this->Name = L"SaveLoad1";
			this->Text = L"Save//Load";
			this->panelheader->ResumeLayout(false);
			this->panelheader->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: 
	/**
* @brief Funkcja sprawdza czy zostala podana nazwa pliku do zapisu.
*/
	bool validSave();
	/**
* @brief Funkcja sprawdza czy zostala podana nazwa pliku do odczyt oraz czy taki plik istnieje.
*/
	bool validLoad();


	/**
* @brief Funkcja sprawdza czy plik jest otwarty i czy nie ma zadnego bledu,
* nastepnie zapisuje dane lotow binarnie. Po poprawnym zapisie zamyka plik
* i wyswietla wiadomosc - Succes.
*/
	System::Void buttonSave_Click(System::Object^ sender, System::EventArgs^ e);
	/**
* @brief Funkcja sprawdza czy plik jest otwarty i czy nie ma zadnego bledu,
* nastepnie odczytuje dane lotow zapisane binarnie. Po poprawnym odczycie zamyka plik
* i wyswietla wiadomosc - Succes.
*/
	System::Void buttonLoad_Click(System::Object^ sender, System::EventArgs^ e);


	/**
* @brief Funkcja odpowiada za wyswietlenie wyszukiwarki plikow.
*/
	System::Void buttonExplorerSave_Click(System::Object^ sender, System::EventArgs^ e);
	/**
* @brief Funkcja odpowiada za wyswietlenie wyszukiwarki plikow.
*/
	System::Void buttonExplorerLoad_Click(System::Object^ sender, System::EventArgs^ e);

};
}
