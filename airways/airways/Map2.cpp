#include "Map2.h"

std::string airways::Map2::calculateTime(int dist)
{
	double time = 0.551104 * pow((dist / 100), 0.608872) - 0.257423;
	int h = static_cast<int>(time);
	int m = static_cast<int>((time - h) * 60);
	std::string hours;
	std::string minutes;

	if (h < 10) {
		hours = "0" + std::to_string(h);
	}
	else {
		hours =  std::to_string(h);
	}

	if (m < 10) {
		minutes = "0" + std::to_string(m);
	}
	else {
		minutes = std::to_string(m);
	}


	return hours+":"+minutes;
}

System::Void airways::Map2::checkBoxBoeing_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (this->checkBoxBoeing->Checked) {
		// Je�li Boeing jest zaznaczony, zresetuj Airbus
		this->checkBoxAirbus->Checked = false;
		this->checkBoxAirbus->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);
		// pic airbus
		this->pictureBoxBoeing->Visible = true;
		this->pictureBoxAirbus->Visible = false;

		// Zmie� kolor Boeinga
		this->checkBoxBoeing->ForeColor = System::Drawing::Color::FromArgb(229, 128, 15);
	}
	else {
		this->pictureBoxAirbus->Visible = true;

		// Je�li Boeing nie jest zaznaczony, zresetuj kolor
		this->checkBoxBoeing->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);
	}

}

System::Void airways::Map2::checkBoxAirbus_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	if (this->checkBoxAirbus->Checked) {
		// Je�li Airbus jest zaznaczony, zresetuj Boeing
		this->checkBoxBoeing->Checked = false;
		this->checkBoxBoeing->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);

		this->pictureBoxBoeing->Visible = false;
		this->pictureBoxAirbus->Visible = true;

		// Zmie� kolor Airbusa
		this->checkBoxAirbus->ForeColor = System::Drawing::Color::FromArgb(229, 128, 15);
	}
	else {
		// Je�li Airbus nie jest zaznaczony, zresetuj kolor
		this->checkBoxAirbus->ForeColor = System::Drawing::Color::FromArgb(153, 153, 153);
		this->pictureBoxBoeing->Visible = true;

	}
}

