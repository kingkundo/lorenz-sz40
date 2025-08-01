#pragma once

static bool exitFlag = false;
std::string configuration;


namespace LorenzSZ40 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{

	public:

		Form1()
		{
			InitializeComponent();

		}

	protected:
	
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{

			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^  encryptButton;

	protected: 


	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox2;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox3;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox4;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox5;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox6;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox7;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox8;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox9;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox10;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox11;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox12;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox13;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox14;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox15;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox16;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox17;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox18;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox19;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox20;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox21;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox22;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox23;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox24;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox25;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox26;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox27;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox28;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox29;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox30;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox31;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox32;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox33;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox34;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox35;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox36;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox37;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox38;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox39;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox40;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox41;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox42;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox43;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox44;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox45;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox46;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox47;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox48;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::RichTextBox^  richTextBox3;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Button^  button5;






	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox54;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox55;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox56;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox57;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox58;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox53;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox51;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox52;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox50;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox49;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox59;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox60;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label27;

	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;





	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown13;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox61;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox62;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox63;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox64;

	private: System::ComponentModel::IContainer^  components;
	protected: 
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->encryptButton = (gcnew System::Windows::Forms::Button());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox5 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox6 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox7 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox8 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox9 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox10 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox11 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox12 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox13 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox14 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox15 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox16 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox17 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox18 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox19 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox20 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox21 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox22 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox23 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox24 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox25 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox26 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox27 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox28 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox29 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox30 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox31 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox32 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox33 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox34 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox35 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox36 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox37 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox38 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox39 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox40 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox41 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox42 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox43 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox44 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox45 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox46 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox47 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox48 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->maskedTextBox59 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox60 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox54 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox55 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox56 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox57 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox58 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox53 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox51 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox52 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox50 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox49 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown9 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown10 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown11 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown12 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown13 = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->maskedTextBox61 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox62 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox63 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox64 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown13))->BeginInit();
			this->SuspendLayout();
			// 
			// encryptButton
			// 
			this->encryptButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->encryptButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->encryptButton->Location = System::Drawing::Point(3, 632);
			this->encryptButton->Name = L"encryptButton";
			this->encryptButton->Size = System::Drawing::Size(1257, 47);
			this->encryptButton->TabIndex = 1;
			this->encryptButton->Text = L"Encrypt / Decrypt";
			this->encryptButton->UseVisualStyleBackColor = true;
			this->encryptButton->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->maskedTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBox1->ForeColor = System::Drawing::Color::Red;
			this->maskedTextBox1->Location = System::Drawing::Point(12, 27);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->ReadOnly = true;
			this->maskedTextBox1->Size = System::Drawing::Size(95, 49);
			this->maskedTextBox1->TabIndex = 7;
			this->maskedTextBox1->Text = L"Ψ1";
			this->maskedTextBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->maskedTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBox2->ForeColor = System::Drawing::Color::Red;
			this->maskedTextBox2->Location = System::Drawing::Point(106, 27);
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->ReadOnly = true;
			this->maskedTextBox2->Size = System::Drawing::Size(95, 49);
			this->maskedTextBox2->TabIndex = 8;
			this->maskedTextBox2->Text = L"Ψ2";
			this->maskedTextBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox3
			// 
			this->maskedTextBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->maskedTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBox3->ForeColor = System::Drawing::Color::Red;
			this->maskedTextBox3->Location = System::Drawing::Point(200, 27);
			this->maskedTextBox3->Name = L"maskedTextBox3";
			this->maskedTextBox3->ReadOnly = true;
			this->maskedTextBox3->Size = System::Drawing::Size(95, 49);
			this->maskedTextBox3->TabIndex = 9;
			this->maskedTextBox3->Text = L"Ψ3";
			this->maskedTextBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox4
			// 
			this->maskedTextBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->maskedTextBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBox4->ForeColor = System::Drawing::Color::Red;
			this->maskedTextBox4->Location = System::Drawing::Point(294, 27);
			this->maskedTextBox4->Name = L"maskedTextBox4";
			this->maskedTextBox4->ReadOnly = true;
			this->maskedTextBox4->Size = System::Drawing::Size(90, 49);
			this->maskedTextBox4->TabIndex = 10;
			this->maskedTextBox4->Text = L"Ψ4";
			this->maskedTextBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox5
			// 
			this->maskedTextBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox5->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->maskedTextBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBox5->ForeColor = System::Drawing::Color::Red;
			this->maskedTextBox5->Location = System::Drawing::Point(383, 27);
			this->maskedTextBox5->Name = L"maskedTextBox5";
			this->maskedTextBox5->ReadOnly = true;
			this->maskedTextBox5->Size = System::Drawing::Size(90, 49);
			this->maskedTextBox5->TabIndex = 11;
			this->maskedTextBox5->Text = L"Ψ5";
			this->maskedTextBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox6
			// 
			this->maskedTextBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox6->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->maskedTextBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBox6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->maskedTextBox6->Location = System::Drawing::Point(1158, 27);
			this->maskedTextBox6->Name = L"maskedTextBox6";
			this->maskedTextBox6->ReadOnly = true;
			this->maskedTextBox6->Size = System::Drawing::Size(95, 49);
			this->maskedTextBox6->TabIndex = 16;
			this->maskedTextBox6->Text = L"Χ5";
			this->maskedTextBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox7
			// 
			this->maskedTextBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox7->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->maskedTextBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBox7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->maskedTextBox7->Location = System::Drawing::Point(1064, 27);
			this->maskedTextBox7->Name = L"maskedTextBox7";
			this->maskedTextBox7->ReadOnly = true;
			this->maskedTextBox7->Size = System::Drawing::Size(95, 49);
			this->maskedTextBox7->TabIndex = 15;
			this->maskedTextBox7->Text = L"Χ4";
			this->maskedTextBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox8
			// 
			this->maskedTextBox8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox8->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->maskedTextBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBox8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->maskedTextBox8->Location = System::Drawing::Point(970, 27);
			this->maskedTextBox8->Name = L"maskedTextBox8";
			this->maskedTextBox8->ReadOnly = true;
			this->maskedTextBox8->Size = System::Drawing::Size(95, 49);
			this->maskedTextBox8->TabIndex = 14;
			this->maskedTextBox8->Text = L"Χ3";
			this->maskedTextBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox9
			// 
			this->maskedTextBox9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox9->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->maskedTextBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBox9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->maskedTextBox9->Location = System::Drawing::Point(876, 27);
			this->maskedTextBox9->Name = L"maskedTextBox9";
			this->maskedTextBox9->ReadOnly = true;
			this->maskedTextBox9->Size = System::Drawing::Size(95, 49);
			this->maskedTextBox9->TabIndex = 13;
			this->maskedTextBox9->Text = L"Χ2";
			this->maskedTextBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox10
			// 
			this->maskedTextBox10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox10->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->maskedTextBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->maskedTextBox10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->maskedTextBox10->Location = System::Drawing::Point(782, 27);
			this->maskedTextBox10->Name = L"maskedTextBox10";
			this->maskedTextBox10->ReadOnly = true;
			this->maskedTextBox10->Size = System::Drawing::Size(95, 49);
			this->maskedTextBox10->TabIndex = 12;
			this->maskedTextBox10->Text = L"Χ1";
			this->maskedTextBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox11
			// 
			this->maskedTextBox11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox11->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->maskedTextBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->maskedTextBox11->Location = System::Drawing::Point(549, 27);
			this->maskedTextBox11->Name = L"maskedTextBox11";
			this->maskedTextBox11->ReadOnly = true;
			this->maskedTextBox11->Size = System::Drawing::Size(80, 49);
			this->maskedTextBox11->TabIndex = 17;
			this->maskedTextBox11->Text = L"M37";
			this->maskedTextBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox12
			// 
			this->maskedTextBox12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox12->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->maskedTextBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->maskedTextBox12->Location = System::Drawing::Point(628, 27);
			this->maskedTextBox12->Name = L"maskedTextBox12";
			this->maskedTextBox12->ReadOnly = true;
			this->maskedTextBox12->Size = System::Drawing::Size(80, 49);
			this->maskedTextBox12->TabIndex = 18;
			this->maskedTextBox12->Text = L"M61";
			this->maskedTextBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox13
			// 
			this->maskedTextBox13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox13->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox13->Location = System::Drawing::Point(383, 77);
			this->maskedTextBox13->Name = L"maskedTextBox13";
			this->maskedTextBox13->ReadOnly = true;
			this->maskedTextBox13->Size = System::Drawing::Size(90, 60);
			this->maskedTextBox13->TabIndex = 23;
			this->maskedTextBox13->Text = L"0";
			this->maskedTextBox13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox14
			// 
			this->maskedTextBox14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox14->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox14->Location = System::Drawing::Point(294, 77);
			this->maskedTextBox14->Name = L"maskedTextBox14";
			this->maskedTextBox14->ReadOnly = true;
			this->maskedTextBox14->Size = System::Drawing::Size(90, 60);
			this->maskedTextBox14->TabIndex = 22;
			this->maskedTextBox14->Text = L"0";
			this->maskedTextBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox15
			// 
			this->maskedTextBox15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox15->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox15->Location = System::Drawing::Point(200, 77);
			this->maskedTextBox15->Name = L"maskedTextBox15";
			this->maskedTextBox15->ReadOnly = true;
			this->maskedTextBox15->Size = System::Drawing::Size(95, 60);
			this->maskedTextBox15->TabIndex = 21;
			this->maskedTextBox15->Text = L"0";
			this->maskedTextBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox16
			// 
			this->maskedTextBox16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox16->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox16->Location = System::Drawing::Point(106, 77);
			this->maskedTextBox16->Name = L"maskedTextBox16";
			this->maskedTextBox16->ReadOnly = true;
			this->maskedTextBox16->Size = System::Drawing::Size(95, 60);
			this->maskedTextBox16->TabIndex = 20;
			this->maskedTextBox16->Text = L"0";
			this->maskedTextBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox17
			// 
			this->maskedTextBox17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox17->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox17->Location = System::Drawing::Point(12, 77);
			this->maskedTextBox17->Name = L"maskedTextBox17";
			this->maskedTextBox17->ReadOnly = true;
			this->maskedTextBox17->Size = System::Drawing::Size(95, 60);
			this->maskedTextBox17->TabIndex = 19;
			this->maskedTextBox17->Text = L"0";
			this->maskedTextBox17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox18
			// 
			this->maskedTextBox18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox18->BackColor = System::Drawing::Color::Black;
			this->maskedTextBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox18->ForeColor = System::Drawing::Color::Lime;
			this->maskedTextBox18->Location = System::Drawing::Point(383, 142);
			this->maskedTextBox18->Name = L"maskedTextBox18";
			this->maskedTextBox18->ReadOnly = true;
			this->maskedTextBox18->Size = System::Drawing::Size(90, 60);
			this->maskedTextBox18->TabIndex = 28;
			this->maskedTextBox18->Text = L"0";
			this->maskedTextBox18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox19
			// 
			this->maskedTextBox19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox19->BackColor = System::Drawing::Color::Black;
			this->maskedTextBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox19->ForeColor = System::Drawing::Color::Lime;
			this->maskedTextBox19->Location = System::Drawing::Point(294, 142);
			this->maskedTextBox19->Name = L"maskedTextBox19";
			this->maskedTextBox19->ReadOnly = true;
			this->maskedTextBox19->Size = System::Drawing::Size(90, 60);
			this->maskedTextBox19->TabIndex = 27;
			this->maskedTextBox19->Text = L"0";
			this->maskedTextBox19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox20
			// 
			this->maskedTextBox20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox20->BackColor = System::Drawing::Color::Black;
			this->maskedTextBox20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox20->ForeColor = System::Drawing::Color::Lime;
			this->maskedTextBox20->Location = System::Drawing::Point(200, 142);
			this->maskedTextBox20->Name = L"maskedTextBox20";
			this->maskedTextBox20->ReadOnly = true;
			this->maskedTextBox20->Size = System::Drawing::Size(95, 60);
			this->maskedTextBox20->TabIndex = 26;
			this->maskedTextBox20->Text = L"0";
			this->maskedTextBox20->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox21
			// 
			this->maskedTextBox21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox21->BackColor = System::Drawing::Color::Black;
			this->maskedTextBox21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox21->ForeColor = System::Drawing::Color::Lime;
			this->maskedTextBox21->Location = System::Drawing::Point(106, 142);
			this->maskedTextBox21->Name = L"maskedTextBox21";
			this->maskedTextBox21->ReadOnly = true;
			this->maskedTextBox21->Size = System::Drawing::Size(95, 60);
			this->maskedTextBox21->TabIndex = 25;
			this->maskedTextBox21->Text = L"0";
			this->maskedTextBox21->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox22
			// 
			this->maskedTextBox22->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox22->BackColor = System::Drawing::Color::Black;
			this->maskedTextBox22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox22->ForeColor = System::Drawing::Color::Lime;
			this->maskedTextBox22->Location = System::Drawing::Point(12, 142);
			this->maskedTextBox22->Name = L"maskedTextBox22";
			this->maskedTextBox22->ReadOnly = true;
			this->maskedTextBox22->Size = System::Drawing::Size(95, 60);
			this->maskedTextBox22->TabIndex = 24;
			this->maskedTextBox22->Text = L"0";
			this->maskedTextBox22->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox23
			// 
			this->maskedTextBox23->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox23->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox23->Location = System::Drawing::Point(383, 207);
			this->maskedTextBox23->Name = L"maskedTextBox23";
			this->maskedTextBox23->ReadOnly = true;
			this->maskedTextBox23->Size = System::Drawing::Size(90, 60);
			this->maskedTextBox23->TabIndex = 33;
			this->maskedTextBox23->Text = L"0";
			this->maskedTextBox23->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox24
			// 
			this->maskedTextBox24->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox24->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox24->Location = System::Drawing::Point(294, 207);
			this->maskedTextBox24->Name = L"maskedTextBox24";
			this->maskedTextBox24->ReadOnly = true;
			this->maskedTextBox24->Size = System::Drawing::Size(90, 60);
			this->maskedTextBox24->TabIndex = 32;
			this->maskedTextBox24->Text = L"0";
			this->maskedTextBox24->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox25
			// 
			this->maskedTextBox25->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox25->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox25->Location = System::Drawing::Point(200, 207);
			this->maskedTextBox25->Name = L"maskedTextBox25";
			this->maskedTextBox25->ReadOnly = true;
			this->maskedTextBox25->Size = System::Drawing::Size(95, 60);
			this->maskedTextBox25->TabIndex = 31;
			this->maskedTextBox25->Text = L"0";
			this->maskedTextBox25->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox26
			// 
			this->maskedTextBox26->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox26->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox26->Location = System::Drawing::Point(106, 207);
			this->maskedTextBox26->Name = L"maskedTextBox26";
			this->maskedTextBox26->ReadOnly = true;
			this->maskedTextBox26->Size = System::Drawing::Size(95, 60);
			this->maskedTextBox26->TabIndex = 30;
			this->maskedTextBox26->Text = L"0";
			this->maskedTextBox26->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox27
			// 
			this->maskedTextBox27->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox27->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox27->Location = System::Drawing::Point(12, 207);
			this->maskedTextBox27->Name = L"maskedTextBox27";
			this->maskedTextBox27->ReadOnly = true;
			this->maskedTextBox27->Size = System::Drawing::Size(95, 60);
			this->maskedTextBox27->TabIndex = 29;
			this->maskedTextBox27->Text = L"0";
			this->maskedTextBox27->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox28
			// 
			this->maskedTextBox28->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox28->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox28->Location = System::Drawing::Point(628, 77);
			this->maskedTextBox28->Name = L"maskedTextBox28";
			this->maskedTextBox28->ReadOnly = true;
			this->maskedTextBox28->Size = System::Drawing::Size(80, 60);
			this->maskedTextBox28->TabIndex = 35;
			this->maskedTextBox28->Text = L"0";
			this->maskedTextBox28->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox29
			// 
			this->maskedTextBox29->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox29->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox29->Location = System::Drawing::Point(549, 77);
			this->maskedTextBox29->Name = L"maskedTextBox29";
			this->maskedTextBox29->ReadOnly = true;
			this->maskedTextBox29->Size = System::Drawing::Size(80, 60);
			this->maskedTextBox29->TabIndex = 34;
			this->maskedTextBox29->Text = L"0";
			this->maskedTextBox29->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox30
			// 
			this->maskedTextBox30->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox30->BackColor = System::Drawing::Color::Black;
			this->maskedTextBox30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox30->ForeColor = System::Drawing::Color::Lime;
			this->maskedTextBox30->Location = System::Drawing::Point(628, 142);
			this->maskedTextBox30->Name = L"maskedTextBox30";
			this->maskedTextBox30->ReadOnly = true;
			this->maskedTextBox30->Size = System::Drawing::Size(80, 60);
			this->maskedTextBox30->TabIndex = 37;
			this->maskedTextBox30->Text = L"0";
			this->maskedTextBox30->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox31
			// 
			this->maskedTextBox31->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox31->BackColor = System::Drawing::Color::Black;
			this->maskedTextBox31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox31->ForeColor = System::Drawing::Color::Lime;
			this->maskedTextBox31->Location = System::Drawing::Point(549, 142);
			this->maskedTextBox31->Name = L"maskedTextBox31";
			this->maskedTextBox31->ReadOnly = true;
			this->maskedTextBox31->Size = System::Drawing::Size(80, 60);
			this->maskedTextBox31->TabIndex = 36;
			this->maskedTextBox31->Text = L"0";
			this->maskedTextBox31->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox32
			// 
			this->maskedTextBox32->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox32->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox32->Location = System::Drawing::Point(628, 207);
			this->maskedTextBox32->Name = L"maskedTextBox32";
			this->maskedTextBox32->ReadOnly = true;
			this->maskedTextBox32->Size = System::Drawing::Size(80, 60);
			this->maskedTextBox32->TabIndex = 39;
			this->maskedTextBox32->Text = L"0";
			this->maskedTextBox32->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox33
			// 
			this->maskedTextBox33->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox33->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox33->Location = System::Drawing::Point(549, 207);
			this->maskedTextBox33->Name = L"maskedTextBox33";
			this->maskedTextBox33->ReadOnly = true;
			this->maskedTextBox33->Size = System::Drawing::Size(80, 60);
			this->maskedTextBox33->TabIndex = 38;
			this->maskedTextBox33->Text = L"0";
			this->maskedTextBox33->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox34
			// 
			this->maskedTextBox34->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox34->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox34->Location = System::Drawing::Point(1158, 77);
			this->maskedTextBox34->Name = L"maskedTextBox34";
			this->maskedTextBox34->ReadOnly = true;
			this->maskedTextBox34->Size = System::Drawing::Size(95, 60);
			this->maskedTextBox34->TabIndex = 44;
			this->maskedTextBox34->Text = L"0";
			this->maskedTextBox34->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox35
			// 
			this->maskedTextBox35->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox35->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox35->Location = System::Drawing::Point(1064, 77);
			this->maskedTextBox35->Name = L"maskedTextBox35";
			this->maskedTextBox35->ReadOnly = true;
			this->maskedTextBox35->Size = System::Drawing::Size(95, 60);
			this->maskedTextBox35->TabIndex = 43;
			this->maskedTextBox35->Text = L"0";
			this->maskedTextBox35->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox36
			// 
			this->maskedTextBox36->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox36->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox36->Location = System::Drawing::Point(970, 77);
			this->maskedTextBox36->Name = L"maskedTextBox36";
			this->maskedTextBox36->ReadOnly = true;
			this->maskedTextBox36->Size = System::Drawing::Size(95, 60);
			this->maskedTextBox36->TabIndex = 42;
			this->maskedTextBox36->Text = L"0";
			this->maskedTextBox36->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox37
			// 
			this->maskedTextBox37->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox37->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox37->Location = System::Drawing::Point(876, 77);
			this->maskedTextBox37->Name = L"maskedTextBox37";
			this->maskedTextBox37->ReadOnly = true;
			this->maskedTextBox37->Size = System::Drawing::Size(95, 60);
			this->maskedTextBox37->TabIndex = 41;
			this->maskedTextBox37->Text = L"0";
			this->maskedTextBox37->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox38
			// 
			this->maskedTextBox38->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox38->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox38->Location = System::Drawing::Point(782, 77);
			this->maskedTextBox38->Name = L"maskedTextBox38";
			this->maskedTextBox38->ReadOnly = true;
			this->maskedTextBox38->Size = System::Drawing::Size(95, 60);
			this->maskedTextBox38->TabIndex = 40;
			this->maskedTextBox38->Text = L"0";
			this->maskedTextBox38->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox39
			// 
			this->maskedTextBox39->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox39->BackColor = System::Drawing::Color::Black;
			this->maskedTextBox39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox39->ForeColor = System::Drawing::Color::Lime;
			this->maskedTextBox39->Location = System::Drawing::Point(1158, 142);
			this->maskedTextBox39->Name = L"maskedTextBox39";
			this->maskedTextBox39->ReadOnly = true;
			this->maskedTextBox39->Size = System::Drawing::Size(95, 60);
			this->maskedTextBox39->TabIndex = 49;
			this->maskedTextBox39->Text = L"0";
			this->maskedTextBox39->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox40
			// 
			this->maskedTextBox40->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox40->BackColor = System::Drawing::Color::Black;
			this->maskedTextBox40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox40->ForeColor = System::Drawing::Color::Lime;
			this->maskedTextBox40->Location = System::Drawing::Point(1064, 142);
			this->maskedTextBox40->Name = L"maskedTextBox40";
			this->maskedTextBox40->ReadOnly = true;
			this->maskedTextBox40->Size = System::Drawing::Size(95, 60);
			this->maskedTextBox40->TabIndex = 48;
			this->maskedTextBox40->Text = L"0";
			this->maskedTextBox40->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox41
			// 
			this->maskedTextBox41->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox41->BackColor = System::Drawing::Color::Black;
			this->maskedTextBox41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox41->ForeColor = System::Drawing::Color::Lime;
			this->maskedTextBox41->Location = System::Drawing::Point(970, 142);
			this->maskedTextBox41->Name = L"maskedTextBox41";
			this->maskedTextBox41->ReadOnly = true;
			this->maskedTextBox41->Size = System::Drawing::Size(95, 60);
			this->maskedTextBox41->TabIndex = 47;
			this->maskedTextBox41->Text = L"0";
			this->maskedTextBox41->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox42
			// 
			this->maskedTextBox42->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox42->BackColor = System::Drawing::Color::Black;
			this->maskedTextBox42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox42->ForeColor = System::Drawing::Color::Lime;
			this->maskedTextBox42->Location = System::Drawing::Point(876, 142);
			this->maskedTextBox42->Name = L"maskedTextBox42";
			this->maskedTextBox42->ReadOnly = true;
			this->maskedTextBox42->Size = System::Drawing::Size(95, 60);
			this->maskedTextBox42->TabIndex = 46;
			this->maskedTextBox42->Text = L"0";
			this->maskedTextBox42->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox43
			// 
			this->maskedTextBox43->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox43->BackColor = System::Drawing::Color::Black;
			this->maskedTextBox43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox43->ForeColor = System::Drawing::Color::Lime;
			this->maskedTextBox43->Location = System::Drawing::Point(782, 142);
			this->maskedTextBox43->Name = L"maskedTextBox43";
			this->maskedTextBox43->ReadOnly = true;
			this->maskedTextBox43->Size = System::Drawing::Size(95, 60);
			this->maskedTextBox43->TabIndex = 45;
			this->maskedTextBox43->Text = L"0";
			this->maskedTextBox43->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox44
			// 
			this->maskedTextBox44->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox44->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox44->Location = System::Drawing::Point(1158, 207);
			this->maskedTextBox44->Name = L"maskedTextBox44";
			this->maskedTextBox44->ReadOnly = true;
			this->maskedTextBox44->Size = System::Drawing::Size(95, 60);
			this->maskedTextBox44->TabIndex = 54;
			this->maskedTextBox44->Text = L"0";
			this->maskedTextBox44->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox45
			// 
			this->maskedTextBox45->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox45->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox45->Location = System::Drawing::Point(1064, 207);
			this->maskedTextBox45->Name = L"maskedTextBox45";
			this->maskedTextBox45->ReadOnly = true;
			this->maskedTextBox45->Size = System::Drawing::Size(95, 60);
			this->maskedTextBox45->TabIndex = 53;
			this->maskedTextBox45->Text = L"0";
			this->maskedTextBox45->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox46
			// 
			this->maskedTextBox46->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox46->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox46->Location = System::Drawing::Point(970, 207);
			this->maskedTextBox46->Name = L"maskedTextBox46";
			this->maskedTextBox46->ReadOnly = true;
			this->maskedTextBox46->Size = System::Drawing::Size(95, 60);
			this->maskedTextBox46->TabIndex = 52;
			this->maskedTextBox46->Text = L"0";
			this->maskedTextBox46->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox47
			// 
			this->maskedTextBox47->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox47->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox47->Location = System::Drawing::Point(876, 207);
			this->maskedTextBox47->Name = L"maskedTextBox47";
			this->maskedTextBox47->ReadOnly = true;
			this->maskedTextBox47->Size = System::Drawing::Size(95, 60);
			this->maskedTextBox47->TabIndex = 51;
			this->maskedTextBox47->Text = L"0";
			this->maskedTextBox47->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox48
			// 
			this->maskedTextBox48->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox48->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35));
			this->maskedTextBox48->Location = System::Drawing::Point(782, 207);
			this->maskedTextBox48->Name = L"maskedTextBox48";
			this->maskedTextBox48->ReadOnly = true;
			this->maskedTextBox48->Size = System::Drawing::Size(95, 60);
			this->maskedTextBox48->TabIndex = 50;
			this->maskedTextBox48->Text = L"0";
			this->maskedTextBox48->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(0, -1);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(249, 280);
			this->textBox1->TabIndex = 56;
			// 
			// linkLabel1
			// 
			this->linkLabel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::Navy;
			this->linkLabel1->Location = System::Drawing::Point(257, 200);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(93, 13);
			this->linkLabel1->TabIndex = 59;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Tom Taylor - 2015";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel1_LinkClicked);
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->Location = System::Drawing::Point(628, 279);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(632, 331);
			this->tabControl1->TabIndex = 61;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage2->Controls->Add(this->maskedTextBox59);
			this->tabPage2->Controls->Add(this->maskedTextBox60);
			this->tabPage2->Controls->Add(this->maskedTextBox54);
			this->tabPage2->Controls->Add(this->maskedTextBox55);
			this->tabPage2->Controls->Add(this->maskedTextBox56);
			this->tabPage2->Controls->Add(this->maskedTextBox57);
			this->tabPage2->Controls->Add(this->maskedTextBox58);
			this->tabPage2->Controls->Add(this->maskedTextBox53);
			this->tabPage2->Controls->Add(this->maskedTextBox51);
			this->tabPage2->Controls->Add(this->maskedTextBox52);
			this->tabPage2->Controls->Add(this->maskedTextBox50);
			this->tabPage2->Controls->Add(this->maskedTextBox49);
			this->tabPage2->Controls->Add(this->label25);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->numericUpDown8);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->numericUpDown9);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->numericUpDown10);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->numericUpDown11);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->numericUpDown12);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->numericUpDown7);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->numericUpDown6);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->numericUpDown5);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->numericUpDown4);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->numericUpDown3);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->numericUpDown2);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->numericUpDown1);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(624, 305);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Initial Wheel Positions";
			// 
			// maskedTextBox59
			// 
			this->maskedTextBox59->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->maskedTextBox59->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->maskedTextBox59->Location = System::Drawing::Point(309, 150);
			this->maskedTextBox59->Name = L"maskedTextBox59";
			this->maskedTextBox59->ReadOnly = true;
			this->maskedTextBox59->Size = System::Drawing::Size(53, 24);
			this->maskedTextBox59->TabIndex = 38;
			this->maskedTextBox59->Text = L"/61";
			// 
			// maskedTextBox60
			// 
			this->maskedTextBox60->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->maskedTextBox60->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->maskedTextBox60->Location = System::Drawing::Point(260, 150);
			this->maskedTextBox60->Name = L"maskedTextBox60";
			this->maskedTextBox60->ReadOnly = true;
			this->maskedTextBox60->Size = System::Drawing::Size(53, 24);
			this->maskedTextBox60->TabIndex = 37;
			this->maskedTextBox60->Text = L"/37";
			// 
			// maskedTextBox54
			// 
			this->maskedTextBox54->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->maskedTextBox54->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->maskedTextBox54->Location = System::Drawing::Point(563, 150);
			this->maskedTextBox54->Name = L"maskedTextBox54";
			this->maskedTextBox54->ReadOnly = true;
			this->maskedTextBox54->Size = System::Drawing::Size(53, 24);
			this->maskedTextBox54->TabIndex = 36;
			this->maskedTextBox54->Text = L"/23";
			// 
			// maskedTextBox55
			// 
			this->maskedTextBox55->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->maskedTextBox55->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->maskedTextBox55->Location = System::Drawing::Point(513, 150);
			this->maskedTextBox55->Name = L"maskedTextBox55";
			this->maskedTextBox55->ReadOnly = true;
			this->maskedTextBox55->Size = System::Drawing::Size(53, 24);
			this->maskedTextBox55->TabIndex = 35;
			this->maskedTextBox55->Text = L"/26";
			// 
			// maskedTextBox56
			// 
			this->maskedTextBox56->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->maskedTextBox56->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->maskedTextBox56->Location = System::Drawing::Point(463, 150);
			this->maskedTextBox56->Name = L"maskedTextBox56";
			this->maskedTextBox56->ReadOnly = true;
			this->maskedTextBox56->Size = System::Drawing::Size(53, 24);
			this->maskedTextBox56->TabIndex = 34;
			this->maskedTextBox56->Text = L"/29";
			// 
			// maskedTextBox57
			// 
			this->maskedTextBox57->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->maskedTextBox57->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->maskedTextBox57->Location = System::Drawing::Point(414, 150);
			this->maskedTextBox57->Name = L"maskedTextBox57";
			this->maskedTextBox57->ReadOnly = true;
			this->maskedTextBox57->Size = System::Drawing::Size(53, 24);
			this->maskedTextBox57->TabIndex = 33;
			this->maskedTextBox57->Text = L"/31";
			// 
			// maskedTextBox58
			// 
			this->maskedTextBox58->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->maskedTextBox58->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->maskedTextBox58->Location = System::Drawing::Point(365, 150);
			this->maskedTextBox58->Name = L"maskedTextBox58";
			this->maskedTextBox58->ReadOnly = true;
			this->maskedTextBox58->Size = System::Drawing::Size(53, 24);
			this->maskedTextBox58->TabIndex = 32;
			this->maskedTextBox58->Text = L"/41";
			// 
			// maskedTextBox53
			// 
			this->maskedTextBox53->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->maskedTextBox53->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->maskedTextBox53->Location = System::Drawing::Point(205, 150);
			this->maskedTextBox53->Name = L"maskedTextBox53";
			this->maskedTextBox53->ReadOnly = true;
			this->maskedTextBox53->Size = System::Drawing::Size(53, 24);
			this->maskedTextBox53->TabIndex = 31;
			this->maskedTextBox53->Text = L"/59";
			// 
			// maskedTextBox51
			// 
			this->maskedTextBox51->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->maskedTextBox51->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->maskedTextBox51->Location = System::Drawing::Point(156, 150);
			this->maskedTextBox51->Name = L"maskedTextBox51";
			this->maskedTextBox51->ReadOnly = true;
			this->maskedTextBox51->Size = System::Drawing::Size(53, 24);
			this->maskedTextBox51->TabIndex = 30;
			this->maskedTextBox51->Text = L"/53";
			// 
			// maskedTextBox52
			// 
			this->maskedTextBox52->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->maskedTextBox52->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->maskedTextBox52->Location = System::Drawing::Point(107, 150);
			this->maskedTextBox52->Name = L"maskedTextBox52";
			this->maskedTextBox52->ReadOnly = true;
			this->maskedTextBox52->Size = System::Drawing::Size(53, 24);
			this->maskedTextBox52->TabIndex = 29;
			this->maskedTextBox52->Text = L"/51";
			// 
			// maskedTextBox50
			// 
			this->maskedTextBox50->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->maskedTextBox50->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->maskedTextBox50->Location = System::Drawing::Point(58, 150);
			this->maskedTextBox50->Name = L"maskedTextBox50";
			this->maskedTextBox50->ReadOnly = true;
			this->maskedTextBox50->Size = System::Drawing::Size(53, 24);
			this->maskedTextBox50->TabIndex = 28;
			this->maskedTextBox50->Text = L"/47";
			// 
			// maskedTextBox49
			// 
			this->maskedTextBox49->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->maskedTextBox49->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->maskedTextBox49->Location = System::Drawing::Point(9, 150);
			this->maskedTextBox49->Name = L"maskedTextBox49";
			this->maskedTextBox49->ReadOnly = true;
			this->maskedTextBox49->Size = System::Drawing::Size(53, 24);
			this->maskedTextBox49->TabIndex = 27;
			this->maskedTextBox49->Text = L"/43";
			// 
			// label25
			// 
			this->label25->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label25->Location = System::Drawing::Point(155, 51);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(294, 17);
			this->label25->TabIndex = 26;
			this->label25->Text = L"Change the initial position of the wheels here.";
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->button4->Location = System::Drawing::Point(312, 249);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(204, 33);
			this->button4->TabIndex = 25;
			this->button4->Text = L"Reset";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->button3->Location = System::Drawing::Point(107, 249);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(203, 33);
			this->button3->TabIndex = 24;
			this->button3->Text = L"Randomise";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// numericUpDown8
			// 
			this->numericUpDown8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDown8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->numericUpDown8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->numericUpDown8->ForeColor = System::Drawing::Color::Blue;
			this->numericUpDown8->Location = System::Drawing::Point(563, 125);
			this->numericUpDown8->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 23, 0, 0, 0 });
			this->numericUpDown8->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown8->Name = L"numericUpDown8";
			this->numericUpDown8->Size = System::Drawing::Size(53, 24);
			this->numericUpDown8->TabIndex = 23;
			this->numericUpDown8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown8->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown8->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown8_ValueChanged);
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Blue;
			this->label9->Location = System::Drawing::Point(577, 105);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(22, 13);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Χ5";
			// 
			// numericUpDown9
			// 
			this->numericUpDown9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDown9->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->numericUpDown9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->numericUpDown9->ForeColor = System::Drawing::Color::Blue;
			this->numericUpDown9->Location = System::Drawing::Point(513, 125);
			this->numericUpDown9->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 26, 0, 0, 0 });
			this->numericUpDown9->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown9->Name = L"numericUpDown9";
			this->numericUpDown9->Size = System::Drawing::Size(53, 24);
			this->numericUpDown9->TabIndex = 21;
			this->numericUpDown9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown9->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown9->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown9_ValueChanged);
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Blue;
			this->label10->Location = System::Drawing::Point(528, 105);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(22, 13);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Χ4";
			// 
			// numericUpDown10
			// 
			this->numericUpDown10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDown10->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->numericUpDown10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->numericUpDown10->ForeColor = System::Drawing::Color::Blue;
			this->numericUpDown10->Location = System::Drawing::Point(463, 125);
			this->numericUpDown10->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 29, 0, 0, 0 });
			this->numericUpDown10->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown10->Name = L"numericUpDown10";
			this->numericUpDown10->Size = System::Drawing::Size(53, 24);
			this->numericUpDown10->TabIndex = 19;
			this->numericUpDown10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown10->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown10->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown10_ValueChanged);
			// 
			// label11
			// 
			this->label11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Blue;
			this->label11->Location = System::Drawing::Point(475, 105);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(22, 13);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Χ3";
			// 
			// numericUpDown11
			// 
			this->numericUpDown11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDown11->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->numericUpDown11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->numericUpDown11->ForeColor = System::Drawing::Color::Blue;
			this->numericUpDown11->Location = System::Drawing::Point(414, 125);
			this->numericUpDown11->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 31, 0, 0, 0 });
			this->numericUpDown11->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown11->Name = L"numericUpDown11";
			this->numericUpDown11->Size = System::Drawing::Size(53, 24);
			this->numericUpDown11->TabIndex = 17;
			this->numericUpDown11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown11->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown11->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown11_ValueChanged);
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Blue;
			this->label12->Location = System::Drawing::Point(427, 105);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(22, 13);
			this->label12->TabIndex = 16;
			this->label12->Text = L"Χ2";
			// 
			// numericUpDown12
			// 
			this->numericUpDown12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDown12->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->numericUpDown12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->numericUpDown12->ForeColor = System::Drawing::Color::Blue;
			this->numericUpDown12->Location = System::Drawing::Point(365, 125);
			this->numericUpDown12->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 41, 0, 0, 0 });
			this->numericUpDown12->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown12->Name = L"numericUpDown12";
			this->numericUpDown12->Size = System::Drawing::Size(53, 24);
			this->numericUpDown12->TabIndex = 15;
			this->numericUpDown12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown12->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown12->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown12_ValueChanged);
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Blue;
			this->label13->Location = System::Drawing::Point(377, 105);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(22, 13);
			this->label13->TabIndex = 14;
			this->label13->Text = L"Χ1";
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDown7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->numericUpDown7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->numericUpDown7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->numericUpDown7->Location = System::Drawing::Point(309, 125);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 61, 0, 0, 0 });
			this->numericUpDown7->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(53, 24);
			this->numericUpDown7->TabIndex = 13;
			this->numericUpDown7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown7->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown7->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown7_ValueChanged);
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(317, 105);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 13);
			this->label8->TabIndex = 12;
			this->label8->Text = L"M61";
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDown6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->numericUpDown6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->numericUpDown6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->numericUpDown6->Location = System::Drawing::Point(260, 125);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 37, 0, 0, 0 });
			this->numericUpDown6->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(53, 24);
			this->numericUpDown6->TabIndex = 11;
			this->numericUpDown6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown6->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown6->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown6_ValueChanged);
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(266, 105);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 13);
			this->label7->TabIndex = 10;
			this->label7->Text = L"M37";
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDown5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->numericUpDown5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->numericUpDown5->ForeColor = System::Drawing::Color::Red;
			this->numericUpDown5->Location = System::Drawing::Point(205, 125);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 59, 0, 0, 0 });
			this->numericUpDown5->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(53, 24);
			this->numericUpDown5->TabIndex = 9;
			this->numericUpDown5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown5_ValueChanged);
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(211, 105);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(23, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Ψ5";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDown4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->numericUpDown4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->numericUpDown4->ForeColor = System::Drawing::Color::Red;
			this->numericUpDown4->Location = System::Drawing::Point(156, 125);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 53, 0, 0, 0 });
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(53, 24);
			this->numericUpDown4->TabIndex = 7;
			this->numericUpDown4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown4_ValueChanged);
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(163, 105);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(23, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Ψ4";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDown3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->numericUpDown3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->numericUpDown3->ForeColor = System::Drawing::Color::Red;
			this->numericUpDown3->Location = System::Drawing::Point(107, 125);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 51, 0, 0, 0 });
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(53, 24);
			this->numericUpDown3->TabIndex = 5;
			this->numericUpDown3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown3_ValueChanged);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(112, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Ψ3";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDown2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->numericUpDown2->ForeColor = System::Drawing::Color::Red;
			this->numericUpDown2->Location = System::Drawing::Point(58, 125);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 47, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(53, 24);
			this->numericUpDown2->TabIndex = 3;
			this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown2_ValueChanged);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(68, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ψ2";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDown1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->numericUpDown1->ForeColor = System::Drawing::Color::Red;
			this->numericUpDown1->Location = System::Drawing::Point(9, 125);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 43, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(53, 24);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(22, 105);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ψ1";
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage4->Controls->Add(this->button8);
			this->tabPage4->Controls->Add(this->button7);
			this->tabPage4->Controls->Add(this->label15);
			this->tabPage4->Controls->Add(this->button5);
			this->tabPage4->Controls->Add(this->richTextBox3);
			this->tabPage4->Controls->Add(this->textBox1);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(624, 305);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"PIN Data";
			// 
			// button8
			// 
			this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->button8->Location = System::Drawing::Point(258, 280);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(120, 23);
			this->button8->TabIndex = 61;
			this->button8->Text = L"Use Public PIN";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->button7->Location = System::Drawing::Point(384, 280);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(131, 23);
			this->button7->TabIndex = 60;
			this->button7->Text = L"Generate Random PIN";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// label15
			// 
			this->label15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(79, 285);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(65, 13);
			this->label15->TabIndex = 59;
			this->label15->Text = L"Current PIN:";
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.25F));
			this->button5->Location = System::Drawing::Point(521, 280);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(99, 23);
			this->button5->TabIndex = 58;
			this->button5->Text = L"Use Custom PIN";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// richTextBox3
			// 
			this->richTextBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox3->BackColor = System::Drawing::Color::Black;
			this->richTextBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->richTextBox3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->richTextBox3->Location = System::Drawing::Point(258, 3);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox3->Size = System::Drawing::Size(366, 276);
			this->richTextBox3->TabIndex = 57;
			this->richTextBox3->Text = resources->GetString(L"richTextBox3.Text");
			// 
			// tabPage6
			// 
			this->tabPage6->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->tabPage6->Controls->Add(this->textBox3);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(624, 305);
			this->tabPage6->TabIndex = 6;
			this->tabPage6->Text = L"Readme";
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox3->ForeColor = System::Drawing::Color::Black;
			this->textBox3->Location = System::Drawing::Point(3, 3);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox3->Size = System::Drawing::Size(617, 301);
			this->textBox3->TabIndex = 0;
			this->textBox3->Text = resources->GetString(L"textBox3.Text");
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->tabPage3->Controls->Add(this->label30);
			this->tabPage3->Controls->Add(this->label29);
			this->tabPage3->Controls->Add(this->label28);
			this->tabPage3->Controls->Add(this->label27);
			this->tabPage3->Controls->Add(this->label14);
			this->tabPage3->Controls->Add(this->pictureBox3);
			this->tabPage3->Controls->Add(this->linkLabel1);
			this->tabPage3->Cursor = System::Windows::Forms::Cursors::Default;
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(624, 305);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Credits";
			// 
			// label30
			// 
			this->label30->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::Transparent;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(328, 261);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(22, 13);
			this->label30->TabIndex = 67;
			this->label30->Text = L"3.0";
			// 
			// label29
			// 
			this->label29->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::Transparent;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(243, 261);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(66, 13);
			this->label29->TabIndex = 66;
			this->label29->Text = L"GUI version:";
			// 
			// label28
			// 
			this->label28->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Transparent;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(221, 276);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(88, 13);
			this->label28->TabIndex = 65;
			this->label28->Text = L"Machine version:";
			// 
			// label27
			// 
			this->label27->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Transparent;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(328, 276);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(22, 13);
			this->label27->TabIndex = 64;
			this->label27->Text = L"5.2";
			// 
			// label14
			// 
			this->label14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(227, 228);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(145, 13);
			this->label14->TabIndex = 60;
			this->label14->Text = L"Lorenz SZ40 Cipher Machine";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(75, 17);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(473, 180);
			this->pictureBox3->TabIndex = 63;
			this->pictureBox3->TabStop = false;
			// 
			// label35
			// 
			this->label35->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(859, 613);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(63, 13);
			this->label35->TabIndex = 69;
			this->label35->Text = L"milliseconds";
			// 
			// label34
			// 
			this->label34->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(677, 614);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(86, 13);
			this->label34->TabIndex = 68;
			this->label34->Text = L"Simulation delay:";
			// 
			// numericUpDown13
			// 
			this->numericUpDown13->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->numericUpDown13->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->numericUpDown13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown13->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown13->Location = System::Drawing::Point(805, 611);
			this->numericUpDown13->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown13->Name = L"numericUpDown13";
			this->numericUpDown13->Size = System::Drawing::Size(56, 20);
			this->numericUpDown13->TabIndex = 67;
			this->numericUpDown13->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numericUpDown13->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 45, 0, 0, 0 });
			// 
			// checkBox1
			// 
			this->checkBox1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(348, 614);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(148, 17);
			this->checkBox1->TabIndex = 66;
			this->checkBox1->Text = L"Run simulation in real time";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->textBox2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox2->Location = System::Drawing::Point(3, 279);
			this->textBox2->MaxLength = 100000;
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(626, 331);
			this->textBox2->TabIndex = 63;
			this->textBox2->Text = resources->GetString(L"textBox2.Text");
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// maskedTextBox61
			// 
			this->maskedTextBox61->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox61->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox61->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maskedTextBox61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->maskedTextBox61->ForeColor = System::Drawing::Color::Red;
			this->maskedTextBox61->Location = System::Drawing::Point(479, 164);
			this->maskedTextBox61->Name = L"maskedTextBox61";
			this->maskedTextBox61->ReadOnly = true;
			this->maskedTextBox61->Size = System::Drawing::Size(63, 31);
			this->maskedTextBox61->TabIndex = 70;
			this->maskedTextBox61->Text = L"#";
			this->maskedTextBox61->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox62
			// 
			this->maskedTextBox62->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox62->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox62->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maskedTextBox62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->maskedTextBox62->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->maskedTextBox62->Location = System::Drawing::Point(714, 164);
			this->maskedTextBox62->Name = L"maskedTextBox62";
			this->maskedTextBox62->ReadOnly = true;
			this->maskedTextBox62->Size = System::Drawing::Size(62, 31);
			this->maskedTextBox62->TabIndex = 71;
			this->maskedTextBox62->Text = L"#";
			this->maskedTextBox62->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox63
			// 
			this->maskedTextBox63->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox63->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox63->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maskedTextBox63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.25F));
			this->maskedTextBox63->Location = System::Drawing::Point(479, 147);
			this->maskedTextBox63->Name = L"maskedTextBox63";
			this->maskedTextBox63->ReadOnly = true;
			this->maskedTextBox63->Size = System::Drawing::Size(63, 10);
			this->maskedTextBox63->TabIndex = 72;
			this->maskedTextBox63->Text = L"Before";
			this->maskedTextBox63->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// maskedTextBox64
			// 
			this->maskedTextBox64->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->maskedTextBox64->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->maskedTextBox64->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->maskedTextBox64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.25F));
			this->maskedTextBox64->Location = System::Drawing::Point(714, 147);
			this->maskedTextBox64->Name = L"maskedTextBox64";
			this->maskedTextBox64->ReadOnly = true;
			this->maskedTextBox64->Size = System::Drawing::Size(62, 10);
			this->maskedTextBox64->TabIndex = 73;
			this->maskedTextBox64->Text = L"After";
			this->maskedTextBox64->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->maskedTextBox64);
			this->Controls->Add(this->maskedTextBox63);
			this->Controls->Add(this->maskedTextBox62);
			this->Controls->Add(this->maskedTextBox61);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->encryptButton);
			this->Controls->Add(this->numericUpDown13);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->maskedTextBox23);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->maskedTextBox29);
			this->Controls->Add(this->maskedTextBox3);
			this->Controls->Add(this->maskedTextBox24);
			this->Controls->Add(this->maskedTextBox4);
			this->Controls->Add(this->maskedTextBox28);
			this->Controls->Add(this->maskedTextBox5);
			this->Controls->Add(this->maskedTextBox25);
			this->Controls->Add(this->maskedTextBox10);
			this->Controls->Add(this->maskedTextBox31);
			this->Controls->Add(this->maskedTextBox44);
			this->Controls->Add(this->maskedTextBox26);
			this->Controls->Add(this->maskedTextBox9);
			this->Controls->Add(this->maskedTextBox30);
			this->Controls->Add(this->maskedTextBox45);
			this->Controls->Add(this->maskedTextBox27);
			this->Controls->Add(this->maskedTextBox8);
			this->Controls->Add(this->maskedTextBox33);
			this->Controls->Add(this->maskedTextBox46);
			this->Controls->Add(this->maskedTextBox18);
			this->Controls->Add(this->maskedTextBox7);
			this->Controls->Add(this->maskedTextBox32);
			this->Controls->Add(this->maskedTextBox47);
			this->Controls->Add(this->maskedTextBox19);
			this->Controls->Add(this->maskedTextBox6);
			this->Controls->Add(this->maskedTextBox38);
			this->Controls->Add(this->maskedTextBox48);
			this->Controls->Add(this->maskedTextBox20);
			this->Controls->Add(this->maskedTextBox11);
			this->Controls->Add(this->maskedTextBox37);
			this->Controls->Add(this->maskedTextBox39);
			this->Controls->Add(this->maskedTextBox21);
			this->Controls->Add(this->maskedTextBox12);
			this->Controls->Add(this->maskedTextBox36);
			this->Controls->Add(this->maskedTextBox40);
			this->Controls->Add(this->maskedTextBox22);
			this->Controls->Add(this->maskedTextBox17);
			this->Controls->Add(this->maskedTextBox35);
			this->Controls->Add(this->maskedTextBox41);
			this->Controls->Add(this->maskedTextBox13);
			this->Controls->Add(this->maskedTextBox16);
			this->Controls->Add(this->maskedTextBox34);
			this->Controls->Add(this->maskedTextBox42);
			this->Controls->Add(this->maskedTextBox14);
			this->Controls->Add(this->maskedTextBox15);
			this->Controls->Add(this->maskedTextBox43);
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(1280, 720);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Lorenz SZ40";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown13))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		 
#pragma endregion


