
#pragma once
#include "Edit1.h"
#include "Edit2.h"
#include "vector"
namespace airways {
    static bool isOpenEdit1 = false;
    static bool isOpenEdit2 = false;

    using namespace System;
    using namespace System::Windows::Forms;

    public ref class listItem : public UserControl
    {
    public:
        listItem(std::vector<std::string> str, int idx)
        {
            InitializeComponent();
         

        }

    protected:
        ~listItem()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ labelName;
    private: System::Windows::Forms::Label^ labelSurname;
    protected:

    protected:





    private: System::Windows::Forms::Label^ labelSeat;
    private: System::Windows::Forms::Label^ labelSeatType;


    private: System::Windows::Forms::Button^ buttonEdit;
    private: System::Windows::Forms::Label^ infoLabelName;
    private: System::Windows::Forms::Label^ infoLabelSurname;
    private: System::Windows::Forms::Label^ infoLabelSeat;
    private: System::Windows::Forms::Label^ infoLabelTicketType;
    private: System::Windows::Forms::Label^ labelPrice;
    private: System::Windows::Forms::Label^ infoLabelTicketPrice;

    private: System::Windows::Forms::Label^ labelBaggages;
    private: System::Windows::Forms::Label^ infoLabelBaggages;









    protected:

    private:



           System::ComponentModel::Container^ components;
#pragma region components

           void InitializeComponent(void)
           {
               this->labelName = (gcnew System::Windows::Forms::Label());
               this->labelSurname = (gcnew System::Windows::Forms::Label());
               this->labelSeat = (gcnew System::Windows::Forms::Label());
               this->labelSeatType = (gcnew System::Windows::Forms::Label());
               this->buttonEdit = (gcnew System::Windows::Forms::Button());
               this->infoLabelName = (gcnew System::Windows::Forms::Label());
               this->infoLabelSurname = (gcnew System::Windows::Forms::Label());
               this->infoLabelSeat = (gcnew System::Windows::Forms::Label());
               this->infoLabelTicketType = (gcnew System::Windows::Forms::Label());
               this->labelPrice = (gcnew System::Windows::Forms::Label());
               this->infoLabelTicketPrice = (gcnew System::Windows::Forms::Label());
               this->labelBaggages = (gcnew System::Windows::Forms::Label());
               this->infoLabelBaggages = (gcnew System::Windows::Forms::Label());
               this->SuspendLayout();
               // 
               // labelName
               // 
               this->labelName->AutoSize = true;
               this->labelName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(238)));
               this->labelName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                   static_cast<System::Int32>(static_cast<System::Byte>(15)));
               this->labelName->Location = System::Drawing::Point(18, 16);
               this->labelName->Name = L"labelName";
               this->labelName->Size = System::Drawing::Size(65, 24);
               this->labelName->TabIndex = 0;
               this->labelName->Text = L"Name";
               // 
               // labelSurname
               // 
               this->labelSurname->AutoSize = true;
               this->labelSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(238)));
               this->labelSurname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                   static_cast<System::Int32>(static_cast<System::Byte>(15)));
               this->labelSurname->Location = System::Drawing::Point(103, 16);
               this->labelSurname->Name = L"labelSurname";
               this->labelSurname->Size = System::Drawing::Size(94, 24);
               this->labelSurname->TabIndex = 2;
               this->labelSurname->Text = L"Surname";
               // 
               // labelSeat
               // 
               this->labelSeat->AutoSize = true;
               this->labelSeat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(238)));
               this->labelSeat->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                   static_cast<System::Int32>(static_cast<System::Byte>(15)));
               this->labelSeat->Location = System::Drawing::Point(227, 16);
               this->labelSeat->Name = L"labelSeat";
               this->labelSeat->Size = System::Drawing::Size(51, 24);
               this->labelSeat->TabIndex = 7;
               this->labelSeat->Text = L"Seat";
               // 
               // labelSeatType
               // 
               this->labelSeatType->AutoSize = true;
               this->labelSeatType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(238)));
               this->labelSeatType->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                   static_cast<System::Int32>(static_cast<System::Byte>(15)));
               this->labelSeatType->Location = System::Drawing::Point(343, 16);
               this->labelSeatType->Name = L"labelSeatType";
               this->labelSeatType->Size = System::Drawing::Size(93, 24);
               this->labelSeatType->TabIndex = 8;
               this->labelSeatType->Text = L"seat type";
               // 
               // buttonEdit
               // 
               this->buttonEdit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                   static_cast<System::Int32>(static_cast<System::Byte>(51)));
               this->buttonEdit->FlatAppearance->BorderSize = 0;
               this->buttonEdit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
               this->buttonEdit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(238)));
               this->buttonEdit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
                   static_cast<System::Int32>(static_cast<System::Byte>(153)));
               this->buttonEdit->Location = System::Drawing::Point(828, 16);
               this->buttonEdit->Name = L"buttonEdit";
               this->buttonEdit->Size = System::Drawing::Size(54, 30);
               this->buttonEdit->TabIndex = 9;
               this->buttonEdit->Text = L"edit";
               this->buttonEdit->UseVisualStyleBackColor = false;
               // 
               // infoLabelName
               // 
               this->infoLabelName->AutoSize = true;
               this->infoLabelName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(238)));
               this->infoLabelName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
                   static_cast<System::Int32>(static_cast<System::Byte>(153)));
               this->infoLabelName->Location = System::Drawing::Point(19, 49);
               this->infoLabelName->Name = L"infoLabelName";
               this->infoLabelName->Size = System::Drawing::Size(45, 15);
               this->infoLabelName->TabIndex = 3;
               this->infoLabelName->Text = L"Name";
               // 
               // infoLabelSurname
               // 
               this->infoLabelSurname->AutoSize = true;
               this->infoLabelSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(238)));
               this->infoLabelSurname->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
                   static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
               this->infoLabelSurname->Location = System::Drawing::Point(104, 49);
               this->infoLabelSurname->Name = L"infoLabelSurname";
               this->infoLabelSurname->Size = System::Drawing::Size(65, 15);
               this->infoLabelSurname->TabIndex = 10;
               this->infoLabelSurname->Text = L"Surname";
               // 
               // infoLabelSeat
               // 
               this->infoLabelSeat->AutoSize = true;
               this->infoLabelSeat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(238)));
               this->infoLabelSeat->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
                   static_cast<System::Int32>(static_cast<System::Byte>(153)));
               this->infoLabelSeat->Location = System::Drawing::Point(228, 49);
               this->infoLabelSeat->Name = L"infoLabelSeat";
               this->infoLabelSeat->Size = System::Drawing::Size(89, 15);
               this->infoLabelSeat->TabIndex = 11;
               this->infoLabelSeat->Text = L"Seat number";
               // 
               // infoLabelTicketType
               // 
               this->infoLabelTicketType->AutoSize = true;
               this->infoLabelTicketType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(238)));
               this->infoLabelTicketType->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
                   static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
               this->infoLabelTicketType->Location = System::Drawing::Point(344, 49);
               this->infoLabelTicketType->Name = L"infoLabelTicketType";
               this->infoLabelTicketType->Size = System::Drawing::Size(75, 15);
               this->infoLabelTicketType->TabIndex = 12;
               this->infoLabelTicketType->Text = L"Ticket type";
               // 
               // labelPrice
               // 
               this->labelPrice->AutoSize = true;
               this->labelPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(238)));
               this->labelPrice->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                   static_cast<System::Int32>(static_cast<System::Byte>(15)));
               this->labelPrice->Location = System::Drawing::Point(457, 17);
               this->labelPrice->Name = L"labelPrice";
               this->labelPrice->Size = System::Drawing::Size(91, 24);
               this->labelPrice->TabIndex = 13;
               this->labelPrice->Text = L"100 EUR";
               // 
               // infoLabelTicketPrice
               // 
               this->infoLabelTicketPrice->AutoSize = true;
               this->infoLabelTicketPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(238)));
               this->infoLabelTicketPrice->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
                   static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
               this->infoLabelTicketPrice->Location = System::Drawing::Point(458, 49);
               this->infoLabelTicketPrice->Name = L"infoLabelTicketPrice";
               this->infoLabelTicketPrice->Size = System::Drawing::Size(81, 15);
               this->infoLabelTicketPrice->TabIndex = 14;
               this->infoLabelTicketPrice->Text = L"Ticket price";
               // 
               // labelBaggages
               // 
               this->labelBaggages->AutoSize = true;
               this->labelBaggages->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(238)));
               this->labelBaggages->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                   static_cast<System::Int32>(static_cast<System::Byte>(15)));
               this->labelBaggages->Location = System::Drawing::Point(571, 17);
               this->labelBaggages->Name = L"labelBaggages";
               this->labelBaggages->Size = System::Drawing::Size(109, 24);
               this->labelBaggages->TabIndex = 15;
               this->labelBaggages->Text = L"baggessss";
               // 
               // infoLabelBaggages
               // 
               this->infoLabelBaggages->AutoSize = true;
               this->infoLabelBaggages->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(238)));
               this->infoLabelBaggages->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
                   static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
               this->infoLabelBaggages->Location = System::Drawing::Point(572, 49);
               this->infoLabelBaggages->Name = L"infoLabelBaggages";
               this->infoLabelBaggages->Size = System::Drawing::Size(71, 15);
               this->infoLabelBaggages->TabIndex = 16;
               this->infoLabelBaggages->Text = L"Baggages";
               // 
               // listItem
               // 
               this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                   static_cast<System::Int32>(static_cast<System::Byte>(41)));
               this->Controls->Add(this->infoLabelBaggages);
               this->Controls->Add(this->labelBaggages);
               this->Controls->Add(this->infoLabelTicketPrice);
               this->Controls->Add(this->labelPrice);
               this->Controls->Add(this->infoLabelTicketType);
               this->Controls->Add(this->infoLabelSeat);
               this->Controls->Add(this->infoLabelSurname);
               this->Controls->Add(this->buttonEdit);
               this->Controls->Add(this->labelSeatType);
               this->Controls->Add(this->labelSeat);
               this->Controls->Add(this->infoLabelName);
               this->Controls->Add(this->labelSurname);
               this->Controls->Add(this->labelName);
               this->Name = L"listItem";
               this->Size = System::Drawing::Size(900, 75);
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion


    }
    };
}
