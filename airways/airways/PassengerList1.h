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
	public ref class PassengerList1 : public System::Windows::Forms::Form
	{
	public:
		PassengerList1(int idx)
		{
			InitializeComponent();

			std::vector<Passenger> pass = (*flights)[idx].getPassengers();
			for (int i = 0; i < pass.size(); i++)
			{
				PassengerItem^ passengerItem = gcnew PassengerItem(pass[i].getData(),idx);
				passengerItem->BackColor = Color::FromArgb(41, 41, 41);
				passengerItem->Size = System::Drawing::Size(675, 129);
				flowLayoutPanel1->Controls->Add(passengerItem);
			}
			//


			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PassengerList1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
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
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Location = System::Drawing::Point(38, 25);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(969, 533);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// PassengerList1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->ClientSize = System::Drawing::Size(1039, 681);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Name = L"PassengerList1";
			this->Text = L"Passenger List";
			this->ResumeLayout(false);

		}
#pragma endregion




	};
}