// Functions in this box will run when Form1 opens.
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

			 // Sets the Lorenz Machine to display realtime by default.
			 checkBox1->Checked = true;

			 // Reset wheels to initial conditions.
			 manager.wheelcollection.setUpWheels();

			 // Update text for the version of the Lorenz Machine.
			 label27->Text = Convert::ToString(manager.version);

			 // Set all GUI text for the first time.
			 Update(0);

}

// Updates all the GUI fields to represent the current status of the Lorenz Machine.
private: System::Void Update(int milliseconds)
		 {;

			int temp;
			int temp2;
			bool draw = true;
			int move = milliseconds / 36;


			/*
					Gets the default wheel positions.
					Update the GUI with the current wheel positions.      */

			 // PSI 1
			 temp = manager.wheelcollection.Ψ1.getDefaultWheelPosition();
			 numericUpDown1->Text = Convert::ToString(temp);
			 //numericUpDown1->Refresh();

			 // PSI 2
			 temp = manager.wheelcollection.Ψ2.getDefaultWheelPosition();
			 numericUpDown2->Text = Convert::ToString(temp);
			 //numericUpDown2->Refresh();

			 // PSI 3
			 temp = manager.wheelcollection.Ψ3.getDefaultWheelPosition();
			 numericUpDown3->Text = Convert::ToString(temp);
			 //numericUpDown3->Refresh();

			 // PSI 4
			 temp = manager.wheelcollection.Ψ4.getDefaultWheelPosition();
			 numericUpDown4->Text = Convert::ToString(temp);
			 //numericUpDown4->Refresh();

			 // PSI 5
			 temp = manager.wheelcollection.Ψ5.getDefaultWheelPosition();
			 numericUpDown5->Text = Convert::ToString(temp);
			 //numericUpDown5->Refresh();

			 // Μ37
			 temp = manager.wheelcollection.Μ37.getDefaultWheelPosition();
			 numericUpDown6->Text = Convert::ToString(temp);
			 //numericUpDown6->Refresh();

			 // Μ61
			 temp = manager.wheelcollection.Μ61.getDefaultWheelPosition();
			 numericUpDown7->Text = Convert::ToString(temp);
			 //numericUpDown7->Refresh();

			 // Χ1
			 temp = manager.wheelcollection.Χ1.getDefaultWheelPosition();
			 numericUpDown12->Text = Convert::ToString(temp);
			 //numericUpDown12->Refresh();

			 // Χ2
			 temp = manager.wheelcollection.Χ2.getDefaultWheelPosition();
			 numericUpDown11->Text = Convert::ToString(temp);
			 //numericUpDown11->Refresh();

			 // Χ3
			 temp = manager.wheelcollection.Χ3.getDefaultWheelPosition();
			 numericUpDown10->Text = Convert::ToString(temp);
			 //numericUpDown10->Refresh();

			 // Χ4
			 temp = manager.wheelcollection.Χ4.getDefaultWheelPosition();
			 numericUpDown9->Text = Convert::ToString(temp);
			 //numericUpDown9->Refresh();

			 // Χ5
			 temp = manager.wheelcollection.Χ5.getDefaultWheelPosition();
			 numericUpDown8->Text = Convert::ToString(temp);
			 //numericUpDown8->Refresh();


			/*
					Gets the current PIN data.
					Update the GUI with this pin data.					  */

			// Current pin data
			String^ text = msclr::interop::marshal_as<String^>( manager.wheelcollection.allPinData );
			textBox1->Text = Convert::ToString(text);

			/*
					Gets the current, previous and next wheel positions
					Update the GUI with these positions				      */


			// Next Ψ1
			temp = manager.wheelcollection.Ψ1.getNextWheelValue();
			maskedTextBox27->Text = Convert::ToString(temp);

			if (draw)
			{
				maskedTextBox27->Refresh();
				// Pause this thread
				System::Threading::Thread::Sleep(move);
			}

			// Current Ψ1
			temp = manager.wheelcollection.Ψ1.getCurrentWheelValue();
			maskedTextBox22->Text = Convert::ToString(temp);

			if ( draw )
			{
			maskedTextBox22->Refresh();
			// Pause this thread
			System::Threading::Thread::Sleep(move);
			}

			// Previous Ψ1
			temp = manager.wheelcollection.Ψ1.getPreviousWheelValue();
			maskedTextBox17->Text = Convert::ToString(temp);
			temp2 = System::Int32::Parse(maskedTextBox17->Text);

			if (draw)
			{
				maskedTextBox17->Refresh();
				// Pause this thread
				System::Threading::Thread::Sleep(move);
			}

			// Next Ψ2
			temp = manager.wheelcollection.Ψ2.getNextWheelValue();
			maskedTextBox26->Text = Convert::ToString(temp);

			if (draw)
			{
				maskedTextBox26->Refresh();
				// Pause this thread
				System::Threading::Thread::Sleep(move);
			}

			// Current Ψ2
			temp = manager.wheelcollection.Ψ2.getCurrentWheelValue();
			maskedTextBox21->Text = Convert::ToString(temp);

			if ( draw )
			{
				maskedTextBox21->Refresh();
				// Pause this thread
				System::Threading::Thread::Sleep(move);
			}

			// Previous Ψ2
			temp = manager.wheelcollection.Ψ2.getPreviousWheelValue();
			maskedTextBox16->Text = Convert::ToString(temp);

			if (draw)
			{
				maskedTextBox16->Refresh();
				// Pause this thread
				System::Threading::Thread::Sleep(move);
			}

			// Next Ψ3
			temp = manager.wheelcollection.Ψ3.getNextWheelValue();
			maskedTextBox25->Text = Convert::ToString(temp);

			if (draw)
			{
				maskedTextBox25->Refresh();
				// Pause this thread
				System::Threading::Thread::Sleep(move);
			}

			// Current Ψ3
			temp = manager.wheelcollection.Ψ3.getCurrentWheelValue();
			maskedTextBox20->Text = Convert::ToString(temp);

			if ( draw )
			{
			maskedTextBox20->Refresh();
			// Pause this thread
			System::Threading::Thread::Sleep(move);
			}

			// Previous Ψ3
			temp = manager.wheelcollection.Ψ3.getPreviousWheelValue();
			maskedTextBox15->Text = Convert::ToString(temp);

			if (draw)
			{
				maskedTextBox15->Refresh();
				// Pause this thread
				System::Threading::Thread::Sleep(move);
			}

			// Next Ψ4
			temp = manager.wheelcollection.Ψ4.getNextWheelValue();
			maskedTextBox24->Text = Convert::ToString(temp);

			if (draw)
			{
				maskedTextBox24->Refresh();
				// Pause this thread
				System::Threading::Thread::Sleep(move);
			}

			// Current Ψ4
			temp = manager.wheelcollection.Ψ4.getCurrentWheelValue();
			maskedTextBox19->Text = Convert::ToString(temp);

			if ( draw )
			{
			maskedTextBox19->Refresh();
			// Pause this thread
			System::Threading::Thread::Sleep(move);
			}

			// Previous Ψ4
			temp = manager.wheelcollection.Ψ4.getPreviousWheelValue();
			maskedTextBox14->Text = Convert::ToString(temp);

			if (draw)
			{
				maskedTextBox14->Refresh();
				// Pause this thread
				System::Threading::Thread::Sleep(move);
			}

			// Next Ψ5
			temp = manager.wheelcollection.Ψ5.getNextWheelValue();
			maskedTextBox23->Text = Convert::ToString(temp);

			if (draw)
			{
				maskedTextBox23->Refresh();
				// Pause this thread
				System::Threading::Thread::Sleep(move);
			}

			// Current Ψ5
			temp = manager.wheelcollection.Ψ5.getCurrentWheelValue();
			maskedTextBox18->Text = Convert::ToString(temp);

			if ( draw )
			{
			maskedTextBox18->Refresh();
			// Pause this thread
			System::Threading::Thread::Sleep(move);
			}

			// Previous Ψ5
			temp = manager.wheelcollection.Ψ5.getPreviousWheelValue();
			maskedTextBox13->Text = Convert::ToString(temp);

			if (draw)
			{
				maskedTextBox13->Refresh();
				// Pause this thread
				System::Threading::Thread::Sleep(move);

			}

			

			// Next Μ37
			temp = manager.wheelcollection.Μ37.getNextWheelValue();
			maskedTextBox33->Text = Convert::ToString(temp);

			if (draw)
			{
				maskedTextBox33->Refresh();
				// Pause this thread
				System::Threading::Thread::Sleep(move);
			}

			// Current Μ37
			temp = manager.wheelcollection.Μ37.getCurrentWheelValue();
			maskedTextBox31->Text = Convert::ToString(temp);

			if ( draw )
			{
			maskedTextBox31->Refresh();
			// Pause this thread
			System::Threading::Thread::Sleep(move);
			}

			// Previous Μ37
			temp = manager.wheelcollection.Μ37.getPreviousWheelValue();
			maskedTextBox29->Text = Convert::ToString(temp);

			if (draw)
			{
				maskedTextBox29->Refresh();
				// Pause this thread
				System::Threading::Thread::Sleep(move);
			}

			// Next Μ61
			temp = manager.wheelcollection.Μ61.getNextWheelValue();
			maskedTextBox32->Text = Convert::ToString(temp);

			if (draw)
			{
				maskedTextBox32->Refresh();
				// Pause this thread
				System::Threading::Thread::Sleep(move);
			}

			// Current Μ61
			temp = manager.wheelcollection.Μ61.getCurrentWheelValue();
			maskedTextBox30->Text = Convert::ToString(temp);

			if ( draw )
			{
			maskedTextBox30->Refresh();
			// Pause this thread
			System::Threading::Thread::Sleep(move);
			}

			// Previous Μ61
			temp = manager.wheelcollection.Μ61.getPreviousWheelValue();
			maskedTextBox28->Text = Convert::ToString(temp);

			if (draw)
			{
				maskedTextBox28->Refresh();
				// Pause this thread
				System::Threading::Thread::Sleep(move);
			}

			// Next Χ1
			temp = manager.wheelcollection.Χ1.getNextWheelValue();
			maskedTextBox48->Text = Convert::ToString(temp);

			if (draw)
			{
				maskedTextBox48->Refresh();
				// Pause this thread
				System::Threading::Thread::Sleep(move);
			}

			// Current Χ1
			temp = manager.wheelcollection.Χ1.getCurrentWheelValue();
			maskedTextBox43->Text = Convert::ToString(temp);

			if ( draw )
			{
			maskedTextBox43->Refresh();
			// Pause this thread
			System::Threading::Thread::Sleep(move);
			}

			// Previous Χ1
			temp = manager.wheelcollection.Χ1.getPreviousWheelValue();
			maskedTextBox38->Text = Convert::ToString(temp);

			if (draw)
			{
				maskedTextBox38->Refresh();
				// Pause this thread
				System::Threading::Thread::Sleep(move);
			}

			// Next Χ2
			temp = manager.wheelcollection.Χ2.getNextWheelValue();
			maskedTextBox47->Text = Convert::ToString(temp);

			if (draw)
			{
				maskedTextBox47->Refresh();
				// Pause this thread
				System::Threading::Thread::Sleep(move);
			}

			// Current Χ2
			temp = manager.wheelcollection.Χ2.getCurrentWheelValue();
			maskedTextBox42->Text = Convert::ToString(temp);

			if ( draw )
			{
			maskedTextBox42->Refresh();
			// Pause this thread
			System::Threading::Thread::Sleep(move);
			}

			// Previous Χ2
			temp = manager.wheelcollection.Χ2.getPreviousWheelValue();
			maskedTextBox37->Text = Convert::ToString(temp);

			if (draw)
			{
				maskedTextBox37->Refresh();
				// Pause this thread
				System::Threading::Thread::Sleep(move);
			}

			// Next Χ3
			temp = manager.wheelcollection.Χ3.getNextWheelValue();
			maskedTextBox46->Text = Convert::ToString(temp);

			if (draw)
			{
				maskedTextBox46->Refresh();
				// Pause this thread
				System::Threading::Thread::Sleep(move);
			}

			// Current Χ3
			temp = manager.wheelcollection.Χ3.getCurrentWheelValue();
			maskedTextBox41->Text = Convert::ToString(temp);

			if ( draw )
			{
			maskedTextBox41->Refresh();
			// Pause this thread
			System::Threading::Thread::Sleep(move);
			}

			// Previous Χ3
			temp = manager.wheelcollection.Χ3.getPreviousWheelValue();
			maskedTextBox36->Text = Convert::ToString(temp);

			if (draw)
			{
				maskedTextBox36->Refresh();
				// Pause this thread
				System::Threading::Thread::Sleep(move);
			}

			// Next Χ4
			temp = manager.wheelcollection.Χ4.getNextWheelValue();
			maskedTextBox45->Text = Convert::ToString(temp);

			if (draw)
			{
				maskedTextBox45->Refresh();
				// Pause this thread
				System::Threading::Thread::Sleep(move);
			}

			// Current Χ4
			temp = manager.wheelcollection.Χ4.getCurrentWheelValue();
			maskedTextBox40->Text = Convert::ToString(temp);

			if ( draw )
			{
			maskedTextBox40->Refresh();
			// Pause this thread
			System::Threading::Thread::Sleep(move);
			}

			// Previous Χ4
			temp = manager.wheelcollection.Χ4.getPreviousWheelValue();
			maskedTextBox35->Text = Convert::ToString(temp);

			if (draw)
			{
				maskedTextBox35->Refresh();
				// Pause this thread
				System::Threading::Thread::Sleep(move);
			}

			// Next Χ5
			temp = manager.wheelcollection.Χ5.getNextWheelValue();
			maskedTextBox44->Text = Convert::ToString(temp);

			if (draw)
			{
				maskedTextBox44->Refresh();
				// Pause this thread
				System::Threading::Thread::Sleep(move);
			}

			// Current Χ5
			temp = manager.wheelcollection.Χ5.getCurrentWheelValue();
			maskedTextBox39->Text = Convert::ToString(temp);

			if ( draw )
			{
			maskedTextBox39->Refresh();
			// Pause this thread
			System::Threading::Thread::Sleep(move);
			}

			// Previous Χ5
			temp = manager.wheelcollection.Χ5.getPreviousWheelValue();
			maskedTextBox34->Text = Convert::ToString(temp);

			if (draw)
			{
				maskedTextBox34->Refresh();
				// Pause this thread
				System::Threading::Thread::Sleep(move);
			}

			// Refresh the message
			textBox2->Refresh();


		 }

