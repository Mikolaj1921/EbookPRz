#pragma once

#include <string>
#include "Glowna.h"
#include "Registration.h"

namespace KalkulatorBD {


    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Data::OleDb;

    public ref class Login : public System::Windows::Forms::Form
    {
    public:
        Login(void);
        // Zmienna przechowuj¹ca zalogowanego u¿ytkownika
        static String^ loggedInUser; // dodaj 'static' aby by³ dostêpny dla innych klas

    protected:
        ~Login();
    private: 
        System::ComponentModel::IContainer^ components;
        System::Windows::Forms::TextBox^ Loginpole;
        System::Windows::Forms::TextBox^ Haslopole;
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::Button^ Ok;
        System::Windows::Forms::Button^ Cancel;
        System::Windows::Forms::LinkLabel^ linkLabel1;
        System::Windows::Forms::Panel^ panel2;
        System::Windows::Forms::PictureBox^ pictureBox1;
        System::Windows::Forms::Panel^ panel1;
        System::Windows::Forms::Label^ label5;
        System::Windows::Forms::Label^ label4;
        System::Windows::Forms::PictureBox^ pictureBox5;
        System::Windows::Forms::Label^ label6;
        System::Windows::Forms::WebBrowser^ webBrowser1;

        void InitializeComponent(void);

        System::Void Login_Load(System::Object^ sender, System::EventArgs^ e);
        System::Void Cancel_Click(System::Object^ sender, System::EventArgs^ e);
        System::Void Ok_Click(System::Object^ sender, System::EventArgs^ e);

        bool ValidateLogin(String^ login, String^ haslo); //metoda nie prawidlowego hasla

        System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
        System::Void Loginpole_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
        System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e);

    };


}
