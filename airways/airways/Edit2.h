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

	public ref class Edit2 : public System::Windows::Forms::Form
	{
	public:
		Edit2(int aircraft)
		{
			InitializeComponent();
			if (aircraft == 1) {
				this->checkBoxFirstClass->Visible = false;
			}
			//



			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Edit2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelHeader;
	private: System::Windows::Forms::Label^ labelName;
	private: System::Windows::Forms::Label^ labelTicket;
	private: System::Windows::Forms::Label^ labelBaggages;



	private: System::Windows::Forms::TextBox^ textBoxName;
	private: System::Windows::Forms::Button^ buttonAdd;













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
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
private: System::Windows::Forms::Label^ labelSurname;
private: System::Windows::Forms::TextBox^ textBoxSurname;
private: System::Windows::Forms::CheckBox^ checkBoxEconmic;
private: System::Windows::Forms::CheckBox^ checkBoxBusiness;
private: System::Windows::Forms::CheckBox^ checkBoxFirstClass;
private: System::Windows::Forms::CheckBox^ checkBoxHand;
private: System::Windows::Forms::CheckBox^ checkBoxSmall;
private: System::Windows::Forms::CheckBox^ checkBoxChecked;



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
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->labelTicket = (gcnew System::Windows::Forms::Label());
			this->labelBaggages = (gcnew System::Windows::Forms::Label());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->infoLabelDD = (gcnew System::Windows::Forms::Label());
			this->infoLabelHH = (gcnew System::Windows::Forms::Label());
			this->infoLabelGate = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->labelSurname = (gcnew System::Windows::Forms::Label());
			this->textBoxSurname = (gcnew System::Windows::Forms::TextBox());
			this->checkBoxEconmic = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxBusiness = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxFirstClass = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxHand = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxSmall = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxChecked = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// labelHeader
			// 
			this->labelHeader->AutoSize = true;
			this->labelHeader->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelHeader->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelHeader->Location = System::Drawing::Point(393, 9);
			this->labelHeader->Name = L"labelHeader";
			this->labelHeader->Size = System::Drawing::Size(288, 42);
			this->labelHeader->TabIndex = 0;
			this->labelHeader->Text = L"Add Passenger";
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelName->Location = System::Drawing::Point(65, 79);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(117, 37);
			this->labelName->TabIndex = 1;
			this->labelName->Text = L"Name:";
			// 
			// labelTicket
			// 
			this->labelTicket->AutoSize = true;
			this->labelTicket->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelTicket->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelTicket->Location = System::Drawing::Point(65, 157);
			this->labelTicket->Name = L"labelTicket";
			this->labelTicket->Size = System::Drawing::Size(191, 37);
			this->labelTicket->TabIndex = 2;
			this->labelTicket->Text = L"Ticket type:";
			// 
			// labelBaggages
			// 
			this->labelBaggages->AutoSize = true;
			this->labelBaggages->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelBaggages->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelBaggages->Location = System::Drawing::Point(65, 239);
			this->labelBaggages->Name = L"labelBaggages";
			this->labelBaggages->Size = System::Drawing::Size(179, 37);
			this->labelBaggages->TabIndex = 3;
			this->labelBaggages->Text = L"Baggages:";
			// 
			// textBoxName
			// 
			this->textBoxName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->textBoxName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->textBoxName->Location = System::Drawing::Point(188, 78);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(188, 38);
			this->textBoxName->TabIndex = 4;
			// 
			// buttonAdd
			// 
			this->buttonAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->buttonAdd->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonAdd->FlatAppearance->BorderSize = 0;
			this->buttonAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonAdd->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->buttonAdd->Location = System::Drawing::Point(784, 248);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(225, 55);
			this->buttonAdd->TabIndex = 9;
			this->buttonAdd->Text = L"Add passenger";
			this->buttonAdd->UseVisualStyleBackColor = false;
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
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Location = System::Drawing::Point(12, 324);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(1020, 364);
			this->flowLayoutPanel1->TabIndex = 15;
			// 
			// labelSurname
			// 
			this->labelSurname->AutoSize = true;
			this->labelSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelSurname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelSurname->Location = System::Drawing::Point(480, 79);
			this->labelSurname->Name = L"labelSurname";
			this->labelSurname->Size = System::Drawing::Size(164, 37);
			this->labelSurname->TabIndex = 16;
			this->labelSurname->Text = L"Surname:";
			// 
			// textBoxSurname
			// 
			this->textBoxSurname->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->textBoxSurname->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->textBoxSurname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->textBoxSurname->Location = System::Drawing::Point(650, 78);
			this->textBoxSurname->Name = L"textBoxSurname";
			this->textBoxSurname->Size = System::Drawing::Size(179, 38);
			this->textBoxSurname->TabIndex = 17;
			// 
			// checkBoxEconmic
			// 
			this->checkBoxEconmic->AutoSize = true;
			this->checkBoxEconmic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBoxEconmic->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->checkBoxEconmic->Location = System::Drawing::Point(294, 165);
			this->checkBoxEconmic->Name = L"checkBoxEconmic";
			this->checkBoxEconmic->Size = System::Drawing::Size(106, 24);
			this->checkBoxEconmic->TabIndex = 18;
			this->checkBoxEconmic->Text = L"Economic";
			this->checkBoxEconmic->UseVisualStyleBackColor = true;
			// 
			// checkBoxBusiness
			// 
			this->checkBoxBusiness->AutoSize = true;
			this->checkBoxBusiness->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBoxBusiness->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->checkBoxBusiness->Location = System::Drawing::Point(447, 165);
			this->checkBoxBusiness->Name = L"checkBoxBusiness";
			this->checkBoxBusiness->Size = System::Drawing::Size(101, 24);
			this->checkBoxBusiness->TabIndex = 19;
			this->checkBoxBusiness->Text = L"Business";
			this->checkBoxBusiness->UseVisualStyleBackColor = true;
			// 
			// checkBoxFirstClass
			// 
			this->checkBoxFirstClass->AutoSize = true;
			this->checkBoxFirstClass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBoxFirstClass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->checkBoxFirstClass->Location = System::Drawing::Point(594, 165);
			this->checkBoxFirstClass->Name = L"checkBoxFirstClass";
			this->checkBoxFirstClass->Size = System::Drawing::Size(113, 24);
			this->checkBoxFirstClass->TabIndex = 20;
			this->checkBoxFirstClass->Text = L"First Class";
			this->checkBoxFirstClass->UseVisualStyleBackColor = true;
			// 
			// checkBoxHand
			// 
			this->checkBoxHand->AutoSize = true;
			this->checkBoxHand->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBoxHand->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->checkBoxHand->Location = System::Drawing::Point(294, 252);
			this->checkBoxHand->Name = L"checkBoxHand";
			this->checkBoxHand->Size = System::Drawing::Size(71, 24);
			this->checkBoxHand->TabIndex = 21;
			this->checkBoxHand->Text = L"Hand";
			this->checkBoxHand->UseVisualStyleBackColor = true;
			// 
			// checkBoxSmall
			// 
			this->checkBoxSmall->AutoSize = true;
			this->checkBoxSmall->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBoxSmall->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->checkBoxSmall->Location = System::Drawing::Point(447, 252);
			this->checkBoxSmall->Name = L"checkBoxSmall";
			this->checkBoxSmall->Size = System::Drawing::Size(72, 24);
			this->checkBoxSmall->TabIndex = 22;
			this->checkBoxSmall->Text = L"Small";
			this->checkBoxSmall->UseVisualStyleBackColor = true;
			// 
			// checkBoxChecked
			// 
			this->checkBoxChecked->AutoSize = true;
			this->checkBoxChecked->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBoxChecked->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->checkBoxChecked->Location = System::Drawing::Point(594, 252);
			this->checkBoxChecked->Name = L"checkBoxChecked";
			this->checkBoxChecked->Size = System::Drawing::Size(98, 24);
			this->checkBoxChecked->TabIndex = 23;
			this->checkBoxChecked->Text = L"Checked";
			this->checkBoxChecked->UseVisualStyleBackColor = true;
			// 
			// Edit2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->ClientSize = System::Drawing::Size(1040, 700);
			this->Controls->Add(this->checkBoxChecked);
			this->Controls->Add(this->checkBoxSmall);
			this->Controls->Add(this->checkBoxHand);
			this->Controls->Add(this->checkBoxFirstClass);
			this->Controls->Add(this->checkBoxBusiness);
			this->Controls->Add(this->checkBoxEconmic);
			this->Controls->Add(this->textBoxSurname);
			this->Controls->Add(this->labelSurname);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->infoLabelGate);
			this->Controls->Add(this->infoLabelHH);
			this->Controls->Add(this->infoLabelDD);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->textBoxName);
			this->Controls->Add(this->labelBaggages);
			this->Controls->Add(this->labelTicket);
			this->Controls->Add(this->labelName);
			this->Controls->Add(this->labelHeader);
			this->Name = L"Edit2";
			this->Text = L"Home1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:



};
}
