#pragma once

#include <string>
#include <Windows.h>
#include <OleDb.h>

namespace KalkulatorBD {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Data::OleDb;

    public ref class Registration : public System::Windows::Forms::Form
    {
    public:
        Registration(void);
        ~Registration();

        // Deklaracja metody IsValidEmail
        bool IsValidEmail(String^ email);

    protected:
        void InitializeComponent(void);

    private:
        System::Windows::Forms::Button^ Cancel;
        System::Windows::Forms::Button^ Ok;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::TextBox^ Haslopole;
        System::Windows::Forms::TextBox^ Loginpole;
        System::Windows::Forms::TextBox^ ImiePole;
        System::Windows::Forms::TextBox^ NazwiskoPole;
        System::Windows::Forms::TextBox^ EmailPole;
        System::Windows::Forms::Label^ label4;
        System::Windows::Forms::Label^ label5;
        System::Windows::Forms::Label^ label6;
        System::Windows::Forms::TextBox^ Indexpole;
        System::Windows::Forms::Label^ label7;
        System::Windows::Forms::Panel^ panel2;
        System::Windows::Forms::PictureBox^ pictureBox1;
        System::Windows::Forms::PictureBox^ pictureBox5;
        System::Windows::Forms::WebBrowser^ webBrowser1;
        System::Windows::Forms::Panel^ panel1;
        System::Windows::Forms::Label^ label8;
        System::Windows::Forms::Label^ label9;
        System::Windows::Forms::Label^ label10;

        System::ComponentModel::Container^ components;

        void label3_Click(System::Object^ sender, System::EventArgs^ e);
        void Ok_Click(System::Object^ sender, System::EventArgs^ e);
        void Cancel_Click(System::Object^ sender, System::EventArgs^ e);
        void label2_Click(System::Object^ sender, System::EventArgs^ e);
        void label1_Click(System::Object^ sender, System::EventArgs^ e);
        void Haslopole_TextChanged(System::Object^ sender, System::EventArgs^ e);
        void Loginpole_TextChanged(System::Object^ sender, System::EventArgs^ e);
        System::Void Registration_Load(System::Object^ sender, System::EventArgs^ e) {}
    };
}
