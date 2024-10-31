#include "StartPanel.h"
#include "Login.h"
#include "Registration.h"
#include "Glowna.h"

using namespace System;                // Przestrze� nazw dla klas systemowych
using namespace System::Windows::Forms; // Przestrze� nazw dla formularzy Windows

// Deklaracja metody main dla aplikacji Windows Forms
[STAThread]
void main(array<String^>^ args) {
    // Ustawienie trybu aplikacji na obs�ug� interfejsu u�ytkownika w jednym w�tku (Single-Threaded Apartment)
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Utworzenie g��wnego okna aplikacji  i uruchomienie go
    KalkulatorBD::StartPanel^ startPanel = gcnew KalkulatorBD::StartPanel();
    Application::Run(startPanel);
}