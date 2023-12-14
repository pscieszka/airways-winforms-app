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
	public ref class Map1 : public System::Windows::Forms::Form
	{
	public:
		Map1(void)
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
		~Map1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ Warsaw;


	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Map1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Warsaw = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1035, 680);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Warsaw
			// 
			this->Warsaw->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(172)), static_cast<System::Int32>(static_cast<System::Byte>(172)),
				static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->Warsaw->FlatAppearance->BorderSize = 0;
			this->Warsaw->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Warsaw->Location = System::Drawing::Point(638, 262);
			this->Warsaw->Name = L"Warsaw";
			this->Warsaw->Size = System::Drawing::Size(25, 25);
			this->Warsaw->TabIndex = 1;
			this->Warsaw->UseVisualStyleBackColor = false;
			this->Warsaw->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Map1::button1_Paint);
			// 
			// Map1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1039, 681);
			this->Controls->Add(this->Warsaw);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Map1";
			this->Text = L"Map1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void circleButton(System::Windows::Forms::Control^ control);
	private: System::Void button1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
	
		
	
	
	};
}
