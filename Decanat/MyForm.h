#pragma once
ref class MyForm;

#include <mysql.h>
#include "Header.h"
namespace Decanat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	
	
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Decan *D;
	private: System::Windows::Forms::ComboBox^  comboBox9;
	public:
	private: System::Windows::Forms::ComboBox^  comboBox8;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::GroupBox^  groupBox9;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::ComboBox^  comboBox10;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;


	public:
		int Vkladka = 1;


	public: MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	public: System::Windows::Forms::TabPage^  tabPage1;
	public: System::Windows::Forms::TabPage^  tabPage2;
	public: System::Windows::Forms::StatusStrip^  statusStrip1;
	public: System::Windows::Forms::MenuStrip^  menuStrip1;
	public: System::Windows::Forms::TabPage^  tabPage3;
	public: System::Windows::Forms::TabPage^  tabPage4;
	public: System::Windows::Forms::Label^  label12;
	public: System::Windows::Forms::Label^  label11;
	public: System::Windows::Forms::Label^  label10;
	public: System::Windows::Forms::Label^  label9;
	public: System::Windows::Forms::Label^  label8;
	public: System::Windows::Forms::Label^  label7;
	public: System::Windows::Forms::Label^  label6;
	public: System::Windows::Forms::Label^  label5;
	public: System::Windows::Forms::Label^  label4;
	public: System::Windows::Forms::Label^  label3;
	public: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::Label^  label1;




	public: System::Windows::Forms::TextBox^  textBox8;
	public: System::Windows::Forms::TextBox^  textBox7;
	public: System::Windows::Forms::TextBox^  textBox6;
	public: System::Windows::Forms::TextBox^  textBox5;


	public: System::Windows::Forms::TextBox^  textBox2;
	public: System::Windows::Forms::TextBox^  textBox1;

	public: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  ����������ToolStripMenuItem;
	public: System::Windows::Forms::GroupBox^  groupBox1;
	public: System::Windows::Forms::GroupBox^  groupBox2;
	public: System::Windows::Forms::ListBox^  listBox1;
	public: System::Windows::Forms::Label^  label15;
	public: System::Windows::Forms::Label^  label14;
	public: System::Windows::Forms::Label^  label13;

	public: System::Windows::Forms::Button^  button1;
	public: System::Windows::Forms::TextBox^  textBox15;
	public: System::Windows::Forms::TextBox^  textBox14;
	public: System::Windows::Forms::TextBox^  textBox13;
	public: System::Windows::Forms::Button^  button4;
	public: System::Windows::Forms::Button^  button3;
	public: System::Windows::Forms::ComboBox^  comboBox2;
	public: System::Windows::Forms::ComboBox^  comboBox1;
	public: System::Windows::Forms::ComboBox^  comboBox4;
	public: System::Windows::Forms::ComboBox^  comboBox3;
	public: System::Windows::Forms::ComboBox^  comboBox5;
	public: System::Windows::Forms::Label^  label16;
	public: System::Windows::Forms::TextBox^  textBox3;
	public: System::Windows::Forms::TextBox^  textBox9;
	public: System::Windows::Forms::Button^  button2;
	public: System::Windows::Forms::Label^  label18;
	public: System::Windows::Forms::Label^  label17;
	public: System::Windows::Forms::TextBox^  textBox11;
	public: System::Windows::Forms::TextBox^  textBox10;

	public: System::Windows::Forms::Label^  label19;
	public: System::Windows::Forms::TextBox^  textBox17;
	public: System::Windows::Forms::CheckBox^  checkBox2;
	public: System::Windows::Forms::TextBox^  textBox16;
	public: System::Windows::Forms::CheckBox^  checkBox1;
	public: System::Windows::Forms::TextBox^  textBox12;
	public: System::Windows::Forms::TreeView^  treeView3;
	public: System::Windows::Forms::TreeView^  treeView2;
	public: System::Windows::Forms::Button^  button5;
	public: System::Windows::Forms::TextBox^  textBox19;
	public: System::Windows::Forms::CheckBox^  checkBox3;
	public: System::Windows::Forms::Button^  button6;
	public: System::Windows::Forms::GroupBox^  groupBox3;
	public: System::Windows::Forms::TreeView^  treeView4;
	public: System::Windows::Forms::Button^  button8;
	public: System::Windows::Forms::Button^  button7;
	public: System::Windows::Forms::Label^  label20;
	public: System::Windows::Forms::TextBox^  textBox20;
	public: System::Windows::Forms::ComboBox^  comboBox6;
