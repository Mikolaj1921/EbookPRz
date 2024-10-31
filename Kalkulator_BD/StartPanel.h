#include "Login.h"

namespace KalkulatorBD {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class StartPanel : public System::Windows::Forms::Form {
    public:
        StartPanel(void);

    protected:
        ~StartPanel();
    private:

        Panel^ topPanel;
        Panel^ bottomPanel;
        Panel^ leftPanel;
        Panel^ rightPanel;
        System::ComponentModel::IContainer^ components;
        System::Windows::Forms::Panel^ panel1;
        System::Windows::Forms::Button^ Rozpocznij;
        System::Windows::Forms::PictureBox^ LogikaITeoria;
        System::Windows::Forms::PictureBox^ pictureBox3;
        System::Windows::Forms::PictureBox^ pictureBox4;
        System::Windows::Forms::Panel^ panel2;
        System::Windows::Forms::WebBrowser^ webBrowser1;
        System::Windows::Forms::PictureBox^ pictureBox2;
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::PictureBox^ pictureBox5;
        System::Windows::Forms::Label^ label4;
        System::Windows::Forms::Label^ label5;
        System::Windows::Forms::Button^ button1;
        System::Windows::Forms::PictureBox^ pictureBox1;

        PictureBox^ logoPictureBox;

        void InitializeComponent();

        System::Void StartPanel_Load(System::Object^ sender, System::EventArgs^ e);
        System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {}
        System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
        System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {}
        System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {}
        System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e);
        System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e);
        System::Void webBrowser1_DocumentCompleted(System::Object^ sender, System::Windows::Forms::WebBrowserDocumentCompletedEventArgs^ e) {}
    };
}

