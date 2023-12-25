#pragma once
#include <msclr/marshal_cppstd.h>
#include "Form1.h"
#include "flightsList.h"

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
	
	public ref class List1 : public System::Windows::Forms::Form
	{
		

	public:
		List1(void)
		{
			InitializeComponent();
			


			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~List1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:












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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label1->Location = System::Drawing::Point(324, 150);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = msclr::interop::marshal_as<System::String^>(flights->get());
			// 
			// List1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->ClientSize = System::Drawing::Size(1039, 681);
			this->Controls->Add(this->label1);
			this->Name = L"List1";
			this->Text = L"List1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion




	};
}
