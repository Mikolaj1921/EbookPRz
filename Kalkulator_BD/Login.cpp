#include "Login.h"

using namespace KalkulatorBD;
using namespace System::Drawing;
using namespace System::Data::OleDb;

Login::Login() {
    InitializeComponent();
}

Login::~Login() {
    if (components) {
        delete components;
    }
}

void Login::InitializeComponent() {
    System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
    this->Loginpole = (gcnew System::Windows::Forms::TextBox());
    this->Haslopole = (gcnew System::Windows::Forms::TextBox());
    this->label1 = (gcnew System::Windows::Forms::Label());
    this->label2 = (gcnew System::Windows::Forms::Label());
    this->label3 = (gcnew System::Windows::Forms::Label());
    this->Ok = (gcnew System::Windows::Forms::Button());
    this->Cancel = (gcnew System::Windows::Forms::Button());
    this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
    this->panel2 = (gcnew System::Windows::Forms::Panel());
    this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
    this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
    this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
    this->panel1 = (gcnew System::Windows::Forms::Panel());
    this->label5 = (gcnew System::Windows::Forms::Label());
    this->label4 = (gcnew System::Windows::Forms::Label());
    this->label6 = (gcnew System::Windows::Forms::Label());
    this->panel2->SuspendLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
    this->panel1->SuspendLayout();
    this->SuspendLayout();
    // 
    // Loginpole
    // 
    this->Loginpole->Anchor = System::Windows::Forms::AnchorStyles::None;
    this->Loginpole->BorderStyle = System::Windows::Forms::BorderStyle::None;
    this->Loginpole->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(238)));
    this->Loginpole->Location = System::Drawing::Point(185, 358);
    this->Loginpole->MaximumSize = System::Drawing::Size(100, 1000);
    this->Loginpole->MinimumSize = System::Drawing::Size(590, 50);
    this->Loginpole->Name = L"Loginpole";
    this->Loginpole->Size = System::Drawing::Size(590, 50);
    this->Loginpole->TabIndex = 3;
    this->Loginpole->TextChanged += gcnew System::EventHandler(this, &Login::Loginpole_TextChanged);
    // 
    // Haslopole
    // 
    this->Haslopole->Anchor = System::Windows::Forms::AnchorStyles::None;
    this->Haslopole->BorderStyle = System::Windows::Forms::BorderStyle::None;
    this->Haslopole->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(238)));
    this->Haslopole->Location = System::Drawing::Point(185, 467);
    this->Haslopole->MaximumSize = System::Drawing::Size(100, 1000);
    this->Haslopole->MinimumSize = System::Drawing::Size(590, 50);
    this->Haslopole->Name = L"Haslopole";
    this->Haslopole->Size = System::Drawing::Size(590, 50);
    this->Haslopole->TabIndex = 4;
    // 
    // label1
    // 
    this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
    this->label1->AutoSize = true;
    this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(238)));
    this->label1->Location = System::Drawing::Point(29, 358);
    this->label1->MaximumSize = System::Drawing::Size(300, 300);
    this->label1->MinimumSize = System::Drawing::Size(150, 50);
    this->label1->Name = L"label1";
    this->label1->Size = System::Drawing::Size(150, 50);
    this->label1->TabIndex = 5;
    this->label1->Text = L"Login";
    this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    // 
    // label2
    // 
    this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
    this->label2->AutoSize = true;
    this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(238)));
    this->label2->Location = System::Drawing::Point(29, 467);
    this->label2->MaximumSize = System::Drawing::Size(300, 300);
    this->label2->MinimumSize = System::Drawing::Size(150, 50);
    this->label2->Name = L"label2";
    this->label2->Size = System::Drawing::Size(150, 50);
    this->label2->TabIndex = 6;
    this->label2->Text = L"Haslo";
    this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    // 
    // label3
    // 
    this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
    this->label3->AutoSize = true;
    this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(238)));
    this->label3->Location = System::Drawing::Point(230, 285);
    this->label3->MaximumSize = System::Drawing::Size(300, 300);
    this->label3->MinimumSize = System::Drawing::Size(500, 50);
    this->label3->Name = L"label3";
    this->label3->Size = System::Drawing::Size(500, 50);
    this->label3->TabIndex = 7;
    this->label3->Text = L"Logowanie do E-book PRz";
    this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
    // 
    // Ok
    // 
    this->Ok->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(238)));
    this->Ok->Location = System::Drawing::Point(185, 585);
    this->Ok->Name = L"Ok";
    this->Ok->Size = System::Drawing::Size(251, 51);
    this->Ok->TabIndex = 8;
    this->Ok->Text = L"Ok";
    this->Ok->UseVisualStyleBackColor = true;
    this->Ok->Click += gcnew System::EventHandler(this, &Login::Ok_Click);
    // 
    // Cancel
    // 
    this->Cancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(238)));
    this->Cancel->Location = System::Drawing::Point(524, 585);
    this->Cancel->Name = L"Cancel";
    this->Cancel->Size = System::Drawing::Size(251, 51);
    this->Cancel->TabIndex = 9;
    this->Cancel->Text = L"Wróæ";
    this->Cancel->UseVisualStyleBackColor = true;
    this->Cancel->Click += gcnew System::EventHandler(this, &Login::Cancel_Click);
    // 
    // linkLabel1
    // 
    this->linkLabel1->AutoSize = true;
    this->linkLabel1->Location = System::Drawing::Point(606, 664);
    this->linkLabel1->MaximumSize = System::Drawing::Size(1000, 200);
    this->linkLabel1->MinimumSize = System::Drawing::Size(100, 20);
    this->linkLabel1->Name = L"linkLabel1";
    this->linkLabel1->Size = System::Drawing::Size(158, 20);
    this->linkLabel1->TabIndex = 11;
    this->linkLabel1->TabStop = true;
    this->linkLabel1->Text = L"Utwórz konto E-book PRz";
    this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::linkLabel1_LinkClicked);
    // 
    // panel2
    // 
    this->panel2->BackColor = System::Drawing::Color::SlateGray;
    this->panel2->Controls->Add(this->pictureBox5);
    this->panel2->Controls->Add(this->pictureBox1);
    this->panel2->Location = System::Drawing::Point(-26, -38);
    this->panel2->Name = L"panel2";
    this->panel2->Size = System::Drawing::Size(1542, 137);
    this->panel2->TabIndex = 12;
    // 
    // pictureBox5
    // 
    this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
    this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
    this->pictureBox5->Location = System::Drawing::Point(41, 50);
    this->pictureBox5->Name = L"pictureBox5";
    this->pictureBox5->Size = System::Drawing::Size(192, 72);
    this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
    this->pictureBox5->TabIndex = 13;
    this->pictureBox5->TabStop = false;
    this->pictureBox5->Click += gcnew System::EventHandler(this, &Login::pictureBox5_Click);
    // 
    // pictureBox1
    // 
    this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
    this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
    this->pictureBox1->Location = System::Drawing::Point(1283, 50);
    this->pictureBox1->Name = L"pictureBox1";
    this->pictureBox1->Size = System::Drawing::Size(155, 72);
    this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
    this->pictureBox1->TabIndex = 2;
    this->pictureBox1->TabStop = false;
    // 
    // webBrowser1
    // 
    this->webBrowser1->Location = System::Drawing::Point(830, 105);
    this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
    this->webBrowser1->Name = L"webBrowser1";
    this->webBrowser1->Size = System::Drawing::Size(607, 612);
    this->webBrowser1->TabIndex = 13;
    this->webBrowser1->Url = (gcnew System::Uri(L"https://sklep.prz.edu.pl/nasze-sklepy", System::UriKind::Absolute));
    // 
    // panel1
    // 
    this->panel1->BackColor = System::Drawing::Color::SlateGray;
    this->panel1->Controls->Add(this->label5);
    this->panel1->Controls->Add(this->label4);
    this->panel1->Location = System::Drawing::Point(-17, 723);
    this->panel1->Name = L"panel1";
    this->panel1->Size = System::Drawing::Size(1513, 61);
    this->panel1->TabIndex = 14;
    // 
    // label5
    // 
    this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(238)));
    this->label5->Location = System::Drawing::Point(50, 9);
    this->label5->Name = L"label5";
    this->label5->Size = System::Drawing::Size(496, 43);
    this->label5->TabIndex = 13;
    this->label5->Text = L"Poœredni Sklep internetowy Politechniki Rzeszowskiej im. Ignacego £ukasiewicza.\r\n"
        L"Polska , Rzeszów 35-959 , al. Powstañców Warszawy 12";
    // 
    // label4
    // 
    this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(238)));
    this->label4->Location = System::Drawing::Point(1162, 23);
    this->label4->Name = L"label4";
    this->label4->Size = System::Drawing::Size(291, 20);
    this->label4->TabIndex = 12;
    this->label4->Text = L"Copyright © 2024 | Stworzono przez Mikolaj";
    // 
    // label6
    // 
    this->label6->AutoSize = true;
    this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(238)));
    this->label6->Location = System::Drawing::Point(22, 122);
    this->label6->MinimumSize = System::Drawing::Size(700, 100);
    this->label6->Name = L"label6";
    this->label6->Size = System::Drawing::Size(740, 126);
    this->label6->TabIndex = 15;
    this->label6->Text = resources->GetString(L"label6.Text");
    // 
    // Login
    // 
    this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
    this->ClientSize = System::Drawing::Size(1441, 775);
    this->ControlBox = false;
    this->Controls->Add(this->label6);
    this->Controls->Add(this->panel1);
    this->Controls->Add(this->webBrowser1);
    this->Controls->Add(this->panel2);
    this->Controls->Add(this->linkLabel1);
    this->Controls->Add(this->Cancel);
    this->Controls->Add(this->Ok);
    this->Controls->Add(this->label3);
    this->Controls->Add(this->label2);
    this->Controls->Add(this->label1);
    this->Controls->Add(this->Haslopole);
    this->Controls->Add(this->Loginpole);
    this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
    this->Name = L"Login";
    this->ShowIcon = false;
    this->ShowInTaskbar = false;
    this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
    this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
    this->panel2->ResumeLayout(false);
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
    this->panel1->ResumeLayout(false);
    this->ResumeLayout(false);
    this->PerformLayout();

}

