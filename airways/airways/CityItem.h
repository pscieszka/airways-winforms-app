#pragma once

namespace airways {


    using namespace System;
    using namespace System::Windows::Forms;

    public ref class CityItem : public UserControl
    {
    public:


        CityItem(String^ city,int x,int y)
        {
            InitializeComponent();
            this->labelCity->Text = city;
            this->labelX->Text = Convert::ToString(x);
            this->labelY->Text = Convert::ToString(y);

           

        }
        CityItem(String^ city, double x, double y)
        {
            InitializeComponent();
            this->labelCity->Text = city;
            this->labelX->Text = Convert::ToString(x);
            this->labelY->Text = Convert::ToString(y);



        }

    protected:
        ~CityItem()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ labelCity;
    private: System::Windows::Forms::Label^ labelX;
    private: System::Windows::Forms::Label^ labelY;
    protected:

    protected:











    protected:

    private:
        



           System::ComponentModel::Container^ components;
#pragma region components

           void InitializeComponent(void)
           {
               this->labelCity = (gcnew System::Windows::Forms::Label());
               this->labelX = (gcnew System::Windows::Forms::Label());
               this->labelY = (gcnew System::Windows::Forms::Label());
               this->SuspendLayout();
               // 
               // labelCity
               // 
               this->labelCity->AutoSize = true;
               this->labelCity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(238)));
               this->labelCity->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                   static_cast<System::Int32>(static_cast<System::Byte>(15)));
               this->labelCity->Location = System::Drawing::Point(3, 5);
               this->labelCity->Name = L"labelCity";
               this->labelCity->Size = System::Drawing::Size(44, 24);
               this->labelCity->TabIndex = 0;
               this->labelCity->Text = L"City";
               // 
               // labelX
               // 
               this->labelX->AutoSize = true;
               this->labelX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(238)));
               this->labelX->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                   static_cast<System::Int32>(static_cast<System::Byte>(15)));
               this->labelX->Location = System::Drawing::Point(167, 5);
               this->labelX->Name = L"labelX";
               this->labelX->Size = System::Drawing::Size(82, 24);
               this->labelX->TabIndex = 1;
               this->labelX->Text = L"212.123";
               // 
               // labelY
               // 
               this->labelY->AutoSize = true;
               this->labelY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(238)));
               this->labelY->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                   static_cast<System::Int32>(static_cast<System::Byte>(15)));
               this->labelY->Location = System::Drawing::Point(283, 5);
               this->labelY->Name = L"labelY";
               this->labelY->Size = System::Drawing::Size(82, 24);
               this->labelY->TabIndex = 2;
               this->labelY->Text = L"121.211";
               // 
               // listItem
               // 
               this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                   static_cast<System::Int32>(static_cast<System::Byte>(41)));
               this->Controls->Add(this->labelY);
               this->Controls->Add(this->labelX);
               this->Controls->Add(this->labelCity);
               this->Name = L"CityItem";
               this->Size = System::Drawing::Size(378, 35);
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion

    

\
    };
}
