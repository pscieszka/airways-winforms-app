
#pragma once

namespace airways {

    using namespace System;
    using namespace System::Windows::Forms;

    public ref class listItem : public UserControl
    {
    public:
        listItem(String^ str)
        {
            InitializeComponent();
            this->label1->Text = str;

        }

    protected:
        ~listItem()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ label1;
    protected:

    private:
        System::ComponentModel::Container^ components;
#pragma region components

        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->label1->ForeColor = System::Drawing::Color::Coral;
            this->label1->Location = System::Drawing::Point(61, 31);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(40, 20);
            this->label1->TabIndex = 0;
            this->label1->Text = L"test";
            // 
            // listItem
            // 
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
                static_cast<System::Int32>(static_cast<System::Byte>(41)));
            this->Controls->Add(this->label1);
            this->Name = L"listItem";
            this->Size = System::Drawing::Size(900, 75);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    };
}