public: System::Windows::Forms::ComboBox^  comboBox7;
public: System::Windows::Forms::GroupBox^  groupBox4;
public: System::Windows::Forms::TextBox^  textBox23;
public: System::Windows::Forms::TextBox^  textBox22;
public: System::Windows::Forms::TextBox^  textBox21;
public: System::Windows::Forms::Label^  label23;
public: System::Windows::Forms::Label^  label22;
public: System::Windows::Forms::Label^  label21;
public: System::Windows::Forms::GroupBox^  groupBox5;
public: System::Windows::Forms::RadioButton^  radioButton2;
public: System::Windows::Forms::RadioButton^  radioButton1;
public: System::Windows::Forms::TextBox^  textBox25;
public: System::Windows::Forms::Label^  label25;
public: System::Windows::Forms::Button^  button9;
public: System::Windows::Forms::Label^  label24;
public: System::Windows::Forms::TextBox^  textBox24;
public: System::Windows::Forms::TreeView^  treeView6;
public: System::Windows::Forms::TreeView^  treeView5;
public: System::Windows::Forms::GroupBox^  groupBox6;
public: System::Windows::Forms::Button^  button10;
public: System::Windows::Forms::TextBox^  textBox26;
public: System::Windows::Forms::Label^  label26;
public: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
public: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
public: System::Windows::Forms::ToolStripMenuItem^  ���������ToolStripMenuItem;
public: System::Windows::Forms::GroupBox^  groupBox7;
public: System::Windows::Forms::Button^  button12;
public: System::Windows::Forms::Button^  button11;
public: System::Windows::Forms::Label^  label28;
public: System::Windows::Forms::Label^  label27;






	public:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::TreeView^  treeView1;
			System::Windows::Forms::TreeNode^  treeNode5 = (gcnew System::Windows::Forms::TreeNode(L"������� ��������"));
			System::Windows::Forms::TreeNode^  treeNode6 = (gcnew System::Windows::Forms::TreeNode(L"��������"));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->treeView3 = (gcnew System::Windows::Forms::TreeView());
			this->treeView2 = (gcnew System::Windows::Forms::TreeView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->treeView4 = (gcnew System::Windows::Forms::TreeView());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->treeView6 = (gcnew System::Windows::Forms::TreeView());
			this->treeView5 = (gcnew System::Windows::Forms::TreeView());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->SuspendLayout();
			// 
			// treeView1
			// 
			treeView1->BackColor = System::Drawing::Color::WhiteSmoke;
			treeView1->Location = System::Drawing::Point(8, 36);
			treeView1->Name = L"treeView1";
			treeView1->Size = System::Drawing::Size(227, 446);
			treeView1->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Location = System::Drawing::Point(0, 35);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(896, 520);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Transparent;
			this->tabPage1->Controls->Add(this->textBox9);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(treeView1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(888, 494);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"����������";
			this->tabPage1->Enter += gcnew System::EventHandler(this, &MyForm::tabPage1_Enter);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(8, 10);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(227, 20);
			this->textBox9->TabIndex = 4;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button13);
			this->groupBox1->Controls->Add(this->comboBox9);
			this->groupBox1->Controls->Add(this->comboBox8);
			this->groupBox1->Controls->Add(this->comboBox4);
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->comboBox5);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox11);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->label19);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(239, 10);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(629, 478);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"�������� �� ��������";
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(317, 449);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 8;
			this->button13->Text = L"button13";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// comboBox9
			// 
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Location = System::Drawing::Point(124, 97);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(180, 21);
			this->comboBox9->TabIndex = 7;
			this->comboBox9->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox9_SelectedIndexChanged);
			// 
			// comboBox8
			// 
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Location = System::Drawing::Point(124, 123);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(180, 21);
			this->comboBox8->TabIndex = 6;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"������", L"������������", L"�������" });
			this->comboBox4->Location = System::Drawing::Point(124, 329);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(180, 21);
			this->comboBox4->TabIndex = 5;
			this->comboBox4->Text = L"������/������������";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"����", L"������" });
			this->comboBox3->Location = System::Drawing::Point(124, 303);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(180, 21);
			this->comboBox3->TabIndex = 5;
			this->comboBox3->Text = L"����/������";
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"�� ���������", L"���������", L"�������" });
			this->comboBox5->Location = System::Drawing::Point(124, 251);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(180, 21);
			this->comboBox5->TabIndex = 5;
			this->comboBox5->Text = L"�������/���������";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"������", L"��������", L"������", L"�� ����������" });
			this->comboBox2->Location = System::Drawing::Point(124, 277);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(180, 21);
			this->comboBox2->TabIndex = 5;
			this->comboBox2->Text = L"������/��������";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"�������", L"�������" });
			this->comboBox1->Location = System::Drawing::Point(124, 70);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(180, 21);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->Text = L"�������/�������";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(26, 446);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(125, 26);
			this->button4->TabIndex = 4;
			this->button4->Text = L"��������";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(157, 446);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(147, 26);
			this->button3->TabIndex = 4;
			this->button3->Text = L"��������";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->textBox15);
			this->groupBox2->Controls->Add(this->textBox14);
			this->groupBox2->Controls->Add(this->textBox13);
			this->groupBox2->Controls->Add(this->listBox1);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Location = System::Drawing::Point(336, 18);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(287, 345);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"�������";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(160, 310);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 24);
			this->button2->TabIndex = 6;
			this->button2->Text = L"�������";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(20, 310);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 25);
			this->button1->TabIndex = 5;
			this->button1->Text = L"��������";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(88, 283);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(188, 20);
			this->textBox15->TabIndex = 4;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(88, 261);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(188, 20);
			this->textBox14->TabIndex = 4;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(88, 238);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(188, 20);
			this->textBox13->TabIndex = 4;
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(16, 21);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(260, 199);
			this->listBox1->TabIndex = 3;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(13, 286);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(57, 13);
			this->label15->TabIndex = 2;
			this->label15->Text = L"��������";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(13, 264);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(33, 13);
			this->label14->TabIndex = 1;
			this->label14->Text = L"����";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(13, 241);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 13);
			this->label13->TabIndex = 0;
			this->label13->Text = L"�����";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(124, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(180, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(23, 332);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(94, 13);
			this->label12->TabIndex = 2;
			this->label12->Text = L"������ ��������";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(124, 45);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(180, 20);
			this->textBox2->TabIndex = 1;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(23, 306);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(75, 13);
			this->label11->TabIndex = 2;
			this->label11->Text = L"��� ��������";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(23, 280);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 13);
			this->label10->TabIndex = 2;
			this->label10->Text = L"������";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(23, 254);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(67, 13);
			this->label9->TabIndex = 2;
			this->label9->Text = L"���������";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(124, 147);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(180, 20);
			this->textBox5->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(23, 228);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(78, 13);
			this->label8->TabIndex = 2;
			this->label8->Text = L"������������";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(124, 173);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(180, 20);
			this->textBox6->TabIndex = 1;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(23, 411);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(52, 13);
			this->label18->TabIndex = 2;
			this->label18->Text = L"�������";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(23, 385);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(32, 13);
			this->label17->TabIndex = 2;
			this->label17->Text = L"Email";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(24, 358);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(74, 13);
			this->label16->TabIndex = 2;
			this->label16->Text = L"�����������";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(23, 202);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"�������";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(124, 408);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(180, 20);
			this->textBox11->TabIndex = 1;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(124, 382);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(180, 20);
			this->textBox10->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(124, 356);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(180, 20);
			this->textBox3->TabIndex = 1;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(124, 199);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(180, 20);
			this->textBox7->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(23, 176);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"����� ��������";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(124, 225);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(180, 20);
			this->textBox8->TabIndex = 1;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(24, 126);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(53, 13);
			this->label19->TabIndex = 2;
			this->label19->Text = L"�������";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(23, 150);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"������ ��������";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 100);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"�����������";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(23, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"���";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"���� ��������";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"���";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Transparent;
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->treeView3);
			this->tabPage2->Controls->Add(this->treeView2);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->textBox19);
			this->tabPage2->Controls->Add(this->checkBox3);
			this->tabPage2->Controls->Add(this->textBox17);
			this->tabPage2->Controls->Add(this->checkBox2);
			this->tabPage2->Controls->Add(this->textBox16);
			this->tabPage2->Controls->Add(this->checkBox1);
			this->tabPage2->Controls->Add(this->textBox12);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(888, 494);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"��������� ���������";
			this->tabPage2->Enter += gcnew System::EventHandler(this, &MyForm::tabPage2_Enter);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(254, 451);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(240, 23);
			this->button6->TabIndex = 6;
			this->button6->Text = L"��������";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// treeView3
			// 
			this->treeView3->Location = System::Drawing::Point(254, 34);
			this->treeView3->Name = L"treeView3";
			treeNode5->Name = L"Root";
			treeNode5->Text = L"������� ��������";
			this->treeView3->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode5 });
			this->treeView3->Size = System::Drawing::Size(240, 411);
			this->treeView3->TabIndex = 5;
			this->treeView3->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MyForm::treeView3_AfterSelect);
			// 
			// treeView2
			// 
			this->treeView2->Location = System::Drawing::Point(8, 34);
			this->treeView2->Name = L"treeView2";
			this->treeView2->Size = System::Drawing::Size(240, 440);
			this->treeView2->TabIndex = 5;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(500, 236);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(147, 25);
			this->button5->TabIndex = 4;
			this->button5->Text = L"��������";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(500, 199);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(147, 20);
			this->textBox19->TabIndex = 3;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(500, 176);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(106, 17);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"������� ������";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(500, 139);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(147, 20);
			this->textBox17->TabIndex = 3;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(500, 116);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(117, 17);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->Text = L"������� �������";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(500, 86);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(147, 20);
			this->textBox16->TabIndex = 3;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(500, 63);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(139, 17);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"������� �����������";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(8, 8);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(240, 20);
			this->textBox12->TabIndex = 1;
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::Transparent;
			this->tabPage3->Controls->Add(this->groupBox4);
			this->tabPage3->Controls->Add(this->groupBox3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(888, 494);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"��������";
			this->tabPage3->Enter += gcnew System::EventHandler(this, &MyForm::tabPage3_Enter);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->textBox23);
			this->groupBox4->Controls->Add(this->textBox22);
			this->groupBox4->Controls->Add(this->textBox21);
			this->groupBox4->Controls->Add(this->label23);
			this->groupBox4->Controls->Add(this->label22);
			this->groupBox4->Controls->Add(this->label21);
			this->groupBox4->Location = System::Drawing::Point(369, 6);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(286, 101);
			this->groupBox4->TabIndex = 1;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"�������� ��������";
			// 
			// textBox23
			// 
			this->textBox23->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox23->Location = System::Drawing::Point(124, 72);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(155, 20);
			this->textBox23->TabIndex = 3;
			// 
			// textBox22
			// 
			this->textBox22->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox22->Location = System::Drawing::Point(124, 46);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(155, 20);
			this->textBox22->TabIndex = 3;
			// 
			// textBox21
			// 
			this->textBox21->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox21->Location = System::Drawing::Point(124, 19);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(155, 20);
			this->textBox21->TabIndex = 3;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(15, 75);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(45, 13);
			this->label23->TabIndex = 2;
			this->label23->Text = L"������";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(15, 49);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(94, 13);
			this->label22->TabIndex = 1;
			this->label22->Text = L"����� ��������";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(15, 22);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(69, 13);
			this->label21->TabIndex = 0;
			this->label21->Text = L"����� �����";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->treeView4);
			this->groupBox3->Controls->Add(this->button8);
			this->groupBox3->Controls->Add(this->button7);
			this->groupBox3->Controls->Add(this->label20);
			this->groupBox3->Controls->Add(this->textBox20);
			this->groupBox3->Controls->Add(this->comboBox7);
			this->groupBox3->Controls->Add(this->comboBox6);
			this->groupBox3->Location = System::Drawing::Point(8, 6);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(355, 482);
			this->groupBox3->TabIndex = 0;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"��������";
			// 
			// treeView4
			// 
			this->treeView4->Location = System::Drawing::Point(9, 46);
			this->treeView4->Name = L"treeView4";
			treeNode6->Name = L"Root";
			treeNode6->Text = L"��������";
			this->treeView4->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode6 });
			this->treeView4->Size = System::Drawing::Size(336, 352);
			this->treeView4->TabIndex = 4;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(177, 433);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(168, 33);
			this->button8->TabIndex = 3;
			this->button8->Text = L"�������";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(9, 433);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(168, 33);
			this->button7->TabIndex = 3;
			this->button7->Text = L"��������";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(6, 410);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(52, 13);
			this->label20->TabIndex = 1;
			this->label20->Text = L"�������";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(75, 407);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(270, 20);
			this->textBox20->TabIndex = 2;
			// 
			// comboBox7
			// 
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Location = System::Drawing::Point(177, 19);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(168, 21);
			this->comboBox7->TabIndex = 0;
			this->comboBox7->Text = L"�������";
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(9, 19);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(162, 21);
			this->comboBox6->TabIndex = 0;
			this->comboBox6->Text = L"�����������";
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::Transparent;
			this->tabPage4->Controls->Add(this->groupBox7);
			this->tabPage4->Controls->Add(this->groupBox6);
			this->tabPage4->Controls->Add(this->groupBox5);
			this->tabPage4->Controls->Add(this->label24);
			this->tabPage4->Controls->Add(this->textBox24);
			this->tabPage4->Controls->Add(this->treeView6);
			this->tabPage4->Controls->Add(this->treeView5);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(888, 494);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"������";
			this->tabPage4->Enter += gcnew System::EventHandler(this, &MyForm::tabPage4_Enter);
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->button12);
			this->groupBox7->Controls->Add(this->button11);
			this->groupBox7->Controls->Add(this->label28);
			this->groupBox7->Controls->Add(this->label27);
			this->groupBox7->Location = System::Drawing::Point(560, 228);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(322, 122);
			this->groupBox7->TabIndex = 7;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"����������";
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(243, 87);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(73, 26);
			this->button12->TabIndex = 1;
			this->button12->Text = L"�������";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(243, 42);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(73, 26);
			this->button11->TabIndex = 1;
			this->button11->Text = L"��������";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Visible = false;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(14, 71);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(138, 13);
			this->label28->TabIndex = 0;
			this->label28->Text = L"������� �������� ������";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(14, 26);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(246, 13);
			this->label27->TabIndex = 0;
			this->label27->Text = L"�������� �������� �������������� �������";
			this->label27->Visible = false;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->button10);
			this->groupBox6->Controls->Add(this->textBox26);
			this->groupBox6->Controls->Add(this->label26);
			this->groupBox6->Location = System::Drawing::Point(560, 177);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(322, 45);
			this->groupBox6->TabIndex = 6;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"������ �� ��������";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(240, 16);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 3;
			this->button10->Text = L"��������";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(100, 19);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(93, 20);
			this->textBox26->TabIndex = 5;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(14, 22);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(45, 13);
			this->label26->TabIndex = 4;
			this->label26->Text = L"������";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->radioButton2);
			this->groupBox5->Controls->Add(this->radioButton1);
			this->groupBox5->Controls->Add(this->textBox25);
			this->groupBox5->Controls->Add(this->label25);
			this->groupBox5->Controls->Add(this->button9);
			this->groupBox5->Location = System::Drawing::Point(560, 44);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(322, 123);
			this->groupBox5->TabIndex = 5;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"�������� ������";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(82, 80);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(111, 17);
			this->radioButton2->TabIndex = 7;
			this->radioButton2->Text = L"�������� ������";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(82, 57);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(111, 17);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"�������� ������";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(77, 29);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(239, 20);
			this->textBox25->TabIndex = 5;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(14, 29);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(57, 13);
			this->label25->TabIndex = 4;
			this->label25->Text = L"��������";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(241, 94);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 3;
			this->button9->Text = L"��������";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(365, 21);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(102, 13);
			this->label24->TabIndex = 2;
			this->label24->Text = L"������ ���������";
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(8, 18);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(269, 20);
			this->textBox24->TabIndex = 1;
			// 
			// treeView6
			// 
			this->treeView6->Location = System::Drawing::Point(283, 44);
			this->treeView6->Name = L"treeView6";
			this->treeView6->Size = System::Drawing::Size(271, 444);
			this->treeView6->TabIndex = 0;
			// 
			// treeView5
			// 
			this->treeView5->Location = System::Drawing::Point(6, 44);
			this->treeView5->Name = L"treeView5";
			this->treeView5->Size = System::Drawing::Size(271, 444);
			this->treeView5->TabIndex = 0;
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 558);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(896, 22);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 17);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->����ToolStripMenuItem,
					this->������ToolStripMenuItem, this->������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(896, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"�����";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�����ToolStripMenuItem });
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(108, 22);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->���������ToolStripMenuItem });
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(56, 20);
			this->������ToolStripMenuItem->Text = L"�����";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->���������ToolStripMenuItem->Text = L"���������";
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->����������ToolStripMenuItem });
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->������ToolStripMenuItem->Text = L"������";
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->����������ToolStripMenuItem->Text = L"� ���������";
			// 
			// tabPage5
			// 
			this->tabPage5->BackColor = System::Drawing::Color::Transparent;
			this->tabPage5->Controls->Add(this->groupBox9);
			this->tabPage5->Controls->Add(this->groupBox8);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(888, 494);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"�����������";
			this->tabPage5->Click += gcnew System::EventHandler(this, &MyForm::tabPage5_Click);
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label29);
			this->groupBox8->Controls->Add(this->textBox4);
			this->groupBox8->Controls->Add(this->button15);
			this->groupBox8->Controls->Add(this->button14);
			this->groupBox8->Controls->Add(this->listBox2);
			this->groupBox8->Location = System::Drawing::Point(8, 6);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(331, 482);
			this->groupBox8->TabIndex = 0;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"������ � �������������";
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->comboBox10);
			this->groupBox9->Controls->Add(this->label31);
			this->groupBox9->Controls->Add(this->label30);
			this->groupBox9->Controls->Add(this->listBox3);
			this->groupBox9->Controls->Add(this->textBox18);
			this->groupBox9->Controls->Add(this->button16);
			this->groupBox9->Controls->Add(this->button17);
			this->groupBox9->Location = System::Drawing::Point(345, 6);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(331, 482);
			this->groupBox9->TabIndex = 0;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"������ � ���������";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(13, 23);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(308, 394);
			this->listBox2->TabIndex = 0;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(13, 448);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(146, 28);
			this->button14->TabIndex = 1;
			this->button14->Text = L"��������";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(165, 448);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(156, 28);
			this->button15->TabIndex = 1;
			this->button15->Text = L"�������";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(68, 422);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(253, 20);
			this->textBox4->TabIndex = 2;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(10, 425);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(57, 13);
			this->label29->TabIndex = 3;
			this->label29->Text = L"��������";
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(17, 88);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(308, 329);
			this->listBox3->TabIndex = 0;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(17, 448);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(146, 28);
			this->button16->TabIndex = 1;
			this->button16->Text = L"��������";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(169, 448);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(156, 28);
			this->button17->TabIndex = 1;
			this->button17->Text = L"�������";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(72, 422);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(253, 20);
			this->textBox18->TabIndex = 2;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(14, 425);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(57, 13);
			this->label30->TabIndex = 3;
			this->label30->Text = L"��������";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(20, 26);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(126, 13);
			this->label31->TabIndex = 4;
			this->label31->Text = L"�������� �����������";
			// 
			// comboBox10
			// 
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Location = System::Drawing::Point(17, 50);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(308, 21);
			this->comboBox10->TabIndex = 5;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(896, 580);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"������� ����� ��������� - �������";
			this->Activated += gcnew System::EventHandler(this, &MyForm::button4_Click);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		