// The button to encrypt the text in the text box.
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			// Set cursor to wait cursor.
			Cursor->Current = Cursors::WaitCursor;

			// Int to store milliscond delay for real time simulation.
			int tempDelay = System::Int32::Parse(numericUpDown13->Text);

			 // String to store the result.
			 std::string result;

			 // Reset wheels.
			 manager.wheelcollection.setUpWheels();

			 // Convert system string from encryption text box to std string.
			 std::string toEncrypt=msclr::interop::marshal_as< std::string >( textBox2->Text);

			 // If the Lorenz Machine is being updated in real time.
			 if ( checkBox1->Checked)
			 {
				// Loops through every character in the text box.
				for ( size_t i = 0; i < toEncrypt.size(); i++ )
				{
					// Creates a string out of the current character.
					std::string temp0(1,toEncrypt[i]);

					// Encrypts the current character using the current properties of the Lorenz Machine.
					std::string temp = manager.lorenzmachine.encrypt(manager.wheelcollection,manager.convert,temp0,false);

					// Adds the current character to the finished message in a string.
					result.append(temp);

					// Converts the std::string to a System::String
					String^ finished = msclr::interop::marshal_as<String^>( result );

					// Updates the text box with the encrypted message. (or what has been encrypted of it so far)
					textBox2->Text = finished;

					

					// Display the current character that is being encrypted in a text box.
					std::string temp5(1, toEncrypt[i]);
					finished = msclr::interop::marshal_as<String^>(temp5);
					maskedTextBox61->Text = finished;
					maskedTextBox61->Refresh();

					// Display the current character that has been decrypted in a text box.
					std::string temp6(1, manager.lorenzmachine.currentEncrypted);
					finished = msclr::interop::marshal_as<String^>(temp6);
					maskedTextBox62->Text = finished;
					maskedTextBox62->Refresh();

					// Updates all the GUI fields.
					Update(tempDelay);

				}

			 // If the Lorenz Machine is not being updated in real time. 
			 } else	{

				 // Encrypts the current message using the current properties of the Lorenz Machine.
				 std::string temp = manager.lorenzmachine.encrypt(manager.wheelcollection,manager.convert,toEncrypt,false);

				 // Converts the std::string to a System::String
				 String^ result = msclr::interop::marshal_as<String^>( temp );

				 // Updates the text box with the encrypted message. (or what has been encrypted of it so far)
				 textBox2->Text = result;

				 // Updates all the GUI fields.
				 Update(0);

			 }

			 // Set cursor to default cursor.
			 Cursor->Current = Cursors::Default;

			 maskedTextBox61->Text = "#";
			 maskedTextBox62->Text = "#";

		 }

