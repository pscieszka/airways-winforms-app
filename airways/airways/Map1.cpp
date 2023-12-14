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
