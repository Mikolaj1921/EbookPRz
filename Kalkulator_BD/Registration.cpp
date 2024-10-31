#include "Registration.h"

namespace KalkulatorBD {

    //konstr
    Registration::Registration(void) {
        InitializeComponent();
    }

    //destr
    Registration::~Registration() {
        if (components) {
            delete components;
        }
    }

    void Registration::InitializeComponent(void) {
        System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Registration::typeid));
        this->Cancel = (gcnew System::Windows::Forms::Button());
        this->Ok = (gcnew System::Windows::Forms::Button());
        this->label3 = (gcnew System::Windows::Forms::Label());
        this->label2 = (gcnew System::Windows::Forms::Label());
        this->label1 = (gcnew System::Windows::Forms::Label());
        this->Haslopole = (gcnew System::Windows::Forms::TextBox());
        this->Loginpole = (gcnew System::Windows::Forms::TextBox());
        this->ImiePole = (gcnew System::Windows::Forms::TextBox());
        this->NazwiskoPole = (gcnew System::Windows::Forms::TextBox());
        this->EmailPole = (gcnew System::Windows::Forms::TextBox());
        this->label4 = (gcnew System::Windows::Forms::Label());
        this->label5 = (gcnew System::Windows::Forms::Label());
        this->label6 = (gcnew System::Windows::Forms::Label());
        this->Indexpole = (gcnew System::Windows::Forms::TextBox());
        this->label7 = (gcnew System::Windows::Forms::Label());
        this->panel2 = (gcnew System::Windows::Forms::Panel());
        this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
        this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
        this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
        this->panel1 = (gcnew System::Windows::Forms::Panel());
        this->label8 = (gcnew System::Windows::Forms::Label());
        this->label9 = (gcnew System::Windows::Forms::Label());
        this->label10 = (gcnew System::Windows::Forms::Label());
        this->panel2->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
        this->panel1->SuspendLayout();
        this->SuspendLayout();
        // 
        // Cancel
        // 
        this->Cancel->Location = System::Drawing::Point(502, 673);
        this->Cancel->Name = L"Cancel";
        this->Cancel->Size = System::Drawing::Size(171, 36);
        this->Cancel->TabIndex = 16;
        this->Cancel->Text = L"Cancel";
        this->Cancel->UseVisualStyleBackColor = true;
        this->Cancel->Click += gcnew System::EventHandler(this, &Registration::Cancel_Click);
        // 
        // Ok
        // 
        this->Ok->Location = System::Drawing::Point(281, 673);
        this->Ok->Name = L"Ok";
        this->Ok->Size = System::Drawing::Size(171, 36);
        this->Ok->TabIndex = 15;
        this->Ok->Text = L"Ok";
        this->Ok->UseVisualStyleBackColor = true;
        this->Ok->Click += gcnew System::EventHandler(this, &Registration::Ok_Click);
        // 
        // label3
        // 
        this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
        this->label3->AutoSize = true;
        this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(238)));
        this->label3->Location = System::Drawing::Point(275, 272);
        this->label3->MaximumSize = System::Drawing::Size(600, 272);
        this->label3->MinimumSize = System::Drawing::Size(150, 50);
        this->label3->Name = L"label3";
        this->label3->Size = System::Drawing::Size(403, 50);
        this->label3->TabIndex = 14;
        this->label3->Text = L"Tworzenie konta E-book PRz";
        this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
        this->label3->Click += gcnew System::EventHandler(this, &Registration::label3_Click);
        // 
        // label2
        // 
        this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
        this->label2->AutoSize = true;
        this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(238)));
        this->label2->Location = System::Drawing::Point(78, 392);
        this->label2->MaximumSize = System::Drawing::Size(300, 300);
        this->label2->MinimumSize = System::Drawing::Size(150, 40);
        this->label2->Name = L"label2";
        this->label2->Size = System::Drawing::Size(150, 40);
        this->label2->TabIndex = 13;
        this->label2->Text = L"Haslo*";
        this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
        this->label2->Click += gcnew System::EventHandler(this, &Registration::label2_Click);
        // 
        // label1
        // 
        this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
        this->label1->AutoSize = true;
        this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(238)));
        this->label1->Location = System::Drawing::Point(78, 337);
        this->label1->MaximumSize = System::Drawing::Size(300, 300);
        this->label1->MinimumSize = System::Drawing::Size(150, 40);
        this->label1->Name = L"label1";
        this->label1->Size = System::Drawing::Size(150, 40);
        this->label1->TabIndex = 12;
        this->label1->Text = L"Login*";
        this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
        this->label1->Click += gcnew System::EventHandler(this, &Registration::label1_Click);
        // 
        // Haslopole
        // 
        this->Haslopole->Anchor = System::Windows::Forms::AnchorStyles::None;
        this->Haslopole->BorderStyle = System::Windows::Forms::BorderStyle::None;
        this->Haslopole->Location = System::Drawing::Point(234, 392);
        this->Haslopole->MaximumSize = System::Drawing::Size(100, 1000);
        this->Haslopole->MinimumSize = System::Drawing::Size(490, 40);
        this->Haslopole->Name = L"Haslopole";
        this->Haslopole->Size = System::Drawing::Size(490, 40);
        this->Haslopole->TabIndex = 11;
        this->Haslopole->TextChanged += gcnew System::EventHandler(this, &Registration::Haslopole_TextChanged);
        // 
        // Loginpole
        // 
        this->Loginpole->Anchor = System::Windows::Forms::AnchorStyles::None;
        this->Loginpole->BorderStyle = System::Windows::Forms::BorderStyle::None;
        this->Loginpole->Location = System::Drawing::Point(234, 337);
        this->Loginpole->MaximumSize = System::Drawing::Size(100, 1000);
        this->Loginpole->MinimumSize = System::Drawing::Size(490, 40);
        this->Loginpole->Name = L"Loginpole";
        this->Loginpole->Size = System::Drawing::Size(490, 40);
        this->Loginpole->TabIndex = 10;
        this->Loginpole->TextChanged += gcnew System::EventHandler(this, &Registration::Loginpole_TextChanged);
        // 
        // ImiePole
        // 
        this->ImiePole->Anchor = System::Windows::Forms::AnchorStyles::None;
        this->ImiePole->BorderStyle = System::Windows::Forms::BorderStyle::None;
        this->ImiePole->Location = System::Drawing::Point(234, 447);
        this->ImiePole->MaximumSize = System::Drawing::Size(100, 1000);
        this->ImiePole->MinimumSize = System::Drawing::Size(490, 40);
        this->ImiePole->Name = L"ImiePole";
        this->ImiePole->Size = System::Drawing::Size(490, 40);
        this->ImiePole->TabIndex = 17;
        // 
        // NazwiskoPole
        // 
        this->NazwiskoPole->Anchor = System::Windows::Forms::AnchorStyles::None;
        this->NazwiskoPole->BorderStyle = System::Windows::Forms::BorderStyle::None;
        this->NazwiskoPole->Location = System::Drawing::Point(234, 502);
        this->NazwiskoPole->MaximumSize = System::Drawing::Size(100, 1000);
        this->NazwiskoPole->MinimumSize = System::Drawing::Size(490, 40);
        this->NazwiskoPole->Name = L"NazwiskoPole";
        this->NazwiskoPole->Size = System::Drawing::Size(490, 40);
        this->NazwiskoPole->TabIndex = 18;
        // 
        // EmailPole
        // 
        this->EmailPole->Anchor = System::Windows::Forms::AnchorStyles::None;
        this->EmailPole->BorderStyle = System::Windows::Forms::BorderStyle::None;
        this->EmailPole->Location = System::Drawing::Point(234, 557);
        this->EmailPole->MaximumSize = System::Drawing::Size(100, 1000);
        this->EmailPole->MinimumSize = System::Drawing::Size(490, 40);
        this->EmailPole->Name = L"EmailPole";
        this->EmailPole->Size = System::Drawing::Size(490, 40);
        this->EmailPole->TabIndex = 19;
        // 
        // label4
        // 
        this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
        this->label4->AutoSize = true;
        this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(238)));
        this->label4->Location = System::Drawing::Point(78, 447);
        this->label4->MaximumSize = System::Drawing::Size(300, 300);
        this->label4->MinimumSize = System::Drawing::Size(150, 40);
        this->label4->Name = L"label4";
        this->label4->Size = System::Drawing::Size(150, 40);
        this->label4->TabIndex = 20;
        this->label4->Text = L"Imie*";
        this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
        // 
        // label5
        // 
        this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
        this->label5->AutoSize = true;
        this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(238)));
        this->label5->Location = System::Drawing::Point(78, 502);
        this->label5->MaximumSize = System::Drawing::Size(300, 300);
        this->label5->MinimumSize = System::Drawing::Size(150, 40);
        this->label5->Name = L"label5";
        this->label5->Size = System::Drawing::Size(150, 40);
        this->label5->TabIndex = 21;
        this->label5->Text = L"Nazwisko*";
        this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
        // 
        // label6
        // 
        this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
        this->label6->AutoSize = true;
        this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(238)));
        this->label6->Location = System::Drawing::Point(78, 557);
        this->label6->MaximumSize = System::Drawing::Size(300, 300);
        this->label6->MinimumSize = System::Drawing::Size(150, 40);
        this->label6->Name = L"label6";
        this->label6->Size = System::Drawing::Size(150, 40);
        this->label6->TabIndex = 22;
        this->label6->Text = L"Email*";
        this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
        // 
        // Indexpole
        // 
        this->Indexpole->Anchor = System::Windows::Forms::AnchorStyles::None;
        this->Indexpole->BorderStyle = System::Windows::Forms::BorderStyle::None;
        this->Indexpole->Location = System::Drawing::Point(234, 612);
        this->Indexpole->MaximumSize = System::Drawing::Size(100, 1000);
        this->Indexpole->MinimumSize = System::Drawing::Size(490, 40);
        this->Indexpole->Name = L"Indexpole";
        this->Indexpole->Size = System::Drawing::Size(490, 40);
        this->Indexpole->TabIndex = 23;
        // 
        // label7
        // 
        this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
        this->label7->AutoSize = true;
        this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(238)));
        this->label7->Location = System::Drawing::Point(78, 612);
        this->label7->MaximumSize = System::Drawing::Size(300, 300);
        this->label7->MinimumSize = System::Drawing::Size(150, 40);
        this->label7->Name = L"label7";
        this->label7->Size = System::Drawing::Size(150, 40);
        this->label7->TabIndex = 24;
        this->label7->Text = L"Index";
        this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
        // 
        // panel2
        // 
        this->panel2->BackColor = System::Drawing::Color::SlateGray;
        this->panel2->Controls->Add(this->pictureBox1);
        this->panel2->Controls->Add(this->pictureBox5);
        this->panel2->Location = System::Drawing::Point(-26, -38);
        this->panel2->Name = L"panel2";
        this->panel2->Size = System::Drawing::Size(1542, 137);
        this->panel2->TabIndex = 25;
        // 
        // pictureBox1
        // 
        this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
        this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
        this->pictureBox1->Location = System::Drawing::Point(1283, 50);
        this->pictureBox1->Name = L"pictureBox1";
        this->pictureBox1->Size = System::Drawing::Size(155, 72);
        this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
        this->pictureBox1->TabIndex = 13;
        this->pictureBox1->TabStop = false;
        // 
        // pictureBox5
        // 
        this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
        this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
        this->pictureBox5->Location = System::Drawing::Point(41, 50);
        this->pictureBox5->Name = L"pictureBox5";
        this->pictureBox5->Size = System::Drawing::Size(192, 72);
        this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
        this->pictureBox5->TabIndex = 12;
        this->pictureBox5->TabStop = false;
        // 
        // webBrowser1
        // 
        this->webBrowser1->Location = System::Drawing::Point(830, 105);
        this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
        this->webBrowser1->Name = L"webBrowser1";
        this->webBrowser1->Size = System::Drawing::Size(607, 612);
        this->webBrowser1->TabIndex = 26;
        this->webBrowser1->Url = (gcnew System::Uri(L"https://sklep.prz.edu.pl/content/6-regulamin", System::UriKind::Absolute));
        // 
        // panel1
        // 
        this->panel1->BackColor = System::Drawing::Color::SlateGray;
        this->panel1->Controls->Add(this->label8);
        this->panel1->Controls->Add(this->label9);
        this->panel1->Location = System::Drawing::Point(-17, 723);
        this->panel1->Name = L"panel1";
        this->panel1->Size = System::Drawing::Size(1513, 61);
        this->panel1->TabIndex = 27;
        // 
        // label8
        // 
        this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(238)));
        this->label8->Location = System::Drawing::Point(50, 9);
        this->label8->Name = L"label8";
        this->label8->Size = System::Drawing::Size(496, 43);
        this->label8->TabIndex = 13;
        this->label8->Text = L"Poœredni Sklep internetowy Politechniki Rzeszowskiej im. Ignacego £ukasiewicza.\r\n"
            L"Polska , Rzeszów 35-959 , al. Powstañców Warszawy 12";
        // 
        // label9
        // 
        this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(238)));
        this->label9->Location = System::Drawing::Point(1162, 23);
        this->label9->Name = L"label9";
        this->label9->Size = System::Drawing::Size(291, 20);
        this->label9->TabIndex = 12;
        this->label9->Text = L"Copyright © 2024 | Stworzono przez Mikolaj";
        // 
        // label10
        // 
        this->label10->AutoSize = true;
        this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(238)));
        this->label10->Location = System::Drawing::Point(12, 102);
        this->label10->MinimumSize = System::Drawing::Size(670, 150);
        this->label10->Name = L"label10";
        this->label10->Size = System::Drawing::Size(692, 160);
        this->label10->TabIndex = 28;
        this->label10->Text = resources->GetString(L"label10.Text");
        // 
        // Registration
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->BackColor = System::Drawing::SystemColors::Control;
        this->ClientSize = System::Drawing::Size(1441, 775);
        this->ControlBox = false;
        this->Controls->Add(this->label10);
        this->Controls->Add(this->panel1);
        this->Controls->Add(this->webBrowser1);
        this->Controls->Add(this->panel2);
        this->Controls->Add(this->Indexpole);
        this->Controls->Add(this->label7);
        this->Controls->Add(this->EmailPole);
        this->Controls->Add(this->NazwiskoPole);
        this->Controls->Add(this->ImiePole);
        this->Controls->Add(this->Cancel);
        this->Controls->Add(this->Ok);
        this->Controls->Add(this->label3);
        this->Controls->Add(this->label2);
        this->Controls->Add(this->label1);
        this->Controls->Add(this->Haslopole);
        this->Controls->Add(this->Loginpole);
        this->Controls->Add(this->label4);
        this->Controls->Add(this->label5);
        this->Controls->Add(this->label6);
        this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
        this->Name = L"Registration";
        this->ShowIcon = false;
        this->ShowInTaskbar = false;
        this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
        this->Load += gcnew System::EventHandler(this, &Registration::Registration_Load);
        this->panel2->ResumeLayout(false);
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
        this->panel1->ResumeLayout(false);
        this->ResumeLayout(false);
        this->PerformLayout();

    }


    //sprawdzanie meilu czy jest poprawny
    bool Registration::IsValidEmail(String^ email) {
        // Sprawdzenie, czy email zawiera symbol '@' i '.' oraz czy '.' wystêpuje po '@'
        // oraz czy po kropce wystêpuje co najmniej jedna litera lub cyfra
        int atIndex = email->IndexOf("@");
        int dotIndex = email->LastIndexOf(".");
        return atIndex > 0 &&
            dotIndex > atIndex + 1 &&
            dotIndex < email->Length - 1 &&
            email->Contains("@") &&
            email->Contains(".") &&
            email->IndexOf("@") < email->LastIndexOf(".");
    }

    //zapisanie danych(sprawdzenie na poprawnosc i zapisanie do BD
    System::Void Registration::Ok_Click(System::Object^ sender, System::EventArgs^ e) {
        // Pobierz dane z pól formularza
        String^ login = this->Loginpole->Text;
        String^ haslo = this->Haslopole->Text;
        String^ imie = this->ImiePole->Text;
        String^ nazwisko = this->NazwiskoPole->Text;
        String^ email = this->EmailPole->Text;
        String^ index = this->Indexpole->Text;

        // SprawdŸ, czy wszystkie pola formularza s¹ wype³nione
        if (String::IsNullOrEmpty(login) ||
            String::IsNullOrEmpty(haslo) ||
            String::IsNullOrEmpty(imie) ||
            String::IsNullOrEmpty(nazwisko) ||
            String::IsNullOrEmpty(email)) {
            MessageBox::Show("Wype³nij wszystkie pola.");
            return;
        }

        // SprawdŸ poprawnoœæ adresu email
        if (!IsValidEmail(email)) {
            MessageBox::Show("WprowadŸ poprawny adres email.");
            return;
        }

        // SprawdŸ poprawnoœæ numeru indeksu (jeœli zosta³ podany)
        if (!String::IsNullOrEmpty(index)) {
            // SprawdŸ, czy numer indeksu sk³ada siê z 6 cyfr
            if (index->Length != 6 || !System::Text::RegularExpressions::Regex::IsMatch(index, "\\d{6}")) {
                MessageBox::Show("Niepoprawny numer indeksu.");
                return;
            }

            // SprawdŸ, czy numer indeksu ju¿ istnieje w bazie danych
            String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\halin\\Desktop\\EbookPrz\\x64\\Debug\\DaneOsobowe.mdb";
            OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

            try {
                connection->Open();

                // SprawdŸ, czy numer indeksu ju¿ istnieje w bazie danych
                String^ query = "SELECT Count(*) FROM Registration WHERE NrIndeksu = ?";
                OleDbCommand^ command = gcnew OleDbCommand(query, connection);
                command->Parameters->AddWithValue("?", index);
                int count = (int)command->ExecuteScalar();

                if (count > 0) {
                    MessageBox::Show("Numer indeksu ju¿ istnieje.");
                    return;
                }
            }
            catch (Exception^ ex) {
                MessageBox::Show("Wyst¹pi³ b³¹d podczas sprawdzania numeru indeksu w bazie danych.");
                return;
            }
            finally {
                if (connection->State == ConnectionState::Open) {
                    connection->Close();
                }
            }
        }

        // Po³¹czenie z baz¹ danych 
        String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\halin\\Desktop\\EbookPrz\\x64\\Debug\\DaneOsobowe.mdb";
        OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

        try {
            // Otwarcie po³¹czenia
            connection->Open();

            // Polecenie SQL do wstawienia danych do tabeli (zmieñ nazwê tabeli i kolumn wed³ug Twojej bazy danych)
            String^ query;
            if (String::IsNullOrEmpty(index)) {
                query = "INSERT INTO Registration (Login, Haslo, Imie, Nazwisko, Email) VALUES (?, ?, ?, ?, ?)";
            }
            else {
                query = "INSERT INTO Registration (Login, Haslo, Imie, Nazwisko, Email, NrIndeksu) VALUES (?, ?, ?, ?, ?, ?)";
            }
            OleDbCommand^ command = gcnew OleDbCommand(query, connection);

            // Dodanie parametrów
            command->Parameters->AddWithValue("?", login);
            command->Parameters->AddWithValue("?", haslo);
            command->Parameters->AddWithValue("?", imie);
            command->Parameters->AddWithValue("?", nazwisko);
            command->Parameters->AddWithValue("?", email);
            if (!String::IsNullOrEmpty(index)) {
                command->Parameters->AddWithValue("?", index);
            }

            // Wykonanie polecenia SQL
            command->ExecuteNonQuery();

            // Komunikat potwierdzaj¹cy
            MessageBox::Show("Konto zosta³o utworzone.");

            // Zamkniêcie okna rejestracji
            this->Close();
        }
        catch (Exception^ ex) {
            MessageBox::Show("Wyst¹pi³ b³¹d podczas tworzenia konta, taki login ju¿ istnieje!");
        }
        finally {
            // Zamkniêcie po³¹czenia
            if (connection->State == ConnectionState::Open) {
                connection->Close();
            }
        }
    }

    System::Void Registration::Cancel_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Close();
    }

    //nie potrzeba impl
    System::Void Registration::Loginpole_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
    System::Void Registration::Haslopole_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
    System::Void Registration::label1_Click(System::Object^ sender, System::EventArgs^ e) {}
    System::Void Registration::label2_Click(System::Object^ sender, System::EventArgs^ e) {}
    System::Void Registration::label3_Click(System::Object^ sender, System::EventArgs^ e) {}
    
}