// The button to decrypt the text in the text box.
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		

			 // Set cursor to wait cursor.
			 Cursor->Current = Cursors::WaitCursor;

			 // Int to store milliscond delay for real time simulation.
			 int tempDelay = System::Int32::Parse(numericUpDown13->Text);
			 
			 // String to store the result.
			 std::string result;

			 // Reset wheels.
			 manager.wheelcollection.setUpWheels();

			 // Convert system string from decryption text box to std string.
			 std::string toDecrypt=msclr::interop::marshal_as< std::string >( textBox2->Text);

			 // If the Lorenz Machine is being updated in real time.
			 if ( checkBox1->Checked)
			 {
				// Loops through every character in the text box.
				for ( size_t i = 0; i < toDecrypt.size(); i++ )
				{
					// Creates a string out of the current character.
					std::string temp0(1,toDecrypt[i]);

					// Decrypts the current character using the current properties of the Lorenz Machine.
					std::string temp = manager.lorenzmachine.decrypt(manager.wheelcollection,manager.convert,temp0,false);

					// Adds the current character to the finished message in a string.
					result.append(temp);

					// Converts the std::string to a System::String
					String^ finished = msclr::interop::marshal_as<String^>( result );

					// Updates the text box with the decrypted message. (or what has been decrypted of it so far)
					textBox2->Text = finished;

					// Display the current character that is being encrypted in a text box.
					std::string temp5(1, toDecrypt[i]);
					finished = msclr::interop::marshal_as<String^>(temp5);
					maskedTextBox61->Text = finished;
					maskedTextBox61->Refresh();

					// Display the current character that has been decrypted in a text box.
					std::string temp6(1, manager.lorenzmachine.currentEncrypted);
					finished = msclr::interop::marshal_as<String^>(temp6);
					maskedTextBox62->Text = finished;
					maskedTextBox62->Refresh();

					// Updates all the GUI fields.
					Update(tempDelay);
				}

			 // If the Lorenz Machine is not being updated in real time. 
			 } else	{

				 // Decrypts the current message using the current properties of the Lorenz Machine.
				 std::string temp = manager.lorenzmachine.decrypt(manager.wheelcollection,manager.convert,toDecrypt,false);

				 // Converts the std::string to a System::String
				 String^ result = msclr::interop::marshal_as<String^>( temp );

				 // Updates the text box with the decrypted message. (or what has been decrypted of it so far)
				 textBox2->Text = result;

				 // Updates all the GUI fields.
				 Update(0);

			 }

			 // Set cursor to default cursor.
			 Cursor->Current = Cursors::Default;

			 maskedTextBox61->Text = "#";
			 maskedTextBox62->Text = "#";
		 }

