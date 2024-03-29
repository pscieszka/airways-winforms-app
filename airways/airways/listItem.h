#pragma once
#include "Edit1.h"
#include "List1.h"
#include "Edit2.h"
#include "vector"
#include "PassengerList1.h"
namespace airways {
    static bool isOpenEdit1 = false;
    static bool isOpenEdit2 = false;
    static bool isOpenPassengersList1 = false;

    using namespace System;
    using namespace System::Windows::Forms;

    public ref class listItem : public UserControl
    {
    public:

        /**
* @brief Konstruktor ListItem wyswietla dane lotu.
* @param str - wektor danych lotu.
* @param idx - indeks lotu.
*/
        listItem(std::vector<std::string> str,int idx)
        {
            InitializeComponent();
            this->idx = idx;
            for (int i = 0; i < str.size()-1; i++) {
                switch (i)
                {
                case 0:
                    this->labelDeparture->Text = msclr::interop::marshal_as<System::String^>(str[i]);
                    break;
                case 1:
                    this->labelDestination->Text = msclr::interop::marshal_as<System::String^>(str[i]);
                    break;
                case 2:
                    if (str[i][0] == 'B') {
                        aircraftType = 0;
                    }
                    else {
                        aircraftType = 1;
                    }
                    this->labelAircraft->Text = msclr::interop::marshal_as<System::String^>(str[i]);
                    break;
                case 3:
                   this->labelDistance->Text = msclr::interop::marshal_as<System::String^>(str[i]) + " km";
                    break;
                case 4:
                    this->labelDate->Text = msclr::interop::marshal_as<System::String^>(str[i]);
                    break;
                case 5:
                    this->labelGate->Text = msclr::interop::marshal_as<System::String^>(str[i]);
                    break;
                case 6:
                    this->labelHours->Text = msclr::interop::marshal_as<System::String^>(str[i+1]) + " - " + msclr::interop::marshal_as<System::String^>(str[i]);
                    break;
                default:
                    break;
                }
            }

        }

    protected:
        ~listItem()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ labelDeparture;
    protected:
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::Label^ labelDestination;
    private: System::Windows::Forms::Label^ labelAircraft;
    private: System::Windows::Forms::Label^ labelDistance;
    private: System::Windows::Forms::Label^ labelDate;
    private: System::Windows::Forms::Label^ labelHours;
    private: System::Windows::Forms::Label^ labelGate;
    private: System::Windows::Forms::Button^ buttonEdit;



    protected:

    private:
        int idx;
        int aircraftType; //0 - boeing, 1 - airbus
    private: System::Windows::Forms::Button^ buttonAdd;
    private: System::Windows::Forms::Button^ buttonPassengersList;


           System::ComponentModel::Container^ components;
#pragma region components

        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(listItem::typeid));
            this->labelDeparture = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->labelDestination = (gcnew System::Windows::Forms::Label());
            this->labelAircraft = (gcnew System::Windows::Forms::Label());
            this->labelDistance = (gcnew System::Windows::Forms::Label());
            this->labelDate = (gcnew System::Windows::Forms::Label());
            this->labelHours = (gcnew System::Windows::Forms::Label());
            this->labelGate = (gcnew System::Windows::Forms::Label());
            this->buttonEdit = (gcnew System::Windows::Forms::Button());
            this->buttonAdd = (gcnew System::Windows::Forms::Button());
            this->buttonPassengersList = (gcnew System::Windows::Forms::Button());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->SuspendLayout();
            // 
            // labelDeparture
            // 
            this->labelDeparture->AutoSize = true;
            this->labelDeparture->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->labelDeparture->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(15)));
            this->labelDeparture->Location = System::Drawing::Point(18, 22);
            this->labelDeparture->Name = L"labelDeparture";
            this->labelDeparture->Size = System::Drawing::Size(102, 24);
            this->labelDeparture->TabIndex = 0;
            this->labelDeparture->Text = L"Departure";
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(126, 22);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(40, 24);
            this->pictureBox1->TabIndex = 1;
            this->pictureBox1->TabStop = false;
            // 
            // labelDestination
            // 
            this->labelDestination->AutoSize = true;
            this->labelDestination->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->labelDestination->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(15)));
            this->labelDestination->Location = System::Drawing::Point(183, 22);
            this->labelDestination->Name = L"labelDestination";
            this->labelDestination->Size = System::Drawing::Size(113, 24);
            this->labelDestination->TabIndex = 2;
            this->labelDestination->Text = L"Destination";
            // 
            // labelAircraft
            // 
            this->labelAircraft->AutoSize = true;
            this->labelAircraft->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->labelAircraft->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
                static_cast<System::Int32>(static_cast<System::Byte>(153)));
            this->labelAircraft->Location = System::Drawing::Point(19, 49);
            this->labelAircraft->Name = L"labelAircraft";
            this->labelAircraft->Size = System::Drawing::Size(52, 15);
            this->labelAircraft->TabIndex = 3;
            this->labelAircraft->Text = L"aircraft";
            // 
            // labelDistance
            // 
            this->labelDistance->AutoSize = true;
            this->labelDistance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->labelDistance->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
                static_cast<System::Int32>(static_cast<System::Byte>(153)));
            this->labelDistance->Location = System::Drawing::Point(157, 49);
            this->labelDistance->Name = L"labelDistance";
            this->labelDistance->Size = System::Drawing::Size(63, 15);
            this->labelDistance->TabIndex = 4;
            this->labelDistance->Text = L"Distance";
            // 
            // labelDate
            // 
            this->labelDate->AutoSize = true;
            this->labelDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->labelDate->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
                static_cast<System::Int32>(static_cast<System::Byte>(153)));
            this->labelDate->Location = System::Drawing::Point(261, 49);
            this->labelDate->Name = L"labelDate";
            this->labelDate->Size = System::Drawing::Size(35, 15);
            this->labelDate->TabIndex = 5;
            this->labelDate->Text = L"date";
            // 
            // labelHours
            // 
            this->labelHours->AutoSize = true;
            this->labelHours->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->labelHours->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(15)));
            this->labelHours->Location = System::Drawing::Point(315, 22);
            this->labelHours->Name = L"labelHours";
            this->labelHours->Size = System::Drawing::Size(129, 24);
            this->labelHours->TabIndex = 7;
            this->labelHours->Text = L"21:12 - 22:23";
            // 
            // labelGate
            // 
            this->labelGate->AutoSize = true;
            this->labelGate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->labelGate->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(15)));
            this->labelGate->Location = System::Drawing::Point(462, 22);
            this->labelGate->Name = L"labelGate";
            this->labelGate->Size = System::Drawing::Size(46, 24);
            this->labelGate->TabIndex = 8;
            this->labelGate->Text = L"A12";
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
            this->buttonEdit->Click += gcnew System::EventHandler(this, &listItem::buttonEdit_Click);
            // 
            // buttonAdd
            // 
            this->buttonAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(51)));
            this->buttonAdd->FlatAppearance->BorderSize = 0;
            this->buttonAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->buttonAdd->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
                static_cast<System::Int32>(static_cast<System::Byte>(153)));
            this->buttonAdd->Location = System::Drawing::Point(683, 16);
            this->buttonAdd->Name = L"buttonAdd";
            this->buttonAdd->Size = System::Drawing::Size(129, 30);
            this->buttonAdd->TabIndex = 11;
            this->buttonAdd->Text = L"Add passengers";
            this->buttonAdd->UseVisualStyleBackColor = false;
            this->buttonAdd->Click += gcnew System::EventHandler(this, &listItem::buttonAdd_Click);
            // 
            // buttonPassengersList
            // 
            this->buttonPassengersList->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)),
                static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
            this->buttonPassengersList->FlatAppearance->BorderSize = 0;
            this->buttonPassengersList->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->buttonPassengersList->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
            this->buttonPassengersList->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
                static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
            this->buttonPassengersList->Location = System::Drawing::Point(534, 16);
            this->buttonPassengersList->Name = L"buttonPassengersList";
            this->buttonPassengersList->Size = System::Drawing::Size(129, 30);
            this->buttonPassengersList->TabIndex = 12;
            this->buttonPassengersList->Text = L"Passengers list";
            this->buttonPassengersList->UseVisualStyleBackColor = false;
            this->buttonPassengersList->Click += gcnew System::EventHandler(this, &listItem::buttonPassengersList_Click);
            // 
            // listItem
            // 
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->Controls->Add(this->buttonPassengersList);
            this->Controls->Add(this->buttonAdd);
            this->Controls->Add(this->buttonEdit);
            this->Controls->Add(this->labelGate);
            this->Controls->Add(this->labelHours);
            this->Controls->Add(this->labelDate);
            this->Controls->Add(this->labelDistance);
            this->Controls->Add(this->labelAircraft);
            this->Controls->Add(this->labelDestination);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->labelDeparture);
            this->Name = L"listItem";
            this->Size = System::Drawing::Size(900, 75);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: 
        /**
* @brief Funkcja otwiera okno Edit1.
*/
        System::Void buttonEdit_Click(System::Object^ sender, System::EventArgs^ e) {
        if (!isOpenEdit1) {
            isOpenEdit1 = true;
            Edit1^ edit1 = gcnew  Edit1(idx);
            edit1->ShowDialog();
            isOpenEdit1 = false;
        }
    }
        /**
* @brief Funkcja otwiera okno Edit2.
*/
    System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e) {
        if (!isOpenEdit2) {
            isOpenEdit2 = true;
            Edit2^ edit2 = gcnew  Edit2(aircraftType, idx);
            edit2->ShowDialog();
            isOpenEdit2 = false;
        }
    }
    /**
* @brief Funkcja otwiera okno PassengerList1.
*/
    System::Void buttonPassengersList_Click(System::Object^ sender, System::EventArgs^ e) {
        if (!isOpenPassengersList1) {
            isOpenPassengersList1 = true;
            PassengerList1^ passengerList = gcnew PassengerList1(idx);
            passengerList->ShowDialog();
            isOpenPassengersList1 = false;
        }
    }


};
}
