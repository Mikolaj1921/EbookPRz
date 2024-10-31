#include "StartPanel.h"

using namespace KalkulatorBD;
using namespace System::Drawing;

//konstr
StartPanel::StartPanel() {
    InitializeComponent();
}
//destr
StartPanel::~StartPanel() {
    if (components) {
        delete components;
    }
}


//glowne okno
void StartPanel::InitializeComponent() {
    System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StartPanel::typeid));
    this->panel1 = (gcnew System::Windows::Forms::Panel());
    this->label5 = (gcnew System::Windows::Forms::Label());
    this->label4 = (gcnew System::Windows::Forms::Label());
    this->Rozpocznij = (gcnew System::Windows::Forms::Button());
    this->LogikaITeoria = (gcnew System::Windows::Forms::PictureBox());
    this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
    this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
    this->panel2 = (gcnew System::Windows::Forms::Panel());
    this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
    this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
    this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
    this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
    this->label1 = (gcnew System::Windows::Forms::Label());
    this->label2 = (gcnew System::Windows::Forms::Label());
    this->label3 = (gcnew System::Windows::Forms::Label());
    this->button1 = (gcnew System::Windows::Forms::Button());
    this->panel1->SuspendLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LogikaITeoria))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
    this->panel2->SuspendLayout();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
    this->SuspendLayout();
    // 
    // panel1
    // 
    this->panel1->BackColor = System::Drawing::Color::SlateGray;
    this->panel1->Controls->Add(this->label5);
    this->panel1->Controls->Add(this->label4);
    this->panel1->Location = System::Drawing::Point(-17, 723);
    this->panel1->Name = L"panel1";
    this->panel1->Size = System::Drawing::Size(1513, 61);
    this->panel1->TabIndex = 0;
    this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StartPanel::panel1_Paint);
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
    // Rozpocznij
    // 
    this->Rozpocznij->BackColor = System::Drawing::SystemColors::Control;
    this->Rozpocznij->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(238)));
    this->Rozpocznij->Location = System::Drawing::Point(79, 632);
    this->Rozpocznij->Name = L"Rozpocznij";
    this->Rozpocznij->Size = System::Drawing::Size(265, 62);
    this->Rozpocznij->TabIndex = 2;
    this->Rozpocznij->TabStop = false;
    this->Rozpocznij->Text = L"Logowanie";
    this->Rozpocznij->UseCompatibleTextRendering = true;
    this->Rozpocznij->UseMnemonic = false;
    this->Rozpocznij->UseVisualStyleBackColor = false;
    this->Rozpocznij->Click += gcnew System::EventHandler(this, &StartPanel::button1_Click);
    // 
    // LogikaITeoria
    // 
    this->LogikaITeoria->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LogikaITeoria.Image")));
    this->LogikaITeoria->Location = System::Drawing::Point(15, 188);
    this->LogikaITeoria->Name = L"LogikaITeoria";
    this->LogikaITeoria->Size = System::Drawing::Size(153, 182);
    this->LogikaITeoria->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
    this->LogikaITeoria->TabIndex = 3;
    this->LogikaITeoria->TabStop = false;
    // 
    // pictureBox3
    // 
    this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
    this->pictureBox3->Location = System::Drawing::Point(213, 188);
    this->pictureBox3->Name = L"pictureBox3";
    this->pictureBox3->Size = System::Drawing::Size(153, 182);
    this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
    this->pictureBox3->TabIndex = 4;
    this->pictureBox3->TabStop = false;
    // 
    // pictureBox4
    // 
    this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
    this->pictureBox4->Location = System::Drawing::Point(413, 188);
    this->pictureBox4->Name = L"pictureBox4";
    this->pictureBox4->Size = System::Drawing::Size(153, 182);
    this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
    this->pictureBox4->TabIndex = 5;
    this->pictureBox4->TabStop = false;
    // 
    // panel2
    // 
    this->panel2->BackColor = System::Drawing::Color::SlateGray;
    this->panel2->Controls->Add(this->pictureBox1);
    this->panel2->Controls->Add(this->pictureBox5);
    this->panel2->Location = System::Drawing::Point(-26, -38);
    this->panel2->Name = L"panel2";
    this->panel2->Size = System::Drawing::Size(1542, 137);
    this->panel2->TabIndex = 1;
    this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &StartPanel::panel2_Paint);
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
    this->pictureBox5->Click += gcnew System::EventHandler(this, &StartPanel::pictureBox5_Click);
    // 
    // webBrowser1
    // 
    this->webBrowser1->Location = System::Drawing::Point(770, 105);
    this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
    this->webBrowser1->Name = L"webBrowser1";
    this->webBrowser1->Size = System::Drawing::Size(667, 612);
    this->webBrowser1->TabIndex = 7;
    this->webBrowser1->Url = (gcnew System::Uri(L"https://sklep.prz.edu.pl/14-ksiazki", System::UriKind::Absolute));
    this->webBrowser1->DocumentCompleted += gcnew System::Windows::Forms::WebBrowserDocumentCompletedEventHandler(this, &StartPanel::webBrowser1_DocumentCompleted);
    // 
    // pictureBox2
    // 
    this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
    this->pictureBox2->Location = System::Drawing::Point(611, 188);
    this->pictureBox2->Name = L"pictureBox2";
    this->pictureBox2->Size = System::Drawing::Size(153, 182);
    this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
    this->pictureBox2->TabIndex = 8;
    this->pictureBox2->TabStop = false;
    // 
    // label1
    // 
    this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(238)));
    this->label1->Location = System::Drawing::Point(31, 118);
    this->label1->Name = L"label1";
    this->label1->Size = System::Drawing::Size(159, 34);
    this->label1->TabIndex = 9;
    this->label1->Text = L"E-book PRz";
    // 
    // label2
    // 
    this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(238)));
    this->label2->Location = System::Drawing::Point(33, 152);
    this->label2->Name = L"label2";
    this->label2->Size = System::Drawing::Size(731, 33);
    this->label2->TabIndex = 10;
    this->label2->Text = L"Mini elektroniczna biblioteka zawieraj¹ca ksi¹¿ki, wydane przez Oficynê Wydawnicz"
        L"¹ Politechniki Rzeszowskiej im. Ignacego £ukasiewicza.\r\n";
    // 
    // label3
    // 
    this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(238)));
    this->label3->Location = System::Drawing::Point(33, 386);
    this->label3->Name = L"label3";
    this->label3->Size = System::Drawing::Size(708, 233);
    this->label3->TabIndex = 13;
    this->label3->Text = resources->GetString(L"label3.Text");
    // 
    // button1
    // 
    this->button1->BackColor = System::Drawing::SystemColors::Control;
    this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(238)));
    this->button1->Location = System::Drawing::Point(413, 632);
    this->button1->Name = L"button1";
    this->button1->Size = System::Drawing::Size(265, 62);
    this->button1->TabIndex = 12;
    this->button1->TabStop = false;
    this->button1->Text = L"Wyjœcie";
    this->button1->UseCompatibleTextRendering = true;
    this->button1->UseMnemonic = false;
    this->button1->UseVisualStyleBackColor = false;
    this->button1->Click += gcnew System::EventHandler(this, &StartPanel::button1_Click_1);
    // 
    // StartPanel
    // 
    this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
    this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
    this->ClientSize = System::Drawing::Size(1441, 775);
    this->ControlBox = false;
    this->Controls->Add(this->button1);
    this->Controls->Add(this->label3);
    this->Controls->Add(this->label2);
    this->Controls->Add(this->label1);
    this->Controls->Add(this->pictureBox2);
    this->Controls->Add(this->webBrowser1);
    this->Controls->Add(this->pictureBox4);
    this->Controls->Add(this->pictureBox3);
    this->Controls->Add(this->LogikaITeoria);
    this->Controls->Add(this->Rozpocznij);
    this->Controls->Add(this->panel2);
    this->Controls->Add(this->panel1);
    this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
    this->Name = L"StartPanel";
    this->ShowIcon = false;
    this->ShowInTaskbar = false;
    this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
    this->Load += gcnew System::EventHandler(this, &StartPanel::StartPanel_Load);
    this->panel1->ResumeLayout(false);
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LogikaITeoria))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
    this->panel2->ResumeLayout(false);
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
    (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
    this->ResumeLayout(false);

}


System::Void StartPanel::StartPanel_Load(System::Object^ sender, System::EventArgs^ e) {}

//Otwiera login okienko po wciœniêciu
System::Void StartPanel::button1_Click(System::Object^ sender, System::EventArgs^ e) {
    Login^ loginForm = gcnew Login();
    loginForm->Show();
}

System::Void StartPanel::button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
    this->Close();
}

System::Void StartPanel::pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
    // Definicja adresu URL
    std::string url = "https://w.prz.edu.pl/"; // Zmieñ na w³aœciwy adres URL

    // Konwersja std::string na System::String
    System::String^ managedUrl = gcnew System::String(url.c_str());

    // Otwarcie linku w przegl¹darce
    System::Diagnostics::Process::Start(managedUrl);
}