// Open website if link has been clicked.
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {

			 ShellExecute(NULL, "open", "http://www.tom189.comuf.com", NULL, NULL, SW_SHOWNORMAL);
		 }

// These numericUpDowns control the inital position of the Lorenz Machine wheels.
// They set the default initial positions of a wheel, and then resets every wheel and updates the GUI.
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

			 manager.wheelcollection.Ψ1.setDefaultWheelPosition((int)numericUpDown1->Value);
			 manager.wheelcollection.setUpWheels();
			 Update(0);
		 }
private: System::Void numericUpDown2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

			 manager.wheelcollection.Ψ2.setDefaultWheelPosition((int)numericUpDown2->Value);
			 manager.wheelcollection.setUpWheels();
			 Update(0);
		 }
private: System::Void numericUpDown3_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

			 manager.wheelcollection.Ψ3.setDefaultWheelPosition((int)numericUpDown3->Value);
			 manager.wheelcollection.setUpWheels();
			 Update(0);
		 }
private: System::Void numericUpDown4_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

			 manager.wheelcollection.Ψ4.setDefaultWheelPosition((int)numericUpDown4->Value);
			 manager.wheelcollection.setUpWheels();
			 Update(0);
		 }
private: System::Void numericUpDown5_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

			 manager.wheelcollection.Ψ5.setDefaultWheelPosition((int)numericUpDown5->Value);
			 manager.wheelcollection.setUpWheels();
			 Update(0);
		 }
