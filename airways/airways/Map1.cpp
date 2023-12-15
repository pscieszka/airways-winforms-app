#include "Map1.h"


System::Void airways::Map1::circleButton(System::Windows::Forms::Control^ control)
{
	System::Drawing::Drawing2D::GraphicsPath^ path = gcnew System::Drawing::Drawing2D::GraphicsPath();
	path->AddEllipse(0, 0, control->Width, control->Height);
	control->Region = gcnew System::Drawing::Region(path);
}

System::Void airways::Map1::DrawCurvedLine(Graphics^ g, Point startPoint, Point controlPoint1, Point controlPoint2, Point endPoint, Color lineColor, int lineWidth)
{
	System::Drawing::Pen^ pen = gcnew System::Drawing::Pen(lineColor, lineWidth);
	pen->StartCap = Drawing2D::LineCap::Round;
	pen->EndCap = Drawing2D::LineCap::Round;

	// Narysowanie zaokr�glonej linii ��cz�cej punkty
	g->DrawBezier(pen, startPoint, controlPoint1, controlPoint2, endPoint);

	// Zwolnienie zasob�w
	delete pen;
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
			static_cast<System::Int32>(static_cast<System::Byte>(255)), 
			static_cast<System::Int32>(static_cast<System::Byte>(143)),
			static_cast<System::Int32>(static_cast<System::Byte>(17)));

		this->labelWarsaw->ForeColor = System::Drawing::Color::FromArgb(
			static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(143)),
			static_cast<System::Int32>(static_cast<System::Byte>(17)));
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

