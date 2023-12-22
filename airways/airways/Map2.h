#pragma once
#include <msclr/marshal_cppstd.h>
#include "Map1.h"
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
	public ref class Map2 : public System::Windows::Forms::Form
	{
	public:
		Map2(void)
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
		~Map2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ background;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ labelDeparture;
	private: System::Windows::Forms::Label^ labelDestination;


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ labelTime;
	private: System::Windows::Forms::Label^ labelTylda;
	private: System::Windows::Forms::Label^ labelFtime;











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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Map2::typeid));
			this->background = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->labelFtime = (gcnew System::Windows::Forms::Label());
			this->labelTylda = (gcnew System::Windows::Forms::Label());
			this->labelTime = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->labelDestination = (gcnew System::Windows::Forms::Label());
			this->labelDeparture = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->background))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// background
			// 
			this->background->Location = System::Drawing::Point(0, 0);
			this->background->Name = L"background";
			this->background->Size = System::Drawing::Size(1040, 720);
			this->background->TabIndex = 0;
			this->background->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->panel1->Controls->Add(this->labelFtime);
			this->panel1->Controls->Add(this->labelTylda);
			this->panel1->Controls->Add(this->labelTime);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->labelDestination);
			this->panel1->Controls->Add(this->labelDeparture);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1039, 100);
			this->panel1->TabIndex = 1;
			// 
			// labelFtime
			// 
			this->labelFtime->AutoSize = true;
			this->labelFtime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelFtime->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelFtime->Location = System::Drawing::Point(663, 38);
			this->labelFtime->Name = L"labelFtime";
			this->labelFtime->Size = System::Drawing::Size(200, 39);
			this->labelFtime->TabIndex = 5;
			this->labelFtime->Text = L"Flight time:";
			// 
			// labelTylda
			// 
			this->labelTylda->AutoSize = true;
			this->labelTylda->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelTylda->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->labelTylda->Location = System::Drawing::Point(869, 49);
			this->labelTylda->Name = L"labelTylda";
			this->labelTylda->Size = System::Drawing::Size(38, 39);
			this->labelTylda->TabIndex = 4;
			this->labelTylda->Text = L"~";
			// 
			// labelTime
			// 
			this->labelTime->AutoSize = true;
			this->labelTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelTime->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->labelTime->Location = System::Drawing::Point(902, 38);
			this->labelTime->Name = L"labelTime";
			this->labelTime->Size = System::Drawing::Size(88, 39);
			this->labelTime->TabIndex = 3;
			this->labelTime->Text = "02:34";
			//this->labelTime->Text = msclr::interop::marshal_as<String^>(calculateTime(distanceRem));
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(264, 29);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(80, 48);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// labelDestination
			// 
			this->labelDestination->AutoSize = true;
			this->labelDestination->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelDestination->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelDestination->Location = System::Drawing::Point(430, 38);
			this->labelDestination->Name = L"labelDestination";
			this->labelDestination->Size = System::Drawing::Size(112, 39);
			this->labelDestination->TabIndex = 1;
			this->labelDestination->Text="temp";
			//this->labelDestination->Text = msclr::interop::marshal_as<String^>(dest);
			// 
			// labelDeparture
			// 
			this->labelDeparture->AutoSize = true;
			this->labelDeparture->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->labelDeparture->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->labelDeparture->Location = System::Drawing::Point(58, 38);
			this->labelDeparture->Name = L"labelDeparture";
			this->labelDeparture->Size = System::Drawing::Size(112, 39);
			this->labelDeparture->TabIndex = 0;
			this->labelDeparture->Text = "temp";
			//this->labelDeparture->Text = msclr::interop::marshal_as<String^>(dep);
			// 
			// Map2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->ClientSize = System::Drawing::Size(1039, 681);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->background);
			this->Name = L"Map2";
			this->Text = L"Home1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->background))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		private:
			std::string calculateTime(int dist);





};
}
