#include "Form1.h"
#include "Baggage.h"
#include "SmallBag.h"
#include "HandLuggage.h"
// #include "Form1.h"

void airways::Form1::ActivateButton(Object^ btnSender)
{
    if (btnSender != nullptr) {
        if (currentButton != dynamic_cast<Button^>(btnSender)) {
            DisableButton();
            Color color = SelectThemeColor();
            currentButton = dynamic_cast<Button^>(btnSender);
            currentButton->BackColor = color;
            currentButton->ForeColor = Color::White;
            currentButton->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0));
            panelTitleBar->BackColor = color;
            panelLogo->BackColor = ThemeColor::ChangeColorBrightness(color, -0.3);
            ThemeColor::PrimaryColor = color;
            ThemeColor::SecondaryColor = ThemeColor::ChangeColorBrightness(color, -0.3);
            btnCloseChildForm->Visible = true;
        }
    }
}

void airways::Form1::OpenChildForm(Form^ childForm, Object^ btnSender)
{
    if (activeForm != nullptr)
        activeForm->Close();
    ActivateButton(btnSender);
    activeForm = childForm;
    childForm->TopLevel = false;
    childForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
    childForm->Dock = System::Windows::Forms::DockStyle::Fill;
    this->panelMain->Controls->Add(childForm);
    this->panelMain->Tag = childForm;
    childForm->BringToFront();
    childForm->Show();
}
