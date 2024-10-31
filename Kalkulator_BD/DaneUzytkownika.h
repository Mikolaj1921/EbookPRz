#pragma once


#include <string>                     
#include <vector>                     // Biblioteka standardowa dla kontenera std::vector
#include <msclr/marshal_cppstd.h>     // Biblioteka dla konwersji pomiêdzy System::String a std::string
#include <vcclr.h>                    // Biblioteka dla konwersji pomiêdzy typami zarz¹dzanymi a typami niezarz¹dzanymi
#include <msclr/marshal.h>            // 2. Biblioteka dla konwersji pomiêdzy typami zarz¹dzanymi a typami niezarz¹dzanymi
#include <OleDb.h>                    // do dostêpu do baz danych przy u¿yciu technologii OleDb
#include <algorithm>                  // dla algorytmów ogólnego przeznaczenia

namespace KalkulatorBD {

	// Deklaracje przestrzeni nazw i u¿ywanych klas
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;					// Przestrzeñ nazw dla dostêpu do danych przy u¿yciu OleDb
	using namespace System::Runtime::InteropServices;		// Przestrzeñ nazw dla konwersji miêdzy typami zarz¹dzanymi a niezarz¹dzanymi

	// Klasa reprezentuj¹ca formularz interfejsu u¿ytkownika "DaneUzytkownika"
	public ref class DaneUzytkownika : public System::Windows::Forms::Form
	{
	public:
		DaneUzytkownika(void);           // Konstruktor klasy
		void InitializeComponent(void);  // Metoda inicjalizacji komponentów formularza
		String^ newLoggedInUser;         // Zmienna przechowuj¹ca nazwê nowego zalogowanego u¿ytkownika

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