//zamykanie okna
System::Void Login::Cancel_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Close();
}

//potwirdzenie logowania(sprawdzanie danych poprawnosci)
System::Void Login::Ok_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ login = this->Loginpole->Text; //przypisywania do pola tekstu login -  login , analogicznie has³o
    String^ haslo = this->Haslopole->Text;

    if (login->Length == 0 || haslo->Length == 0) {
        MessageBox::Show("Wype³nij wszystkie pola!");
        return;
    }

    if (ValidateLogin(login, haslo)) {
        loggedInUser = login; // Przypisanie loginu do zmiennej klasy
        //MessageBox::Show("Poprawne logowanie!");
        //MessageBox::Show(loggedInUser);
        Glowna^ glownastrona = gcnew Glowna();
        glownastrona->Show();
    }
    else {
        MessageBox::Show("Nieprawid³owy login lub has³o!");
    }
}

// Metoda sprawdzaj¹ca poprawnoœæ logowania u¿ytkownika
bool Login::ValidateLogin(String^ login, String^ haslo) {
    // £¹czenie z baz¹ danych
    String^ connString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\halin\\Desktop\\EbookPrz\\x64\\Debug\\DaneOsobowe.mdb";
    OleDbConnection^ conn = gcnew OleDbConnection(connString);

    // Zapytanie SQL sprawdzaj¹ce czy istnieje u¿ytkownik o podanym loginie i hasle
    String^ query = "SELECT * FROM Registration WHERE Login = ? AND Haslo = ?";
    OleDbCommand^ command = gcnew OleDbCommand(query, conn);

    // Dodanie parametrów do zapytania SQL
    command->Parameters->AddWithValue("?", login);
    command->Parameters->AddWithValue("?", haslo);

    try {
        conn->Open(); // Otwarcie po³¹czenia

        OleDbDataReader^ reader = command->ExecuteReader(); // Wykonanie zapytania SQL
       
        if (reader->Read()) {
            reader->Close();
            conn->Close();
            return true;
        }

        // Zamkniêcie czytnika i po³¹czenia
        reader->Close();
        conn->Close();
        
    }
    catch (OleDbException^ e) {
        // Obs³uga b³edu po³¹czenia z BD
        MessageBox::Show("B³¹d po³¹czenia z baz¹ danych: " + e->Message);
    }
    return false;
}

//okno rejestracji u¿ytkownika
System::Void Login::linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
    Registration^ rejestracja = gcnew Registration();

    // Wyœwietl nowe okno
    rejestracja->Show();
}

System::Void Login::pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
    // Definicja adresu URL
    std::string url = "https://w.prz.edu.pl/"; // Zmieñ na w³aœciwy adres URL

    // Konwersja std::string na System::String
    System::String^ managedUrl = gcnew System::String(url.c_str());

    // Otwarcie linku w przegl¹darce
    System::Diagnostics::Process::Start(managedUrl);
}

//nie potrzebuje impl
System::Void Login::Login_Load(System::Object^ sender, System::EventArgs^ e) {}