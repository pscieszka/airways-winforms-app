#include "Map1.h"

System::Void airways::Map1::ChangeCityColor(System::Windows::Forms::Control^ cityButton, System::Windows::Forms::Label^ cityLabel) {
	if (cityButton->BackColor == System::Drawing::Color::FromArgb(172, 172, 172)){


		cityButton->BackColor = System::Drawing::Color::FromArgb(255, 143, 17);
		cityLabel->ForeColor = System::Drawing::Color::FromArgb(255, 143, 17);

	}
	else {
		cityButton->BackColor = System::Drawing::Color::FromArgb(172, 172, 172);
	
		cityLabel->ForeColor = System::Drawing::Color::FromArgb(172, 172, 172);
	}
}

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

	// Narysowanie zaokr¹glonej linii ³¹cz¹cej punkty
	g->DrawBezier(pen, startPoint, controlPoint1, controlPoint2, endPoint);

	// Zwolnienie zasobów
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

System::Void airways::Map1::Prague_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{
	circleButton(this->Prague);

}

System::Void airways::Map1::Milan_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{
	circleButton(this->Milan);
}

System::Void airways::Map1::Budapest_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{

	circleButton(this->Budapest);
}

System::Void airways::Map1::Ankara_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{
	circleButton(this->Ankara);
}

System::Void airways::Map1::Tallinn_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{
	circleButton(this->Tallinn);
}

System::Void airways::Map1::HandleButtonClick(Button^ button, Label^ label)
{
	//te buttony nie dzialaja bo zle usuwam je bo np moge usunac z tablicy na odwrot 0 zamiast , fixed?
	
	if (buttonsClicked == 2 && button->BackColor != System::Drawing::Color::FromArgb(172,172,172))
		 {
		ChangeCityColor(button, label);
		buttonsClicked--;
		if (buttonArray[buttonsClicked] != button) {
			buttonArray[buttonsClicked - 1] = buttonArray[buttonsClicked];
			buttonArray[buttonsClicked] = nullptr;
		}
		else {
			buttonArray[buttonsClicked] = nullptr;
		}
	}
	else if (buttonsClicked < 2) {
		
		if (button->BackColor == System::Drawing::Color::FromArgb(172,172,172)){
			buttonsClicked++;
			buttonArray[buttonsClicked-1] = button;
			ChangeCityColor(button, label);
		}
		else {
			buttonsClicked--;
			buttonArray[buttonsClicked] = nullptr;

			ChangeCityColor(button, label);
		}
	}
	if (buttonsClicked == 2) {
		if (buttonArray[0] != nullptr && buttonArray[1] != nullptr) {

			pictureBox1_Paint(this->pictureBox1, gcnew System::Windows::Forms::PaintEventArgs(
				this->pictureBox1->CreateGraphics(), this->pictureBox1->ClientRectangle), buttonArray[0], buttonArray[1]);
			//tworzy nowy obiekt PaintEventArgs, CreateGraphics dostaje dostep do obiektu Graphics,ktory sluzy do tworzenia grafik,
			//ClientRectangle to obszar do rysowania
		}
		
	}
	if (buttonsClicked == 1) {
		this->pictureBox1->Invalidate();
		//zawartosc kontrolki jest nieaktualna i czeka na kolejne wywolanie paint
	}
	// wpisywanie miast w panelConfirmation
	if (buttonArray[0] != nullptr) {
		this->Departure->ForeColor = System::Drawing::Color::FromArgb(229, 128, 15);
		this->Departure->Text = buttonArray[0]->Name;
	}
	else {
		this->Departure->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);
		this->Departure->Text = "________";
	}
	if (buttonArray[1] != nullptr) {
		this->Destination->ForeColor = System::Drawing::Color::FromArgb(229, 128, 15);
		this->Destination->Text = buttonArray[1]->Name;
		
	}
	else {
		this->Destination->ForeColor = System::Drawing::Color::FromArgb(153,153,153);
		this->Destination->Text = "________";
	}
	
	
}

System::Void airways::Map1::pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e, System::Windows::Forms::Button^ button1, System::Windows::Forms::Button^ button2)
{
	// Rysowanie zakrzywionej i zaokr¹glonej linii miêdzy przyciskami
	System::Drawing::Graphics^ g = e->Graphics;
	System::Drawing::Pen^ pen = gcnew System::Drawing::Pen(System::Drawing::Color::FromArgb(255, 143, 17), 3);
	pen->StartCap = Drawing2D::LineCap::Round;
	pen->EndCap = Drawing2D::LineCap::Round;

	// Pobranie œrodków przycisków
	Point center1 = Point(button1->Left + button1->Width / 2, button1->Top + button1->Height / 2);
	Point center2 = Point(button2->Left + button2->Width / 2, button2->Top + button2->Height / 2);

	// Modyfikacja punktów kontrolnych, aby krzywa by³a zakrzywiona w górê
	int midX = (center1.X + center2.X) / 2;
	int midY = (center1.Y + center2.Y) / 2;
	Point controlPoint = Point(midX, midY - 10);
	

	// Narysowanie zaokr¹glonej linii ³¹cz¹cej œrodki przycisków
	g->DrawBezier(pen, center1, controlPoint, controlPoint, center2);

	// Zwolnienie zasobów
	delete pen;
}

System::Void airways::Map1::Warsaw_Click(System::Object^ sender, System::EventArgs^ e)
{
	HandleButtonClick(Warsaw, labelWarsaw);
}

System::Void airways::Map1::Berlin_Click(System::Object^ sender, System::EventArgs^ e)
{
	HandleButtonClick(Berlin, labelBerlin);
}

System::Void airways::Map1::Prague_Click(System::Object^ sender, System::EventArgs^ e)
{
	HandleButtonClick(Prague, labelPrague);
}

System::Void airways::Map1::Budapest_Click(System::Object^ sender, System::EventArgs^ e)
{
	HandleButtonClick(Budapest, labelBudapest);
}

System::Void airways::Map1::Tallinn_Click(System::Object^ sender, System::EventArgs^ e)
{
	HandleButtonClick(Tallinn, labelTallinn);
}

System::Void airways::Map1::London_Click(System::Object^ sender, System::EventArgs^ e)
{
	HandleButtonClick(London, labelLondon);
}

System::Void airways::Map1::Paris_Click(System::Object^ sender, System::EventArgs^ e)
{
	HandleButtonClick(Paris, labelParis);
}

System::Void airways::Map1::Madrid_Click(System::Object^ sender, System::EventArgs^ e)
{
	HandleButtonClick(Madrid, labelMadrid);
}

System::Void airways::Map1::Milan_Click(System::Object^ sender, System::EventArgs^ e)
{
	HandleButtonClick(Milan, labelMilan);
}

System::Void airways::Map1::Ankara_Click(System::Object^ sender, System::EventArgs^ e)
{
	HandleButtonClick(Ankara, labelAnkara);
}

