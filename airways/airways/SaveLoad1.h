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
	public ref class SaveLoad1 : public System::Windows::Forms::Form
	{
	public:
		SaveLoad1(void)
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
		~SaveLoad1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ background;
	private: System::Windows::Forms::Button^ buttonSave;
	private: System::Windows::Forms::Button^ buttonLoad;











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
			this->background = (gcnew System::Windows::Forms::PictureBox());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->buttonLoad = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->background))->BeginInit();
			this->SuspendLayout();
			// 
			// background
			// 
			this->background->Location = System::Drawing::Point(0, -1);
			this->background->Name = L"background";
			this->background->Size = System::Drawing::Size(1040, 720);
			this->background->TabIndex = 0;
			this->background->TabStop = false;
			// 
			// buttonSave
			// 
			this->buttonSave->Location = System::Drawing::Point(110, 182);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(360, 270);
			this->buttonSave->TabIndex = 1;
			this->buttonSave->Text = L"SAVE";
			this->buttonSave->UseVisualStyleBackColor = true;
			this->buttonSave->Click += gcnew System::EventHandler(this, &SaveLoad1::buttonSave_Click);
			// 
			// buttonLoad
			// 
			this->buttonLoad->Location = System::Drawing::Point(583, 182);
			this->buttonLoad->Name = L"buttonLoad";
			this->buttonLoad->Size = System::Drawing::Size(360, 270);
			this->buttonLoad->TabIndex = 2;
			this->buttonLoad->Text = L"LOAD";
			this->buttonLoad->UseVisualStyleBackColor = true;
			this->buttonLoad->Click += gcnew System::EventHandler(this, &SaveLoad1::buttonLoad_Click);
			// 
			// SaveLoad1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->ClientSize = System::Drawing::Size(1039, 681);
			this->Controls->Add(this->buttonLoad);
			this->Controls->Add(this->buttonSave);
			this->Controls->Add(this->background);
			this->Name = L"SaveLoad1";
			this->Text = L"Save//Load";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->background))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion




private: System::Void buttonSave_Click(System::Object^ sender, System::EventArgs^ e);
	
private: System::Void buttonLoad_Click(System::Object^ sender, System::EventArgs^ e);

};
}
