#include "Map1.h"


System::Void airways::Map1::circleButton(System::Windows::Forms::Control^ control)
{
	System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();
	path->AddEllipse(0, 0, control->Width, control->Height);
	control->Region = gcnew System::Drawing::Region(path);
}

System::Void airways::Map1::Warsaw_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{
	circleButton(this->Warsaw);
}

System::Void airways::Map1::Berlin_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{
	circleButton(this->Berlin);
}

System::Void airways::Map1::Paris_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{
	circleButton(this->Paris);
}

System::Void airways::Map1::Madrid_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{
	circleButton(this->Madrid);
}

System::Void airways::Map1::London_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{
	circleButton(this->London);

}

System::Void airways::Map1::Warsaw_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (this->Warsaw->BackColor == System::Drawing::Color::FromArgb(
		static_cast<System::Int32>(static_cast<System::Byte>(172)),
		static_cast<System::Int32>(static_cast<System::Byte>(172)),
		static_cast<System::Int32>(static_cast<System::Byte>(172)))) {
		
		this->Warsaw->BackColor = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(0)), 
			static_cast<System::Int32>(static_cast<System::Byte>(17)),
			static_cast<System::Int32>(static_cast<System::Byte>(51)));

		this->labelWarsaw->ForeColor = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(0)),
			static_cast<System::Int32>(static_cast<System::Byte>(17)),
			static_cast<System::Int32>(static_cast<System::Byte>(51)));
	}
	else {
		this->Warsaw->BackColor = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(172)),
			static_cast<System::Int32>(static_cast<System::Byte>(172)),
			static_cast<System::Int32>(static_cast<System::Byte>(172)));

		this->labelWarsaw->ForeColor = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(172)),
			static_cast<System::Int32>(static_cast<System::Byte>(172)),
			static_cast<System::Int32>(static_cast<System::Byte>(172)));
	}
	
}