private: System::Void numericUpDown6_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

			 manager.wheelcollection.Μ37.setDefaultWheelPosition((int)numericUpDown6->Value);
			 manager.wheelcollection.setUpWheels();
			 Update(0);
		 }
private: System::Void numericUpDown7_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

			  manager.wheelcollection.Μ61.setDefaultWheelPosition((int)numericUpDown7->Value);
			  manager.wheelcollection.setUpWheels();
			 Update(0);
		 }
private: System::Void numericUpDown12_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

			 manager.wheelcollection.Χ1.setDefaultWheelPosition((int)numericUpDown12->Value);
			 manager.wheelcollection.setUpWheels();
			 Update(0);
		 }
private: System::Void numericUpDown11_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

			 manager.wheelcollection.Χ2.setDefaultWheelPosition((int)numericUpDown11->Value);
			 manager.wheelcollection.setUpWheels();
			 Update(0);
		 }
private: System::Void numericUpDown10_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

			 manager.wheelcollection.Χ3.setDefaultWheelPosition((int)numericUpDown10->Value);
			 manager.wheelcollection.setUpWheels();
			 Update(0);
		 }
private: System::Void numericUpDown9_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

			 manager.wheelcollection.Χ4.setDefaultWheelPosition((int)numericUpDown9->Value);
			 manager.wheelcollection.setUpWheels();
			 Update(0);
		 }
