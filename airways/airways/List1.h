#pragma once
#include <msclr/marshal_cppstd.h>
#include "Form1.h"
#include "flightsList.h"
#include "listItem.h"

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
			if (flights->size() == 0) {

			}
			else {
				for (int i = 0; i < flights->size(); ++i)
				{
					listItem^ flightList = gcnew listItem(flights->operator[](i).getData());
					flightList->BackColor = Color::FromArgb(41, 41,41);
					flightList->Size = System::Drawing::Size(900, 75);
					flowLayoutPanel1->Controls->Add(flightList);
				}
			}


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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Label^ labelEmpty;

	protected:

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
		/// 
		/// 
		/// 
		//this->label1->Text = msclr::interop::marshal_as<System::String^>(flights->get());

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		/// 

		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->labelEmpty = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->panel1->Size = System::Drawing::Size(1040, 100);
			this->panel1->TabIndex = 0;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Controls->Add(this->labelEmpty);
			this->flowLayoutPanel1->Location = System::Drawing::Point(65, 134);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(950, 500);
			this->flowLayoutPanel1->TabIndex = 1;
			// 
			// labelEmpty
			// 
			this->labelEmpty->AutoSize = true;
			this->labelEmpty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelEmpty->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(81)),
				static_cast<System::Int32>(static_cast<System::Byte>(81)));
			this->labelEmpty->Location = System::Drawing::Point(3, 0);
			this->labelEmpty->Name = L"labelEmpty";
			this->labelEmpty->Size = System::Drawing::Size(617, 108);
			this->labelEmpty->TabIndex = 2;
			this->labelEmpty->Text = L"List is empty.";
			// 
			// List1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->ClientSize = System::Drawing::Size(1039, 681);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->panel1);
			this->Name = L"List1";
			this->Text = L"List1";
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion




};
}
