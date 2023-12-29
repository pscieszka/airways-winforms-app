#pragma once
#include <msclr/marshal_cppstd.h>
#include "Form1.h"
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

	public ref class Edit1 : public System::Windows::Forms::Form
	{
	public:
		Edit1(int idx)
		{
			InitializeComponent();
			this->idx = idx;
			std::vector<std::string> str = (*flights)[idx].getData();
			this->textBoxDD->Text = msclr::interop::marshal_as<System::String^>(str[4].substr(0, 2));
			this->textBoxMM->Text = msclr::interop::marshal_as<System::String^>(str[4].substr(3));
			this->textBoxMinutes->Text = msclr::interop::marshal_as<System::String^>(str[7].substr(3));
			this->textBoxHours->Text = msclr::interop::marshal_as<System::String^>(str[7].substr(0, 2));
			this->textBoxGate->Text = msclr::interop::marshal_as<System::String^>(str[5]);
			//



			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Edit1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelHeader;
	private: System::Windows::Forms::Label^ labelDate;
	private: System::Windows::Forms::Label^ labelTime;
	private: System::Windows::Forms::Label^ labelGate;
	private: System::Windows::Forms::TextBox^ textBoxDD;
	private: System::Windows::Forms::TextBox^ textBoxMM;
	private: System::Windows::Forms::TextBox^ textBoxHours;
	private: System::Windows::Forms::TextBox^ textBoxMinutes;
	private: System::Windows::Forms::TextBox^ textBoxGate;





	private: System::Windows::Forms::Button^ buttonChangeData;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ infoLabelDD;
	private: System::Windows::Forms::Label^ infoLabelHH;


	private: System::Windows::Forms::Label^ infoLabelGate;


	protected:

	protected:












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
		int idx;


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
			this->labelHeader = (gcnew System::Windows::Forms::Label());
			this->labelDate = (gcnew System::Windows::Forms::Label());
			this->labelTime = (gcnew System::Windows::Forms::Label());
			this->labelGate = (gcnew System::Windows::Forms::Label());
			this->textBoxDD = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMM = (gcnew System::Windows::Forms::TextBox());
			this->textBoxHours = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMinutes = (gcnew System::Windows::Forms::TextBox());
			this->textBoxGate = (gcnew System::Windows::Forms::TextBox());
			this->buttonChangeData = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->infoLabelDD = (gcnew System::Windows::Forms::Label());
			this->infoLabelHH = (gcnew System::Windows::Forms::Label());
			this->infoLabelGate = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labelHeader
			// 
			this->labelHeader->AutoSize = true;
			this->labelHeader->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelHeader->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelHeader->Location = System::Drawing::Point(284, 9);
			this->labelHeader->Name = L"labelHeader";
			this->labelHeader->Size = System::Drawing::Size(269, 42);
			this->labelHeader->TabIndex = 0;
			this->labelHeader->Text = L"Edit flight data";
			// 
			// labelDate
			// 
			this->labelDate->AutoSize = true;
			this->labelDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelDate->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelDate->Location = System::Drawing::Point(65, 75);
			this->labelDate->Name = L"labelDate";
			this->labelDate->Size = System::Drawing::Size(98, 37);
			this->labelDate->TabIndex = 1;
			this->labelDate->Text = L"Date:";
			// 
			// labelTime
			// 
			this->labelTime->AutoSize = true;
			this->labelTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelTime->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelTime->Location = System::Drawing::Point(65, 157);
			this->labelTime->Name = L"labelTime";
			this->labelTime->Size = System::Drawing::Size(102, 37);
			this->labelTime->TabIndex = 2;
			this->labelTime->Text = L"Time:";
			// 
			// labelGate
			// 
			this->labelGate->AutoSize = true;
			this->labelGate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelGate->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelGate->Location = System::Drawing::Point(65, 239);
			this->labelGate->Name = L"labelGate";
			this->labelGate->Size = System::Drawing::Size(100, 37);
			this->labelGate->TabIndex = 3;
			this->labelGate->Text = L"Gate:";
			// 
			// textBoxDD
			// 
			this->textBoxDD->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->textBoxDD->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxDD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxDD->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->textBoxDD->Location = System::Drawing::Point(169, 72);
			this->textBoxDD->Name = L"textBoxDD";
			this->textBoxDD->Size = System::Drawing::Size(38, 38);
			this->textBoxDD->TabIndex = 4;
			// 
			// textBoxMM
			// 
			this->textBoxMM->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->textBoxMM->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxMM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxMM->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->textBoxMM->Location = System::Drawing::Point(245, 73);
			this->textBoxMM->Name = L"textBoxMM";
			this->textBoxMM->Size = System::Drawing::Size(38, 38);
			this->textBoxMM->TabIndex = 5;
			// 
			// textBoxHours
			// 
			this->textBoxHours->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->textBoxHours->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxHours->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxHours->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->textBoxHours->Location = System::Drawing::Point(169, 156);
			this->textBoxHours->Name = L"textBoxHours";
			this->textBoxHours->Size = System::Drawing::Size(38, 38);
			this->textBoxHours->TabIndex = 6;
			// 
			// textBoxMinutes
			// 
			this->textBoxMinutes->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->textBoxMinutes->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxMinutes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxMinutes->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->textBoxMinutes->Location = System::Drawing::Point(245, 156);
			this->textBoxMinutes->Name = L"textBoxMinutes";
			this->textBoxMinutes->Size = System::Drawing::Size(38, 38);
			this->textBoxMinutes->TabIndex = 7;
			// 
			// textBoxGate
			// 
			this->textBoxGate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->textBoxGate->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxGate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxGate->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->textBoxGate->Location = System::Drawing::Point(169, 238);
			this->textBoxGate->Name = L"textBoxGate";
			this->textBoxGate->Size = System::Drawing::Size(70, 38);
			this->textBoxGate->TabIndex = 8;
			// 
			// buttonChangeData
			// 
			this->buttonChangeData->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->buttonChangeData->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonChangeData->FlatAppearance->BorderSize = 0;
			this->buttonChangeData->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonChangeData->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonChangeData->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->buttonChangeData->Location = System::Drawing::Point(479, 234);
			this->buttonChangeData->Name = L"buttonChangeData";
			this->buttonChangeData->Size = System::Drawing::Size(225, 55);
			this->buttonChangeData->TabIndex = 9;
			this->buttonChangeData->Text = L"Change data";
			this->buttonChangeData->UseVisualStyleBackColor = false;
			this->buttonChangeData->Click += gcnew System::EventHandler(this, &Edit1::buttonChangeData_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->label1->Location = System::Drawing::Point(213, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 42);
			this->label1->TabIndex = 10;
			this->label1->Text = L"/";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->label2->Location = System::Drawing::Point(213, 152);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 42);
			this->label2->TabIndex = 11;
			this->label2->Text = L":";
			// 
			// infoLabelDD
			// 
			this->infoLabelDD->AutoSize = true;
			this->infoLabelDD->ForeColor = System::Drawing::Color::Red;
			this->infoLabelDD->Location = System::Drawing::Point(69, 122);
			this->infoLabelDD->Name = L"infoLabelDD";
			this->infoLabelDD->Size = System::Drawing::Size(0, 13);
			this->infoLabelDD->TabIndex = 12;
			// 
			// infoLabelHH
			// 
			this->infoLabelHH->AutoSize = true;
			this->infoLabelHH->ForeColor = System::Drawing::Color::Red;
			this->infoLabelHH->Location = System::Drawing::Point(69, 210);
			this->infoLabelHH->Name = L"infoLabelHH";
			this->infoLabelHH->Size = System::Drawing::Size(0, 13);
			this->infoLabelHH->TabIndex = 13;
			// 
			// infoLabelGate
			// 
			this->infoLabelGate->AutoSize = true;
			this->infoLabelGate->ForeColor = System::Drawing::Color::Red;
			this->infoLabelGate->Location = System::Drawing::Point(69, 290);
			this->infoLabelGate->Name = L"infoLabelGate";
			this->infoLabelGate->Size = System::Drawing::Size(0, 13);
			this->infoLabelGate->TabIndex = 14;
			// 
			// Edit1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->ClientSize = System::Drawing::Size(820, 369);
			this->Controls->Add(this->infoLabelGate);
			this->Controls->Add(this->infoLabelHH);
			this->Controls->Add(this->infoLabelDD);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonChangeData);
			this->Controls->Add(this->textBoxGate);
			this->Controls->Add(this->textBoxMinutes);
			this->Controls->Add(this->textBoxHours);
			this->Controls->Add(this->textBoxMM);
			this->Controls->Add(this->textBoxDD);
			this->Controls->Add(this->labelGate);
			this->Controls->Add(this->labelTime);
			this->Controls->Add(this->labelDate);
			this->Controls->Add(this->labelHeader);
			this->Name = L"Edit1";
			this->Text = L"Home1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		bool validTextBoxes();
		System::Void buttonChangeData_Click(System::Object^ sender, System::EventArgs^ e);

	};
}
