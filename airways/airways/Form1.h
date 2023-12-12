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
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panelMenu;
	private: System::Windows::Forms::Panel^ panelProjName;
	private: System::Windows::Forms::Label^ labelProjName;
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
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->panelProjName = (gcnew System::Windows::Forms::Panel());
			this->labelProjName = (gcnew System::Windows::Forms::Label());
			this->panelMenu->SuspendLayout();
			this->panelProjName->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->panelMenu->Controls->Add(this->panelProjName);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(230, 681);
			this->panelMenu->TabIndex = 0;
			// 
			// panelProjName
			// 
			this->panelProjName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->panelProjName->Controls->Add(this->labelProjName);
			this->panelProjName->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelProjName->Location = System::Drawing::Point(0, 0);
			this->panelProjName->Name = L"panelProjName";
			this->panelProjName->Size = System::Drawing::Size(230, 103);
			this->panelProjName->TabIndex = 0;
			// 
			// labelProjName
			// 
			this->labelProjName->Font = (gcnew System::Drawing::Font(L"Corbel", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelProjName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(214)),
				static_cast<System::Int32>(static_cast<System::Byte>(214)));
			this->labelProjName->Location = System::Drawing::Point(0, 0);
			this->labelProjName->Name = L"labelProjName";
			this->labelProjName->Size = System::Drawing::Size(230, 103);
			this->labelProjName->TabIndex = 0;
			this->labelProjName->Text = L"airways";
			this->labelProjName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->panelMenu);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->panelMenu->ResumeLayout(false);
			this->panelProjName->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion







	private:





};
}
