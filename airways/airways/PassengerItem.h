#pragma once
#include "Edit1.h"
#include "Edit2.h"

#include "vector"

namespace airways {

    using namespace System;
    using namespace System::Windows::Forms;

    public ref class PassengerItem : public UserControl
    {
    public:
        /**
* @brief Konstruktor PassengerItem wyswietla dane pasazera.
* @param str - wektor danych lotu.
* @param idx - indeks lotu.
* @param passIdx - indeks pasazera.
*/
        PassengerItem(std::vector<std::string> str,int idx,int passIdx)
        {
            InitializeComponent();
            this->idx = idx;
            this->passIdx = passIdx;
            std::vector<std::string> str2 = (*flights)[idx].getPassengers()[passIdx].getData();
            for (int i = 0; i < str.size() ; i++) {
                switch (i)
                {
                case 0:
                    this->labelName->Text = msclr::interop::marshal_as<System::String^>(str2[i]);
                    break;
                case 1:
                    this->labelSurname->Text = msclr::interop::marshal_as<System::String^>(str2[i]);
                    break;
                case 2:
                    //this->labelSeat->Text = msclr::interop::marshal_as<System::String^>(str[i]);
                    break;
                case 3:
                    this->labelSeatType->Text = msclr::interop::marshal_as<System::String^>(str2[i]);
                    break;
                case 4:
                    this->labelPrice->Text = msclr::interop::marshal_as<System::String^>(str2[i]);
                    break;
                case 5:
                    this->labelBaggages->Text = msclr::interop::marshal_as<System::String^>(str2[i]);
                    break;
                case 6:
                    this->labelBaggagesId->Text = msclr::interop::marshal_as<System::String^>(str2[i]);
                    break;
                default:
                    break;
                }
            }

        }

    protected:
        ~PassengerItem()
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






    private: System::Windows::Forms::Label^ labelSeatType;


    private: System::Windows::Forms::Button^ buttonEdit;
    private: System::Windows::Forms::Label^ infoLabelName;
    private: System::Windows::Forms::Label^ infoLabelSurname;

    private: System::Windows::Forms::Label^ infoLabelTicketType;
    private: System::Windows::Forms::Label^ labelPrice;
    private: System::Windows::Forms::Label^ infoLabelTicketPrice;

    private: System::Windows::Forms::Label^ labelBaggages;
    private: System::Windows::Forms::Label^ infoLabelBaggages;
    private: System::Windows::Forms::Label^ labelBaggagesId;
    private: System::Windows::Forms::Label^ infoLabelBaggagesId;









    protected:

    private:
        int idx;
        int passIdx;



           System::ComponentModel::Container^ components;
#pragma region components

           void InitializeComponent(void)
           {
               this->labelName = (gcnew System::Windows::Forms::Label());
               this->labelSurname = (gcnew System::Windows::Forms::Label());
               this->labelSeatType = (gcnew System::Windows::Forms::Label());
               this->buttonEdit = (gcnew System::Windows::Forms::Button());
               this->infoLabelName = (gcnew System::Windows::Forms::Label());
               this->infoLabelSurname = (gcnew System::Windows::Forms::Label());
               this->infoLabelTicketType = (gcnew System::Windows::Forms::Label());
               this->labelPrice = (gcnew System::Windows::Forms::Label());
               this->infoLabelTicketPrice = (gcnew System::Windows::Forms::Label());
               this->labelBaggages = (gcnew System::Windows::Forms::Label());
               this->infoLabelBaggages = (gcnew System::Windows::Forms::Label());
               this->labelBaggagesId = (gcnew System::Windows::Forms::Label());
               this->infoLabelBaggagesId = (gcnew System::Windows::Forms::Label());
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
               this->labelSurname->Location = System::Drawing::Point(206, 16);
               this->labelSurname->Name = L"labelSurname";
               this->labelSurname->Size = System::Drawing::Size(94, 24);
               this->labelSurname->TabIndex = 2;
               this->labelSurname->Text = L"Surname";
               // 
               // labelSeatType
               // 
               this->labelSeatType->AutoSize = true;
               this->labelSeatType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(238)));
               this->labelSeatType->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                   static_cast<System::Int32>(static_cast<System::Byte>(15)));
               this->labelSeatType->Location = System::Drawing::Point(18, 77);
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
               this->buttonEdit->Location = System::Drawing::Point(582, 16);
               this->buttonEdit->Name = L"buttonEdit";
               this->buttonEdit->Size = System::Drawing::Size(74, 30);
               this->buttonEdit->TabIndex = 9;
               this->buttonEdit->Text = L"delete";
               this->buttonEdit->UseVisualStyleBackColor = false;
               this->buttonEdit->Click += gcnew System::EventHandler(this, &PassengerItem::buttonEdit_Click);
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
               this->infoLabelSurname->Location = System::Drawing::Point(207, 49);
               this->infoLabelSurname->Name = L"infoLabelSurname";
               this->infoLabelSurname->Size = System::Drawing::Size(65, 15);
               this->infoLabelSurname->TabIndex = 10;
               this->infoLabelSurname->Text = L"Surname";
               // 
               // infoLabelTicketType
               // 
               this->infoLabelTicketType->AutoSize = true;
               this->infoLabelTicketType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(238)));
               this->infoLabelTicketType->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
                   static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
               this->infoLabelTicketType->Location = System::Drawing::Point(19, 110);
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
               this->infoLabelTicketPrice->Location = System::Drawing::Point(458, 50);
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
               this->labelBaggages->Location = System::Drawing::Point(206, 77);
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
               this->infoLabelBaggages->Location = System::Drawing::Point(207, 109);
               this->infoLabelBaggages->Name = L"infoLabelBaggages";
               this->infoLabelBaggages->Size = System::Drawing::Size(71, 15);
               this->infoLabelBaggages->TabIndex = 16;
               this->infoLabelBaggages->Text = L"Baggages";
               // 
               // labelBaggagesId
               // 
               this->labelBaggagesId->AutoSize = true;
               this->labelBaggagesId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(238)));
               this->labelBaggagesId->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                   static_cast<System::Int32>(static_cast<System::Byte>(15)));
               this->labelBaggagesId->Location = System::Drawing::Point(457, 77);
               this->labelBaggagesId->Name = L"labelBaggagesId";
               this->labelBaggagesId->Size = System::Drawing::Size(27, 24);
               this->labelBaggagesId->TabIndex = 17;
               this->labelBaggagesId->Text = L"id";
               // 
               // infoLabelBaggagesId
               // 
               this->infoLabelBaggagesId->AutoSize = true;
               this->infoLabelBaggagesId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(238)));
               this->infoLabelBaggagesId->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
                   static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
               this->infoLabelBaggagesId->Location = System::Drawing::Point(458, 105);
               this->infoLabelBaggagesId->Name = L"infoLabelBaggagesId";
               this->infoLabelBaggagesId->Size = System::Drawing::Size(87, 15);
               this->infoLabelBaggagesId->TabIndex = 18;
               this->infoLabelBaggagesId->Text = L"Baggages Id";
               // 
               // PassengerItem
               // 
               this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                   static_cast<System::Int32>(static_cast<System::Byte>(41)));
               this->Controls->Add(this->infoLabelBaggagesId);
               this->Controls->Add(this->labelBaggagesId);
               this->Controls->Add(this->infoLabelBaggages);
               this->Controls->Add(this->labelBaggages);
               this->Controls->Add(this->infoLabelTicketPrice);
               this->Controls->Add(this->labelPrice);
               this->Controls->Add(this->infoLabelTicketType);
               this->Controls->Add(this->infoLabelSurname);
               this->Controls->Add(this->buttonEdit);
               this->Controls->Add(this->labelSeatType);
               this->Controls->Add(this->infoLabelName);
               this->Controls->Add(this->labelSurname);
               this->Controls->Add(this->labelName);
               this->Name = L"PassengerItem";
               this->Size = System::Drawing::Size(675, 129);
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion





    private: 
        /**
* @brief Funkcja odpowiada za usuwanie pasazera z listy
*/
    System::Void buttonEdit_Click(System::Object^ sender, System::EventArgs^ e) {

        if (idx < flights->size()) {
            auto& passengers = (*flights)[idx].getPassengers();

            if (passIdx < passengers.size()) {
                passengers.erase(passengers.begin() + passIdx);

                this->Parent->Controls->Remove(this);
                delete this;
            }
        }

    }

};
}