private: System::Void numericUpDown8_ValueChanged(System::Object^  sender, System::EventArgs^  e) {


			 manager.wheelcollection.Χ5.setDefaultWheelPosition((int)numericUpDown8->Value);
			 manager.wheelcollection.setUpWheels();
			 Update(0);
		 }

// The button that randomises the initial wheel positions.
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

			 // Creates a completely random PIN.
			 // Sets it into the Lorenz Machines' code.
			 manager.RandomisePIN();	 

			 // Reset wheels.
			 manager.wheelcollection.setUpWheels();
			 Update(0);

		 }

// The button that resets the initial wheel positions.
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				
				// Sets all wheel's default positions back to one.
				manager.wheelcollection.Ψ1.setDefaultWheelPosition( 1 );
                manager.wheelcollection.Ψ2.setDefaultWheelPosition( 1 );
                manager.wheelcollection.Ψ3.setDefaultWheelPosition( 1 );
                manager.wheelcollection.Ψ4.setDefaultWheelPosition( 1 );
                manager.wheelcollection.Ψ5.setDefaultWheelPosition( 1 );
                manager.wheelcollection.Μ37.setDefaultWheelPosition( 1 );
                manager.wheelcollection.Μ61.setDefaultWheelPosition( 1 );
                manager.wheelcollection.Χ1.setDefaultWheelPosition( 1 );
                manager.wheelcollection.Χ2.setDefaultWheelPosition( 1 );
                manager.wheelcollection.Χ3.setDefaultWheelPosition( 1 );
                manager.wheelcollection.Χ4.setDefaultWheelPosition( 1 );
                manager.wheelcollection.Χ5.setDefaultWheelPosition( 1 );

				// Update the numbered boxes to reflect the initial positions.
				numericUpDown1->Text = "1";
				numericUpDown2->Text = "1";
				numericUpDown3->Text = "1";
				numericUpDown4->Text = "1";
				numericUpDown5->Text = "1";
				numericUpDown6->Text = "1";
				numericUpDown7->Text = "1";
				numericUpDown8->Text = "1";
				numericUpDown9->Text = "1";
				numericUpDown10->Text = "1";
				numericUpDown11->Text = "1";
				numericUpDown12->Text = "1";

				// Reset wheels and update the LorenzMachine GUI.
				manager.wheelcollection.setUpWheels();
				Update(0);

		 }

