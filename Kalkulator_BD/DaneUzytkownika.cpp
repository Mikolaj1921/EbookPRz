#include "DaneUzytkownika.h"
#include "Database.h"
#include "Login.h"

namespace KalkulatorBD {

	DaneUzytkownika::DaneUzytkownika(void)
	{
		InitializeComponent();
	}

	DaneUzytkownika::~DaneUzytkownika()
	{
		if (components)
		{
			delete components;
		}
	}

	void DaneUzytkownika::InitializeComponent(void)
	{
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DaneUzytkownika::typeid));
		this->panel1 = (gcnew System::Windows::Forms::Panel());
		this->label5 = (gcnew System::Windows::Forms::Label());
		this->label4 = (gcnew System::Windows::Forms::Label());
		this->Cancel = (gcnew System::Windows::Forms::Button());
		this->Save = (gcnew System::Windows::Forms::Button());
		this->panel2 = (gcnew System::Windows::Forms::Panel());
		this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
		this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
		this->Indexpole = (gcnew System::Windows::Forms::TextBox());
		this->label7 = (gcnew System::Windows::Forms::Label());
		this->EmailPole = (gcnew System::Windows::Forms::TextBox());
		this->NazwiskoPole = (gcnew System::Windows::Forms::TextBox());
		this->ImiePole = (gcnew System::Windows::Forms::TextBox());
		this->label2 = (gcnew System::Windows::Forms::Label());
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->Haslopole = (gcnew System::Windows::Forms::TextBox());
		this->Loginpole = (gcnew System::Windows::Forms::TextBox());
		this->label3 = (gcnew System::Windows::Forms::Label());
		this->label6 = (gcnew System::Windows::Forms::Label());
		this->label8 = (gcnew System::Windows::Forms::Label());
		this->label9 = (gcnew System::Windows::Forms::Label());
		this->label10 = (gcnew System::Windows::Forms::Label());
		this->label11 = (gcnew System::Windows::Forms::Label());
		this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
		this->Wyswietldane = (gcnew System::Windows::Forms::Button());
		this->label12 = (gcnew System::Windows::Forms::Label());
		this->button1 = (gcnew System::Windows::Forms::Button());
		this->button2 = (gcnew System::Windows::Forms::Button());
		this->panel1->SuspendLayout();
		this->panel2->SuspendLayout();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
		this->panel1->TabIndex = 3;
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
		// Cancel
		// 
		this->Cancel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->Cancel->Location = System::Drawing::Point(1340, 663);
		this->Cancel->Name = L"Cancel";
		this->Cancel->Size = System::Drawing::Size(72, 51);
		this->Cancel->TabIndex = 11;
		this->Cancel->TabStop = false;
		this->Cancel->Text = L"Wróæ";
		this->Cancel->UseVisualStyleBackColor = true;
		this->Cancel->Click += gcnew System::EventHandler(this, &DaneUzytkownika::Cancel_Click_1);
		// 
		// Save
		// 
		this->Save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->Save->Location = System::Drawing::Point(1250, 663);
		this->Save->Name = L"Save";
		this->Save->Size = System::Drawing::Size(84, 51);
		this->Save->TabIndex = 13;
		this->Save->TabStop = false;
		this->Save->Text = L"Zapisz";
		this->Save->UseVisualStyleBackColor = true;
		this->Save->Click += gcnew System::EventHandler(this, &DaneUzytkownika::Save_Click);
		// 
		// panel2
		// 
		this->panel2->BackColor = System::Drawing::Color::SlateGray;
		this->panel2->Controls->Add(this->pictureBox5);
		this->panel2->Controls->Add(this->pictureBox1);
		this->panel2->Location = System::Drawing::Point(-26, -38);
		this->panel2->Name = L"panel2";
		this->panel2->Size = System::Drawing::Size(1542, 137);
		this->panel2->TabIndex = 14;
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
		// Indexpole
		// 
		this->Indexpole->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->Indexpole->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->Indexpole->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->Indexpole->Location = System::Drawing::Point(180, 459);
		this->Indexpole->MaximumSize = System::Drawing::Size(490, 30);
		this->Indexpole->MinimumSize = System::Drawing::Size(490, 30);
		this->Indexpole->Name = L"Indexpole";
		this->Indexpole->Size = System::Drawing::Size(490, 23);
		this->Indexpole->TabIndex = 35;
		this->Indexpole->TextChanged += gcnew System::EventHandler(this, &DaneUzytkownika::Indexpole_TextChanged);
		// 
		// label7
		// 
		this->label7->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->label7->AutoSize = true;
		this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->label7->Location = System::Drawing::Point(49, 459);
		this->label7->MaximumSize = System::Drawing::Size(300, 300);
		this->label7->MinimumSize = System::Drawing::Size(125, 40);
		this->label7->Name = L"label7";
		this->label7->Size = System::Drawing::Size(125, 40);
		this->label7->TabIndex = 36;
		this->label7->Text = L"Index";
		this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// EmailPole
		// 
		this->EmailPole->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->EmailPole->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->EmailPole->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->EmailPole->Location = System::Drawing::Point(180, 404);
		this->EmailPole->MaximumSize = System::Drawing::Size(490, 30);
		this->EmailPole->MinimumSize = System::Drawing::Size(490, 30);
		this->EmailPole->Name = L"EmailPole";
		this->EmailPole->Size = System::Drawing::Size(490, 23);
		this->EmailPole->TabIndex = 31;
		this->EmailPole->TextChanged += gcnew System::EventHandler(this, &DaneUzytkownika::EmailPole_TextChanged);
		// 
		// NazwiskoPole
		// 
		this->NazwiskoPole->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->NazwiskoPole->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->NazwiskoPole->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->NazwiskoPole->Location = System::Drawing::Point(180, 349);
		this->NazwiskoPole->MaximumSize = System::Drawing::Size(490, 30);
		this->NazwiskoPole->MinimumSize = System::Drawing::Size(490, 30);
		this->NazwiskoPole->Name = L"NazwiskoPole";
		this->NazwiskoPole->Size = System::Drawing::Size(490, 23);
		this->NazwiskoPole->TabIndex = 30;
		this->NazwiskoPole->TextChanged += gcnew System::EventHandler(this, &DaneUzytkownika::NazwiskoPole_TextChanged);
		// 
		// ImiePole
		// 
		this->ImiePole->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->ImiePole->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->ImiePole->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->ImiePole->Location = System::Drawing::Point(180, 294);
		this->ImiePole->MaximumSize = System::Drawing::Size(490, 30);
		this->ImiePole->MinimumSize = System::Drawing::Size(490, 30);
		this->ImiePole->Multiline = true;
		this->ImiePole->Name = L"ImiePole";
		this->ImiePole->Size = System::Drawing::Size(490, 30);
		this->ImiePole->TabIndex = 29;
		this->ImiePole->TextChanged += gcnew System::EventHandler(this, &DaneUzytkownika::ImiePole_TextChanged);
		// 
		// label2
		// 
		this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
		this->label2->AutoSize = true;
		this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->label2->Location = System::Drawing::Point(49, 239);
		this->label2->MaximumSize = System::Drawing::Size(300, 300);
		this->label2->MinimumSize = System::Drawing::Size(125, 40);
		this->label2->Name = L"label2";
		this->label2->Size = System::Drawing::Size(125, 40);
		this->label2->TabIndex = 28;
		this->label2->Text = L"Haslo";
		this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// label1
		// 
		this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
		this->label1->AutoSize = true;
		this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->label1->Location = System::Drawing::Point(49, 184);
		this->label1->MaximumSize = System::Drawing::Size(300, 300);
		this->label1->MinimumSize = System::Drawing::Size(125, 40);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(125, 40);
		this->label1->TabIndex = 27;
		this->label1->Text = L"Login*";
		this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// Haslopole
		// 
		this->Haslopole->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->Haslopole->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->Haslopole->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->Haslopole->Location = System::Drawing::Point(180, 239);
		this->Haslopole->MaximumSize = System::Drawing::Size(490, 30);
		this->Haslopole->MinimumSize = System::Drawing::Size(490, 30);
		this->Haslopole->Multiline = true;
		this->Haslopole->Name = L"Haslopole";
		this->Haslopole->Size = System::Drawing::Size(490, 30);
		this->Haslopole->TabIndex = 26;
		this->Haslopole->TextChanged += gcnew System::EventHandler(this, &DaneUzytkownika::Haslopole_TextChanged);
		// 
		// Loginpole
		// 
		this->Loginpole->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->Loginpole->BackColor = System::Drawing::SystemColors::ScrollBar;
		this->Loginpole->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->Loginpole->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->Loginpole->Location = System::Drawing::Point(180, 184);
		this->Loginpole->MaximumSize = System::Drawing::Size(400, 30);
		this->Loginpole->MinimumSize = System::Drawing::Size(400, 30);
		this->Loginpole->Multiline = true;
		this->Loginpole->Name = L"Loginpole";
		this->Loginpole->Size = System::Drawing::Size(400, 30);
		this->Loginpole->TabIndex = 25;
		this->Loginpole->TextChanged += gcnew System::EventHandler(this, &DaneUzytkownika::Loginpole_TextChanged);
		// 
		// label3
		// 
		this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->label3->AutoSize = true;
		this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->label3->Location = System::Drawing::Point(49, 294);
		this->label3->MaximumSize = System::Drawing::Size(300, 300);
		this->label3->MinimumSize = System::Drawing::Size(125, 40);
		this->label3->Name = L"label3";
		this->label3->Size = System::Drawing::Size(125, 40);
		this->label3->TabIndex = 32;
		this->label3->Text = L"Imie";
		this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// label6
		// 
		this->label6->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->label6->AutoSize = true;
		this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->label6->Location = System::Drawing::Point(49, 349);
		this->label6->MaximumSize = System::Drawing::Size(300, 300);
		this->label6->MinimumSize = System::Drawing::Size(125, 40);
		this->label6->Name = L"label6";
		this->label6->Size = System::Drawing::Size(125, 40);
		this->label6->TabIndex = 33;
		this->label6->Text = L"Nazwisko";
		this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// label8
		// 
		this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->label8->AutoSize = true;
		this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->label8->Location = System::Drawing::Point(49, 404);
		this->label8->MaximumSize = System::Drawing::Size(300, 300);
		this->label8->MinimumSize = System::Drawing::Size(125, 40);
		this->label8->Name = L"label8";
		this->label8->Size = System::Drawing::Size(125, 40);
		this->label8->TabIndex = 34;
		this->label8->Text = L"Email";
		this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// label9
		// 
		this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->label9->AutoSize = true;
		this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->label9->Location = System::Drawing::Point(219, 121);
		this->label9->MaximumSize = System::Drawing::Size(600, 272);
		this->label9->MinimumSize = System::Drawing::Size(150, 50);
		this->label9->Name = L"label9";
		this->label9->Size = System::Drawing::Size(419, 50);
		this->label9->TabIndex = 37;
		this->label9->Text = L"Twoje dane konta E-book PRz";
		this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// label10
		// 
		this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->label10->AutoSize = true;
		this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->label10->Location = System::Drawing::Point(975, 121);
		this->label10->MaximumSize = System::Drawing::Size(600, 272);
		this->label10->MinimumSize = System::Drawing::Size(150, 50);
		this->label10->Name = L"label10";
		this->label10->Size = System::Drawing::Size(357, 50);
		this->label10->TabIndex = 38;
		this->label10->Text = L"Status konta E-book PRz:";
		this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		// 
		// label11
		// 
		this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
		this->label11->AutoSize = true;
		this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->label11->Location = System::Drawing::Point(12, 520);
		this->label11->MaximumSize = System::Drawing::Size(600, 272);
		this->label11->MinimumSize = System::Drawing::Size(800, 150);
		this->label11->Name = L"label11";
		this->label11->Size = System::Drawing::Size(800, 162);
		this->label11->TabIndex = 40;
		this->label11->Text = resources->GetString(L"label11.Text");
		// 
		// webBrowser1
		// 
		this->webBrowser1->Location = System::Drawing::Point(832, 220);
		this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
		this->webBrowser1->Name = L"webBrowser1";
		this->webBrowser1->Size = System::Drawing::Size(604, 415);
		this->webBrowser1->TabIndex = 41;
		this->webBrowser1->Url = (gcnew System::Uri(L"https://sklep.prz.edu.pl/", System::UriKind::Absolute));
		// 
		// Wyswietldane
		// 
		this->Wyswietldane->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->Wyswietldane->Location = System::Drawing::Point(832, 663);
		this->Wyswietldane->Name = L"Wyswietldane";
		this->Wyswietldane->Size = System::Drawing::Size(264, 51);
		this->Wyswietldane->TabIndex = 42;
		this->Wyswietldane->TabStop = false;
		this->Wyswietldane->Text = L"Wyœwietl dane u¿ytkownika";
		this->Wyswietldane->UseVisualStyleBackColor = true;
		this->Wyswietldane->Click += gcnew System::EventHandler(this, &DaneUzytkownika::Wyswietldane_Click);
		// 
		// label12
		// 
		this->label12->AutoSize = true;
		this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->label12->ForeColor = System::Drawing::Color::SlateGray;
		this->label12->Location = System::Drawing::Point(1026, 171);
		this->label12->MinimumSize = System::Drawing::Size(250, 30);
		this->label12->Name = L"label12";
		this->label12->Size = System::Drawing::Size(250, 30);
		this->label12->TabIndex = 43;
		this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
		this->label12->Click += gcnew System::EventHandler(this, &DaneUzytkownika::label12_Click);
		// 
		// button1
		// 
		this->button1->BackColor = System::Drawing::SystemColors::ScrollBar;
		this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
		this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
		this->button1->ForeColor = System::Drawing::SystemColors::InactiveBorder;
		this->button1->Location = System::Drawing::Point(586, 184);
		this->button1->Name = L"button1";
		this->button1->Size = System::Drawing::Size(84, 30);
		this->button1->TabIndex = 44;
		this->button1->Text = L"Info*";
		this->button1->UseVisualStyleBackColor = false;
		this->button1->Click += gcnew System::EventHandler(this, &DaneUzytkownika::button1_Click);
		// 
		// button2
		// 
		this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(238)));
		this->button2->Location = System::Drawing::Point(1102, 663);
		this->button2->Name = L"button2";
		this->button2->Size = System::Drawing::Size(143, 51);
		this->button2->TabIndex = 45;
		this->button2->TabStop = false;
		this->button2->Text = L"Usuñ konto";
		this->button2->UseVisualStyleBackColor = true;
		this->button2->Click += gcnew System::EventHandler(this, &DaneUzytkownika::button2_Click);
		// 
		// DaneUzytkownika
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(1441, 775);
		this->ControlBox = false;
		this->Controls->Add(this->button2);
		this->Controls->Add(this->button1);
		this->Controls->Add(this->label12);
		this->Controls->Add(this->Wyswietldane);
		this->Controls->Add(this->webBrowser1);
		this->Controls->Add(this->label11);
		this->Controls->Add(this->label10);
		this->Controls->Add(this->label9);
		this->Controls->Add(this->Indexpole);
		this->Controls->Add(this->panel2);
		this->Controls->Add(this->label7);
		this->Controls->Add(this->EmailPole);
		this->Controls->Add(this->Save);
		this->Controls->Add(this->NazwiskoPole);
		this->Controls->Add(this->Cancel);
		this->Controls->Add(this->ImiePole);
		this->Controls->Add(this->panel1);
		this->Controls->Add(this->label2);
		this->Controls->Add(this->label8);
		this->Controls->Add(this->label1);
		this->Controls->Add(this->label6);
		this->Controls->Add(this->Haslopole);
		this->Controls->Add(this->label3);
		this->Controls->Add(this->Loginpole);
		this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
		this->Name = L"DaneUzytkownika";
		this->ShowIcon = false;
		this->ShowInTaskbar = false;
		this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		this->Load += gcnew System::EventHandler(this, &DaneUzytkownika::DaneUzytkownika_Load);
		this->panel1->ResumeLayout(false);
		this->panel2->ResumeLayout(false);
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
		this->ResumeLayout(false);
		this->PerformLayout();

	}
	
	//////////////////////////////////////////////		METODY		//////////////////////////////////////////

	System::Void DaneUzytkownika::Cancel_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Czy na pewno chcesz wyjœæ?", "Potwierdzenie", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			this->Close(); // Jeœli u¿ytkownik wybierze "Tak", zamknij okno
		}
	}

	System::Void DaneUzytkownika::Save_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ login = Loginpole->Text;	//przypisanie do pól tekstowych
		String^ haslo = Haslopole->Text;
		String^ imie = ImiePole->Text;
		String^ nazwisko = NazwiskoPole->Text;
		String^ email = EmailPole->Text;
		String^ nrIndeksu = Indexpole->Text;

		// Konwersja typu System::String^ na std::string
		std::string str_login = msclr::interop::marshal_as<std::string>(login);
		std::string str_haslo = msclr::interop::marshal_as<std::string>(haslo);
		std::string str_imie = msclr::interop::marshal_as<std::string>(imie);
		std::string str_nazwisko = msclr::interop::marshal_as<std::string>(nazwisko);
		std::string str_email = msclr::interop::marshal_as<std::string>(email);
		std::string str_nrIndeksu = msclr::interop::marshal_as<std::string>(nrIndeksu);

		// Sprawdzenie, czy nowy login ju¿ istnieje w bazie danych
		auto userData = Database::GetRegistrations();

		// Wywo³anie metody UpdateUserData z klasy Database
		bool success = KalkulatorBD::Database::UpdateUserData(str_login, str_haslo, str_imie, str_nazwisko, str_email, str_nrIndeksu);

		if (success) {
			MessageBox::Show("Dane zosta³y pomyœlnie zapisane.", "Sukces", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Wyst¹pi³ b³¹d podczas zapisywania danych.", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	
	//pole login tekstowe(wyznaczanie po loginu dane u¿ytkownika i wyœwietlanie ich w menu danych)
	System::Void DaneUzytkownika::Loginpole_TextChanged(System::Object^ sender, System::EventArgs^ e) {

		newLoggedInUser = Login::loggedInUser; 		// Przypisanie wartoœci loggedInUser do newLoggedInUser
		this->Loginpole->ReadOnly = false;

		// Konwersja System::String na std::string
		std::string convertedLogin;
		{
			const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(newLoggedInUser)).ToPointer();
			convertedLogin = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}

		// pobieranie danych dla zalogowanego u¿ytkownika
		auto userData = Database::GetRegistrations();


		// Przeszukaj wektor userData, aby znaleŸæ dane dla zalogowanego u¿ytkownika
		for (auto data : userData) {
			std::string login = std::get<0>(data);
			std::string haslo = std::get<1>(data);
			std::string imie = std::get<2>(data);
			std::string nazwisko = std::get<3>(data);
			std::string email = std::get<4>(data);
			std::string nrIndeksu = std::get<5>(data);

			if (login == convertedLogin) {
				// Znaleziono dane dla zalogowanego u¿ytkownika, wyœwietl je w polach tekstowych
				this->ImiePole->Text = gcnew String(imie.c_str());
				this->NazwiskoPole->Text = gcnew String(nazwisko.c_str());
				this->EmailPole->Text = gcnew String(email.c_str());
				this->Indexpole->Text = gcnew String(nrIndeksu.c_str());
				this->Haslopole->Text = gcnew String(haslo.c_str());
				this->Loginpole->Text = gcnew String(login.c_str());
				// Aktualizacja statusu konta (w zale¿noœci czy posiada index studenta)
				if (String::IsNullOrEmpty(Indexpole->Text)) {
					this->label12->Text = "goœæ";
				}
				else {
					this->label12->Text = "student";
				}
				break; // Przerwij pêtlê, gdy dane zostan¹ znalezione
			}
		}

	}

	// Metoda obs³uguj¹ca klikniêcie przycisku Wyœwietldane (wywolujemy metode z danymi pobranymi z bazy danych)
	System::Void DaneUzytkownika::Wyswietldane_Click(System::Object^ sender, System::EventArgs^ e) {
		Loginpole_TextChanged(sender, e);
	}

	//info login nie zmienny
	System::Void DaneUzytkownika::button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Login nie mo¿na zmieniæ!", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	//Usuñ konto przycisk
	System::Void DaneUzytkownika::button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// Pobierz login aktualnie zalogowanego u¿ytkownika
		String^ login = Loginpole->Text;

		// PotwierdŸ, czy u¿ytkownik na pewno chce usun¹æ konto
		if (MessageBox::Show("Czy na pewno chcesz usun¹æ swoje konto?", "Potwierdzenie", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			// Konwersja loginu na std::string
			std::string str_login = msclr::interop::marshal_as<std::string>(login);

			// Utwórz obiekt klasy Database
			KalkulatorBD::Database db;

			// Wywo³aj metodê usuwania konta z bazy danych
			bool success = db.DeleteUser(str_login);

			if (success) {
				MessageBox::Show("Twoje konto zosta³o pomyœlnie usuniête.", "Sukces", MessageBoxButtons::OK, MessageBoxIcon::Information);

				// Wyczyœæ pola tekstowe
				Loginpole->Text = "";
				Haslopole->Text = "";
				ImiePole->Text = "";
				NazwiskoPole->Text = "";
				EmailPole->Text = "";
				Indexpole->Text = "";
				// Zablokuj edycjê pól tekstowych
				Loginpole->ReadOnly = true;
				Haslopole->ReadOnly = true;
				ImiePole->ReadOnly = true;
				NazwiskoPole->ReadOnly = true;
				EmailPole->ReadOnly = true;
				Indexpole->ReadOnly = true;
				// Zaktualizuj status konta
				label12->Text = "goœæ";

				// Zamknij formularz lub wykonaj inne czynnoœci zwi¹zane z usuniêciem konta
			}
			else {
				MessageBox::Show("Wyst¹pi³ b³¹d podczas usuwania konta.", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}


	System::Void DaneUzytkownika::LoginLabel_Click(System::Object^ sender, System::EventArgs^ e) {}
	System::Void DaneUzytkownika::Haslopole_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	System::Void DaneUzytkownika::ImiePole_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	System::Void DaneUzytkownika::NazwiskoPole_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	System::Void DaneUzytkownika::EmailPole_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	System::Void DaneUzytkownika::Indexpole_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
	System::Void DaneUzytkownika::label12_Click(System::Object^ sender, System::EventArgs^ e) {}

}
