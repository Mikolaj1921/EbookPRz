#pragma once
#include "Login.h"
#include "DaneUzytkownika.h"

#include <string>
#include <vector>
#include <msclr/marshal_cppstd.h>
#include <OleDb.h>
#include <algorithm>

namespace KalkulatorBD {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Data::OleDb;

    public ref class Glowna : public System::Windows::Forms::Form
    {
    public:
        Glowna(void);

    protected:
        ~Glowna();

    private:
        System::Windows::Forms::Panel^ panel2;
        System::Windows::Forms::PictureBox^ pictureBox3;
        System::Windows::Forms::PictureBox^ pictureBox5;
        System::Windows::Forms::Button^ Cancel;
        System::Windows::Forms::Panel^ panel1;
        System::Windows::Forms::Label^ label5;
        System::Windows::Forms::Label^ label4;
        System::Windows::Forms::Button^ wyjdz_;
        System::Windows::Forms::DataGridViewTextBoxColumn^ Link;
        System::Windows::Forms::Panel^ panel3;
        System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
        System::Windows::Forms::TextBox^ SearchPole;
        System::Windows::Forms::Button^ szukajklik;
        System::Windows::Forms::ComboBox^ comboBox1;
        System::Windows::Forms::ComboBox^ comboBox2;
        System::Windows::Forms::ColorDialog^ colorDialog1;
        System::ComponentModel::Container^ components;
        void InitializeComponent(void);
        System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e); //e-dane uzytkownika
        System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e);
        System::Void Cancel_Click(System::Object^ sender, System::EventArgs^ e);
        System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e);
        System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) { }
        System::Void TextBox_Click(System::Object^ sender, System::EventArgs^ e);
        System::Void Glowna_Load(System::Object^ sender, System::EventArgs^ e);
        System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
        System::Void TextBox_Enter(System::Object^ sender, System::EventArgs^ e);
        System::Void LinkLabel_Click(System::Object^ sender, System::EventArgs^ e);
        System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {}
        System::Void SearchPole_TextChanged(System::Object^ sender, System::EventArgs^ e);
        System::Void szukajklik_Click(System::Object^ sender, System::EventArgs^ e);
        System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
    };
}