#pragma endregion
		public: char * StrToChar(String ^s) {

			IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(s);
			char* nativeString = static_cast<char*>(ptrToNativeString.ToPointer());		
			return nativeString;
		}


public: void LoadTree() {
	MYSQL_RES *res;
	MYSQL_ROW row;

//	D->mydb->RawSQL("insert into aspirant(fio,Direction)Values('������','05.13.19.')");
	D->mydb->RawSQL("select data from Exam");
	res = D->mydb->res;

	while ((row = mysql_fetch_row(res))) {
		String ^s = gcnew String(row[0]);
		this->listBox1->Items->Add(s);
	}
}
public: void LoadProfiles1(/*��������� ������� � ���������� ������*/) {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s,^d;
	
	this->comboBox8->Items->Clear();
	this->comboBox8->Text = "";
	this->Text = "ok";
	if (this->comboBox9->SelectedIndex == -1) return;
	s = this->comboBox9->SelectedItem->ToString();


	d = gcnew String("select P.name, D.id, D.codename, P.directId from Directions as D, Profiles as P where D.codename='" + s + "' and P.directId=D.id");

	D->mydb->RawSQL(StrToChar(d));
	res = D->mydb->res;
	while ((row = mysql_fetch_row(res))) {
		s = gcnew String(row[0]);
		this->comboBox8->Items->Add(s);
	}
}
public: void LoadDirections() {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s,^id;

	D->mydb->RawSQL("select id, codename from Directions");
	res = D->mydb->res;

	this->comboBox9->Items->Clear();
	this->comboBox9->Text = "";
	while ((row = mysql_fetch_row(res))) {
		id = gcnew String(row[0]);
			s = gcnew String(row[1]);			
			this->comboBox9->Items->Add(s);					
	}



}

public: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
	}
public: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
public: System::Void treeView3_AfterSelect(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e) {
}
public: System::Void �����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	// ���� �����
	this->Close();
}

public: System::Void MyForm_Activated(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	//LoadTree();
	//D->ClearTables();	
	LoadDirections();
	//LoadProfiles1();

}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	D = new Decan();
}
private: System::Void tabControl1_EnabledChanged(System::Object^  sender, System::EventArgs^  e) {
}



private: System::Void tabPage1_Enter(System::Object^  sender, System::EventArgs^  e) {
	this->Vkladka = 1;
}
private: System::Void tabPage2_Enter(System::Object^  sender, System::EventArgs^  e) {
	this->Vkladka = 2;	
}
private: System::Void tabPage3_Enter(System::Object^  sender, System::EventArgs^  e) {
	this->Vkladka = 3;
}
private: System::Void tabPage4_Enter(System::Object^  sender, System::EventArgs^  e) {
	this->Vkladka = 4;
}

private: System::Void comboBox9_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	LoadProfiles1();
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {

	 
}
private: System::Void tabPage5_Click(System::Object^  sender, System::EventArgs^  e) {
}
};

}
