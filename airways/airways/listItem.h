
#pragma once
#include "vector"
namespace airways {

    using namespace System;
    using namespace System::Windows::Forms;

    public ref class listItem : public UserControl
    {
    public:
        listItem(std::vector<std::string> str)
        {
            InitializeComponent();
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
                    this->labelAircraft->Text = msclr::interop::marshal_as<System::String^>(str[i]);
                    break;
                case 3:
                   this->labelDistance->Text = msclr::interop::marshal_as<System::String^>(str[i]) + "km";
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
    private: System::Windows::Forms::Button^ buttonAddPassenger;


    protected:

    private:
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
            this->buttonAddPassenger = (gcnew System::Windows::Forms::Button());
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
            this->labelHours->Location = System::Drawing::Point(346, 22);
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
            this->labelGate->Location = System::Drawing::Point(497, 22);
            this->labelGate->Name = L"labelGate";
            this->labelGate->Size = System::Drawing::Size(46, 24);
            this->labelGate->TabIndex = 8;
            this->labelGate->Text = L"A12";
            // 
            // buttonEdit
            // 
            this->buttonEdit->Location = System::Drawing::Point(827, 25);
            this->buttonEdit->Name = L"buttonEdit";
            this->buttonEdit->Size = System::Drawing::Size(41, 22);
            this->buttonEdit->TabIndex = 9;
            this->buttonEdit->Text = L"edit";
            this->buttonEdit->UseVisualStyleBackColor = true;
            // 
            // buttonAddPassenger
            // 
            this->buttonAddPassenger->Location = System::Drawing::Point(684, 25);
            this->buttonAddPassenger->Name = L"buttonAddPassenger";
            this->buttonAddPassenger->Size = System::Drawing::Size(96, 21);
            this->buttonAddPassenger->TabIndex = 10;
            this->buttonAddPassenger->Text = L"add passenger";
            this->buttonAddPassenger->UseVisualStyleBackColor = true;
            // 
            // listItem
            // 
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->Controls->Add(this->buttonAddPassenger);
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

    };
}
