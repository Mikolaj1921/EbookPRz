#include "Glowna.h"
#include "Database.h"
#include "StartPanel.h"

namespace KalkulatorBD {

    Glowna::Glowna(void)
    {
        InitializeComponent();
    }

    Glowna::~Glowna()
    {
        if (components)
        {
            delete components;
        }
    }

    void Glowna::InitializeComponent(void)
    {
        System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Glowna::typeid));
        this->panel2 = (gcnew System::Windows::Forms::Panel());
        this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
        this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
        this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
        this->Cancel = (gcnew System::Windows::Forms::Button());
        this->panel1 = (gcnew System::Windows::Forms::Panel());
        this->label5 = (gcnew System::Windows::Forms::Label());
        this->label4 = (gcnew System::Windows::Forms::Label());
        this->SearchPole = (gcnew System::Windows::Forms::TextBox());
        this->szukajklik = (gcnew System::Windows::Forms::Button());
        this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
        this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
        this->panel2->SuspendLayout();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
        this->panel1->SuspendLayout();
        this->SuspendLayout();
        // 
        // panel2
        // 
        this->panel2->BackColor = System::Drawing::Color::SlateGray;
        this->panel2->Controls->Add(this->pictureBox5);
        this->panel2->Controls->Add(this->pictureBox3);
        this->panel2->Location = System::Drawing::Point(-26, -38);
        this->panel2->Name = L"panel2";
        this->panel2->Size = System::Drawing::Size(1542, 137);
        this->panel2->TabIndex = 6;
        this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Glowna::panel2_Paint);
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
        this->pictureBox5->Click += gcnew System::EventHandler(this, &Glowna::pictureBox5_Click);
        // 
        // pictureBox3
        // 
        this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
        this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
        this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
        this->pictureBox3->Location = System::Drawing::Point(1176, 50);
        this->pictureBox3->Name = L"pictureBox3";
        this->pictureBox3->Size = System::Drawing::Size(245, 72);
        this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
        this->pictureBox3->TabIndex = 3;
        this->pictureBox3->TabStop = false;
        this->pictureBox3->Click += gcnew System::EventHandler(this, &Glowna::pictureBox3_Click);
        // 
        // flowLayoutPanel1
        // 
        this->flowLayoutPanel1->AllowDrop = true;
        this->flowLayoutPanel1->AutoScroll = true;
        this->flowLayoutPanel1->Location = System::Drawing::Point(12, 105);
        this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
        this->flowLayoutPanel1->Size = System::Drawing::Size(1417, 552);
        this->flowLayoutPanel1->TabIndex = 5;
        this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Glowna::flowLayoutPanel1_Paint);
        // 
        // Cancel
        // 
        this->Cancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(238)));
        this->Cancel->Location = System::Drawing::Point(1178, 663);
        this->Cancel->Name = L"Cancel";
        this->Cancel->Size = System::Drawing::Size(251, 51);
        this->Cancel->TabIndex = 10;
        this->Cancel->TabStop = false;
        this->Cancel->Text = L"Wróć";
        this->Cancel->UseVisualStyleBackColor = true;
        this->Cancel->Click += gcnew System::EventHandler(this, &Glowna::Cancel_Click);
        // 
        // panel1
        // 
        this->panel1->BackColor = System::Drawing::Color::SlateGray;
        this->panel1->Controls->Add(this->label5);
        this->panel1->Controls->Add(this->label4);
        this->panel1->Location = System::Drawing::Point(-17, 723);
        this->panel1->Name = L"panel1";
        this->panel1->Size = System::Drawing::Size(1513, 61);
        this->panel1->TabIndex = 11;
        // 
        // label5
        // 
        this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(238)));
        this->label5->Location = System::Drawing::Point(50, 9);
        this->label5->Name = L"label5";
        this->label5->Size = System::Drawing::Size(496, 43);
        this->label5->TabIndex = 13;
        this->label5->Text = L"Pośredni Sklep internetowy Politechniki Rzeszowskiej im. Ignacego Łukasiewicza.\r\n"
            L"Polska , Rzeszów 35-959 , al. Powstańców Warszawy 12";
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
        // SearchPole
        // 
        this->SearchPole->Anchor = System::Windows::Forms::AnchorStyles::None;
        this->SearchPole->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(238)));
        this->SearchPole->Location = System::Drawing::Point(12, 673);
        this->SearchPole->MaximumSize = System::Drawing::Size(400, 38);
        this->SearchPole->MinimumSize = System::Drawing::Size(400, 38);
        this->SearchPole->Multiline = true;
        this->SearchPole->Name = L"SearchPole";
        this->SearchPole->Size = System::Drawing::Size(400, 38);
        this->SearchPole->TabIndex = 14;
        this->SearchPole->TabStop = false;
        this->SearchPole->TextChanged += gcnew System::EventHandler(this, &Glowna::SearchPole_TextChanged);
        // 
        // szukajklik
        // 
        this->szukajklik->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
            static_cast<System::Byte>(238)));
        this->szukajklik->Location = System::Drawing::Point(418, 673);
        this->szukajklik->MinimumSize = System::Drawing::Size(40, 38);
        this->szukajklik->Name = L"szukajklik";
        this->szukajklik->Size = System::Drawing::Size(40, 38);
        this->szukajklik->TabIndex = 16;
        this->szukajklik->TabStop = false;
        this->szukajklik->Text = L"⌕";
        this->szukajklik->UseVisualStyleBackColor = true;
        this->szukajklik->Click += gcnew System::EventHandler(this, &Glowna::szukajklik_Click);
        // 
        // comboBox2
        // 
        this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        this->comboBox2->FormattingEnabled = true;
        this->comboBox2->IntegralHeight = false;
        this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
            L"Sortuj alfabetycznie", L"Sortuj odwrotnie alfabetycznie",
                L"Sortuj po dacie dodania"
        });
        this->comboBox2->Location = System::Drawing::Point(464, 673);
        this->comboBox2->Name = L"comboBox2";
        this->comboBox2->Size = System::Drawing::Size(232, 24);
        this->comboBox2->TabIndex = 17;
        this->comboBox2->Text = L"Sortuj według:";
        this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Glowna::comboBox2_SelectedIndexChanged);
        // 
        // Glowna
        // 
        this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
        this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
        this->ClientSize = System::Drawing::Size(1441, 775);
        this->ControlBox = false;
        this->Controls->Add(this->comboBox2);
        this->Controls->Add(this->szukajklik);
        this->Controls->Add(this->SearchPole);
        this->Controls->Add(this->panel1);
        this->Controls->Add(this->Cancel);
        this->Controls->Add(this->panel2);
        this->Controls->Add(this->flowLayoutPanel1);
        this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
        this->Name = L"Glowna";
        this->ShowIcon = false;
        this->ShowInTaskbar = false;
        this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
        this->Load += gcnew System::EventHandler(this, &Glowna::Glowna_Load);
        this->panel2->ResumeLayout(false);
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
        (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
        this->panel1->ResumeLayout(false);
        this->ResumeLayout(false);
        this->PerformLayout();

    }

    //glowne okno z zawartoscią książek (pobranymi danymi z bazy danych za pomocą metod)
    System::Void Glowna::Glowna_Load(System::Object^ sender, System::EventArgs^ e) {
        
        auto photoPaths = Database::GetPhotoPaths(); // Pobranie ścieżek zdjęć
        auto descriptionsAndLinks = Database::GetDescriptionsAndLinks(); // Pobranie opisów i linków

        // Upewnienie się czy ilość ścieżek zdjęć i ilość opisów z linkami są zgodne
        if (photoPaths.size() != descriptionsAndLinks.size()) {
            // Obsługa błędu lub zakończenie funkcji jeśli ilości niezgodne
            return;
        }

        // Iteracja przez dane bazowe
        for (size_t i = 0; i < photoPaths.size(); ++i) {
            std::string photoPath = photoPaths[i];
            std::string photoDescription = descriptionsAndLinks[i].first;
            std::string linkBook = descriptionsAndLinks[i].second;

            // Tworzenie PictureBox dla zdjęcia
            PictureBox^ pictureBox = gcnew PictureBox();
            pictureBox->SizeMode = PictureBoxSizeMode::Zoom;
            pictureBox->Size = System::Drawing::Size(200, 200);
            pictureBox->ImageLocation = gcnew String(photoPath.c_str());

            // Tworzenie TextBox dla opisu zdjęcia
            TextBox^ textBox = gcnew TextBox();
            textBox->ReadOnly = true;
            textBox->Multiline = true;
            textBox->AutoSize = false;
            textBox->TabStop = false;
            textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
            textBox->Size = System::Drawing::Size(700, 200);
            textBox->Text = gcnew String(photoDescription.c_str());
            // Ustawienie marginesów dla TextBox, aby uzyskać odstęp między opisami
            textBox->Margin = System::Windows::Forms::Padding(0, 0, 0, 30); // Margines dolny ustawiony na 20 pikseli

            // Tworzenie LinkLabel dla linku "Szczegóły"
            LinkLabel^ linkLabel = gcnew LinkLabel();
            linkLabel->Text = "Szczególne informacje";
            linkLabel->AutoSize = true;
            linkLabel->Tag = gcnew System::String(linkBook.c_str());

            // Dodanie obsługi zdarzenia kliknięcia dla LinkLabel
            linkLabel->Click += gcnew System::EventHandler(this, &Glowna::LinkLabel_Click);

            // Dodanie kontrolki PictureBox, TextBox, LinkLabel do panelu flowLayoutPanel1
            this->flowLayoutPanel1->Controls->Add(pictureBox);
            this->flowLayoutPanel1->Controls->Add(textBox);
            this->flowLayoutPanel1->Controls->Add(linkLabel);
        }
    }

    //opis ksiazki
    System::Void Glowna::TextBox_Enter(System::Object^ sender, System::EventArgs^ e) {
        // Usunięcie fokusu z pola tekstowego
        this->ActiveControl = nullptr;
    }

    //link 
    System::Void Glowna::LinkLabel_Click(System::Object^ sender, System::EventArgs^ e) {
        LinkLabel^ clickedLink = dynamic_cast<LinkLabel^>(sender);
        if (clickedLink != nullptr) {
            String^ url = safe_cast<String^>(clickedLink->Tag);
            System::Diagnostics::Process::Start(url);
        }
    }

    //kopiowanie z textbox
    System::Void Glowna::TextBox_Click(System::Object^ sender, System::EventArgs^ e) {
        TextBox^ clickedTextBox = safe_cast<TextBox^>(sender);
        Clipboard::SetText(clickedTextBox->Text); // Kopiowanie tekstu z TextBox do schowka
    }

    //Ikonka (menu) z danymi użytkownika
    System::Void Glowna::pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
        // Utwórz nowy obiekt okna LoginForm i wyświetlnie okna
        DaneUzytkownika^ dane = gcnew DaneUzytkownika();
        dane->Show();
    }

    //ikonka prz
    System::Void Glowna::pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
        // Definicja adresu URL
        std::string url = "https://w.prz.edu.pl/"; // Zmień na właściwy adres URL
        // Konwersja std::string na System::String
        System::String^ managedUrl = gcnew System::String(url.c_str());
        // Otwarcie linku w przeglądarce
        System::Diagnostics::Process::Start(managedUrl);
    }
    //wróć
    System::Void Glowna::Cancel_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Close();
    }

    // METODA POSZUKIWANIE WZGLĘDEM OPISU KSIĄŻKI 

    System::Void Glowna::szukajklik_Click(System::Object^ sender, System::EventArgs^ e) {
        // Pobranie tekstu z pola wyszukiwania
        String^ searchText = this->SearchPole->Text;

        // Usunięcie wszystkich istniejących kontrolek z flowLayoutPanel1
        this->flowLayoutPanel1->Controls->Clear();

        // Zmienna określająca, czy tekst został znaleziony
        bool textFound = false;

        // Pobranie opisów, linków i ścieżek zdjęć z bazy danych
        auto descriptionsAndLinks = Database::GetDescriptionsAndLinks();
        auto photoPaths = Database::GetPhotoPaths();

        // Upewnienie się, że ilość ścieżek zdjęć i ilość opisów z linkami są zgodne
        if (photoPaths.size() != descriptionsAndLinks.size()) {
            // Obsługa błędu lub zakończenie funkcji, jeśli ilości są niezgodne
            return;
        }

        // Iteracja przez dane
        for (size_t i = 0; i < photoPaths.size(); ++i) {
            std::string photoPath = photoPaths[i];
            std::string photoDescription = descriptionsAndLinks[i].first;
            std::string link = descriptionsAndLinks[i].second;

            String^ photoDescriptionStr = gcnew String(photoDescription.c_str());
            if (photoDescriptionStr->IndexOf(searchText, StringComparison::OrdinalIgnoreCase) >= 0) {
                // Wyświetl opis, link i zdjęcie tylko jeśli tekst został znaleziony
                TextBox^ textBox = gcnew TextBox();
                textBox->ReadOnly = true;
                textBox->Multiline = true;
                textBox->AutoSize = false;
                textBox->TabStop = false;
                textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
                textBox->Size = System::Drawing::Size(700, 225);
                textBox->Text = gcnew String(photoDescription.c_str());

                LinkLabel^ linkLabel = gcnew LinkLabel();
                linkLabel->Text = "Szczególne informacje";
                linkLabel->AutoSize = true;
                linkLabel->Tag = gcnew System::String(link.c_str());
                linkLabel->Click += gcnew System::EventHandler(this, &Glowna::LinkLabel_Click);

                PictureBox^ pictureBox = gcnew PictureBox();
                pictureBox->SizeMode = PictureBoxSizeMode::Zoom;
                pictureBox->Size = System::Drawing::Size(200, 200);
                pictureBox->ImageLocation = gcnew String(photoPath.c_str());

                // Dodaj kontrolki do panelu
                this->flowLayoutPanel1->Controls->Add(pictureBox);
                this->flowLayoutPanel1->Controls->Add(textBox);
                this->flowLayoutPanel1->Controls->Add(linkLabel);

                // Ustaw flagę na true, aby oznaczyć, że tekst został znaleziony
                textFound = true;
            }
        }
        // Jeśli nie znaleziono tekstu, wyświetl odpowiedni komunikat
        if (!textFound) {
            MessageBox::Show("Nie znaleziono żadnych pasujących wyników.");
        }
    }
       
    /////////////////////// METODA DO SORTOWANIA /////////////////////////

    // Definicja lambdy poza ciałem klasy
    auto sortAscending = [](const std::pair<std::string, std::string>& a, const std::pair<std::string, std::string>& b) {
        return a.first < b.first;
        };

    auto sortDescending = [](const std::pair<std::string, std::string>& a, const std::pair<std::string, std::string>& b) {
        return a.first > b.first;
        };

    System::Void Glowna::comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
        // Pobierz aktualnie wybraną opcję sortowania z ComboBox
        String^ selectedOption = comboBox2->SelectedItem->ToString();

        // Pobierz aktualne dane
        auto descriptionsAndLinks = Database::GetDescriptionsAndLinks();
        auto photoPaths = Database::GetPhotoPaths();

        // Jeśli wybrano sortowanie alfabetyczne (A-Z)
        if (selectedOption == "Sortuj alfabetycznie") {
            std::sort(descriptionsAndLinks.begin(), descriptionsAndLinks.end(), sortAscending);
            std::sort(photoPaths.begin(), photoPaths.end()); // Domyślnie sortuje alfabetycznie (A-Z)
        }
        // Jeśli wybrano sortowanie alfabetyczne (Z-A)
        else if (selectedOption == "Sortuj odwrotnie alfabetycznie") {
            std::sort(descriptionsAndLinks.begin(), descriptionsAndLinks.end(), sortDescending);
            std::sort(photoPaths.begin(), photoPaths.end(), std::greater<std::string>()); // Sortuje malejąco (Z-A)
        }
        // Jeśli wybrano sortowanie po dacie dodania
        else if (selectedOption == "Sortuj po dacie dodania") { }

        // Wyczyść aktualne zawartości flowLayoutPanel1
        flowLayoutPanel1->Controls->Clear();

        // Ponownie wygeneruj kontrolki na podstawie posortowanych danych
        for (size_t i = 0; i < descriptionsAndLinks.size(); ++i) {
            std::string photoPath = photoPaths[i];  // Tutaj pobieramy ścieżkę zdjęcia odpowiadającą aktualnemu opisowi
            std::string photoDescription = descriptionsAndLinks[i].first;
            std::string link = descriptionsAndLinks[i].second;

            // Tworzenie PictureBox dla zdjęcia
            PictureBox^ pictureBox = gcnew PictureBox();
            pictureBox->SizeMode = PictureBoxSizeMode::Zoom;
            pictureBox->Size = System::Drawing::Size(200, 200);
            pictureBox->ImageLocation = gcnew String(photoPath.c_str());

            // Tworzenie TextBox dla opisu zdjęcia
            TextBox^ textBox = gcnew TextBox();
            textBox->ReadOnly = true;
            textBox->Multiline = true;
            textBox->AutoSize = false;
            textBox->TabStop = false;
            textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
            textBox->Size = System::Drawing::Size(700, 225);
            textBox->Text = gcnew String(photoDescription.c_str());

            // Tworzenie LinkLabel dla linku "Szczegóły"
            LinkLabel^ linkLabel = gcnew LinkLabel();
            linkLabel->Text = "Szczególne informacje";
            linkLabel->AutoSize = true;
            linkLabel->Tag = gcnew System::String(link.c_str());

            // Dodanie obsługi zdarzenia kliknięcia dla LinkLabel
            linkLabel->Click += gcnew System::EventHandler(this, &Glowna::LinkLabel_Click);

            // Dodanie kontrolki PictureBox, TextBox, LinkLabel i pustego Label do panelu flowLayoutPanel1
            this->flowLayoutPanel1->Controls->Add(pictureBox);
            this->flowLayoutPanel1->Controls->Add(textBox);
            this->flowLayoutPanel1->Controls->Add(linkLabel);

            // Dodanie pustego Label jako nowej linii
            Label^ emptyLabel = gcnew Label();
            emptyLabel->AutoSize = true;
            this->flowLayoutPanel1->Controls->Add(emptyLabel);
            this->flowLayoutPanel1->SetFlowBreak(emptyLabel, true);
        }
    }

    //nie potrzebują implementacji
    System::Void Glowna::flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {}
    System::Void Glowna::pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {}
    System::Void Glowna::SearchPole_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
}