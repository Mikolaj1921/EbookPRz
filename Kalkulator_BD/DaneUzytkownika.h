#pragma once


#include <string>                     
#include <vector>                     // Biblioteka standardowa dla kontenera std::vector
#include <msclr/marshal_cppstd.h>     // Biblioteka dla konwersji pomiędzy System::String a std::string
#include <vcclr.h>                    // Biblioteka dla konwersji pomiędzy typami zarządzanymi a typami niezarządzanymi
#include <msclr/marshal.h>            // 2. Biblioteka dla konwersji pomiędzy typami zarządzanymi a typami niezarządzanymi
#include <OleDb.h>                    // do dostępu do baz danych przy użyciu technologii OleDb
#include <algorithm>                  // dla algorytmów ogólnego przeznaczenia

namespace KalkulatorBD {

	// Deklaracje przestrzeni nazw i używanych klas
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;					// Przestrzeń nazw dla dostępu do danych przy użyciu OleDb
	using namespace System::Runtime::InteropServices;		// Przestrzeń nazw dla konwersji między typami zarządzanymi a niezarządzanymi

	// Klasa reprezentująca formularz interfejsu użytkownika "DaneUzytkownika"
	public ref class DaneUzytkownika : public System::Windows::Forms::Form
	{
	public:
		DaneUzytkownika(void);           // Konstruktor klasy
		void InitializeComponent(void);  // Metoda inicjalizacji komponentów formularza
		String^ newLoggedInUser;         // Zmienna przechowująca nazwę nowego zalogowanego użytkownika

	protected:
		~DaneUzytkownika();              // Destruktor klasy

	private:
		System::Windows::Forms::Panel^ panel1;
		System::Windows::Forms::Label^ label5;
		System::Windows::Forms::Label^ label4;
		System::Windows::Forms::Button^ Cancel;
		System::Windows::Forms::Button^ Save;
		System::Windows::Forms::Panel^ panel2;
		System::Windows::Forms::PictureBox^ pictureBox5;
		System::Windows::Forms::PictureBox^ pictureBox1;
		System::Windows::Forms::TextBox^ Indexpole;
		System::Windows::Forms::Label^ label7;
		System::Windows::Forms::TextBox^ EmailPole;
		System::Windows::Forms::TextBox^ NazwiskoPole;
		System::Windows::Forms::TextBox^ ImiePole;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::TextBox^ Haslopole;
		System::Windows::Forms::TextBox^ Loginpole;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::Label^ label6;
		System::Windows::Forms::Label^ label8;
		System::Windows::Forms::Label^ label9;
		System::Windows::Forms::Label^ label10;
		System::Windows::Forms::Label^ label11;
		System::Windows::Forms::WebBrowser^ webBrowser1;
		System::Windows::Forms::Button^ Wyswietldane;
		System::Windows::Forms::Label^ label12;
		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::Button^ button2;
		System::ComponentModel::IContainer^ components;

		System::Void Cancel_Click_1(System::Object^ sender, System::EventArgs^ e);
		System::Void Save_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Loginpole_TextChanged(System::Object^ sender, System::EventArgs^ e);
		System::Void Haslopole_TextChanged(System::Object^ sender, System::EventArgs^ e);
		System::Void ImiePole_TextChanged(System::Object^ sender, System::EventArgs^ e);
		System::Void NazwiskoPole_TextChanged(System::Object^ sender, System::EventArgs^ e);
		System::Void EmailPole_TextChanged(System::Object^ sender, System::EventArgs^ e);
		System::Void Indexpole_TextChanged(System::Object^ sender, System::EventArgs^ e);
		System::Void Wyswietldane_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void label12_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void LoginLabel_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void DaneUzytkownika_Load(System::Object^ sender, System::EventArgs^ e) {}
	};
}