// The button that randomises the PIN data.
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {

			// Generate temporary string to store the random PIN data.
			std::string temp = "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"; 

			// Creates temporary int to store the integer value of the PIN data.
			int newPin[501];

			// Randomises the ints and stores their individual values into our temporary string.
			for ( int i = 0; i < 501; i++ )
			{
				newPin[i] = rand() % 2;
				temp[i] += newPin[i];

			}

			// Sets the new PIN data in the Lorenz Machine, resets the wheels and updates the GUI.
			manager.wheelcollection.setAllPinData(temp);
		    manager.wheelcollection.setUpWheels();
		    Update(0);

		 }

// The button that sets the PIN data from a text box.
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

			 // Set PIN data from text box.
			 std::string newPINdata=msclr::interop::marshal_as< std::string >( richTextBox3->Text );

			 int count = 0;
			 bool invalid = false;

			 // Count every character in the new PIN data.
			 for (size_t i = 0; i < newPINdata.size(); i++)
			 {
				 count++;

				 // If a character in the new PIN data is not a 0 or a 1 then note it as invalid.
				 if ( newPINdata[i] != '0' && newPINdata[i] != '1')
				 {
					 invalid = true;
				 }
			 }

			 // If the new PIN data isn't 501 characters and the characters aren't invalid.
			 if ( count == 501 && invalid == false )
			 {
				manager.wheelcollection.setAllPinData(newPINdata);
			 }
			 else
			 {
				 richTextBox3->Text = "The PIN you entered was invalid. Check that your PIN is 501 characters and that they are all either 0 or 1.";
			 }
			 
			 // Reset wheels and update the GUI.
			 manager.wheelcollection.setUpWheels();
			 Update(0);
		 }

// The button that sets the PIN data to the public PIN.
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			manager.wheelcollection.setAllPinData(manager.pindata.getPublicPin());
		    manager.wheelcollection.setUpWheels();
		    Update(0);
		 }

// The button that saves a configuration file.
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {

		 }

// The button that loads a configuration file.
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		
		openFileDialog1->Filter = "LSZ40 Configuration|*.lconf";
		openFileDialog1->Title = "Select a Lorenz SZ40 configuration file";

		// Open load file dialog.
		if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			// Recieve the location that the user selected.
            System::IO::StreamReader(openFileDialog1->FileName);

			String^ config1 = openFileDialog1->FileName;
			configuration = msclr::interop::marshal_as<std::string>(config1);
			

			//NOT WORKING AT ALL. REWRITE FROM SCRATCH
			//manager.LoadConfig(configuration);


			Update(0);


		

      }
}

};


}

