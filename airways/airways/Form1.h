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
		Form^ activeForm;
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

	private: System::Windows::Forms::Button^ buttonNewFlight;
	private: System::Windows::Forms::Button^ buttonTbd;
	private: System::Windows::Forms::Button^ buttonShowFlights;



	private: System::Windows::Forms::Button^ buttonHome;
	private: System::Windows::Forms::Panel^ panelMain;





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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->buttonTbd = (gcnew System::Windows::Forms::Button());
			this->buttonShowFlights = (gcnew System::Windows::Forms::Button());
			this->buttonNewFlight = (gcnew System::Windows::Forms::Button());
			this->panelProjName = (gcnew System::Windows::Forms::Panel());
			this->buttonHome = (gcnew System::Windows::Forms::Button());
			this->panelMain = (gcnew System::Windows::Forms::Panel());
			this->panelMenu->SuspendLayout();
			this->panelProjName->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->panelMenu->Controls->Add(this->buttonTbd);
			this->panelMenu->Controls->Add(this->buttonShowFlights);
			this->panelMenu->Controls->Add(this->buttonNewFlight);
			this->panelMenu->Controls->Add(this->panelProjName);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(230, 681);
			this->panelMenu->TabIndex = 0;
			// 
			// buttonTbd
			// 
			this->buttonTbd->FlatAppearance->BorderSize = 0;
			this->buttonTbd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonTbd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonTbd->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->buttonTbd->Location = System::Drawing::Point(0, 258);
			this->buttonTbd->Name = L"buttonTbd";
			this->buttonTbd->Size = System::Drawing::Size(230, 79);
			this->buttonTbd->TabIndex = 3;
			this->buttonTbd->Text = L"tbd";
			this->buttonTbd->UseVisualStyleBackColor = true;
			// 
			// buttonShowFlights
			// 
			this->buttonShowFlights->FlatAppearance->BorderSize = 0;
			this->buttonShowFlights->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonShowFlights->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonShowFlights->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->buttonShowFlights->Location = System::Drawing::Point(0, 179);
			this->buttonShowFlights->Name = L"buttonShowFlights";
			this->buttonShowFlights->Size = System::Drawing::Size(230, 79);
			this->buttonShowFlights->TabIndex = 2;
			this->buttonShowFlights->Text = L"Flights list";
			this->buttonShowFlights->UseVisualStyleBackColor = true;
			// 
			// buttonNewFlight
			// 
			this->buttonNewFlight->FlatAppearance->BorderSize = 0;
			this->buttonNewFlight->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNewFlight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->buttonNewFlight->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->buttonNewFlight->Location = System::Drawing::Point(0, 100);
			this->buttonNewFlight->Name = L"buttonNewFlight";
			this->buttonNewFlight->Size = System::Drawing::Size(230, 79);
			this->buttonNewFlight->TabIndex = 1;
			this->buttonNewFlight->Text = L"Create new flight";
			this->buttonNewFlight->UseVisualStyleBackColor = true;
			this->buttonNewFlight->Click += gcnew System::EventHandler(this, &Form1::buttonNewFlight_Click);
			// 
			// panelProjName
			// 
			this->panelProjName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(75)));
			this->panelProjName->Controls->Add(this->buttonHome);
			this->panelProjName->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelProjName->Location = System::Drawing::Point(0, 0);
			this->panelProjName->Name = L"panelProjName";
			this->panelProjName->Size = System::Drawing::Size(230, 100);
			this->panelProjName->TabIndex = 0;
			// 
			// buttonHome
			// 
			this->buttonHome->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"buttonHome.BackgroundImage")));
			this->buttonHome->FlatAppearance->BorderSize = 0;
			this->buttonHome->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonHome->Location = System::Drawing::Point(0, 0);
			this->buttonHome->Name = L"buttonHome";
			this->buttonHome->Size = System::Drawing::Size(230, 100);
			this->buttonHome->TabIndex = 0;
			this->buttonHome->UseMnemonic = false;
			this->buttonHome->UseVisualStyleBackColor = true;
			// 
			// panelMain
			// 
			this->panelMain->Location = System::Drawing::Point(230, 0);
			this->panelMain->Name = L"panelMain";
			this->panelMain->Size = System::Drawing::Size(1035, 680);
			this->panelMain->TabIndex = 1;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->panelMain);
			this->Controls->Add(this->panelMenu);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->panelMenu->ResumeLayout(false);
			this->panelProjName->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion





private: void OpenChildForm(Form^ childForm, Object^ btnSender);


private: System::Void buttonNewFlight_Click(System::Object^ sender, System::EventArgs^ e);
};
}
