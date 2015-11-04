#pragma once
ref class MyForm;

#include <mysql.h>
#include <stdlib.h>
#include <stdio.h>
#include "Header.h"
namespace Decanat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace	System::Text;

	/// <summary>
	/// Сводка для MyForm
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
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::TextBox^  textBox27;
	public: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker3;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	public: System::Windows::Forms::Label^  label34;
	private:
	public: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TreeView^  treeView1;
	public:
	public:

	private:

	private:


	public:
		int Vkladka = 1;
	private: System::Windows::Forms::TreeView^  treeView7;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker4;
	private: System::Windows::Forms::Label^  label35;
	public: System::Windows::Forms::TextBox^  textBox23;
	private:
	public: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::ComboBox^  comboBox11;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::ComboBox^  comboBox13;
	private: System::Windows::Forms::ComboBox^  comboBox12;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::ComboBox^  comboBox14;
	private: System::Windows::Forms::ComboBox^  comboBox15;
	public:
	public:
		int SelectedStudent = -1;


	public: MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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
	public: System::Windows::Forms::TabPage^  tabPage4;

	public: System::Windows::Forms::TabPage^  tabPage3;


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





	public: System::Windows::Forms::TextBox^  textBox1;

	public: System::Windows::Forms::ToolStripMenuItem^  файлToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  помощьToolStripMenuItem;
	public: System::Windows::Forms::ToolStripMenuItem^  оПрограммеToolStripMenuItem;
	public: System::Windows::Forms::GroupBox^  groupBox1;
	public: System::Windows::Forms::GroupBox^  groupBox2;

	public: System::Windows::Forms::Label^  label15;
	public: System::Windows::Forms::Label^  label14;
	public: System::Windows::Forms::Label^  label13;

	public: System::Windows::Forms::Button^  button1;
	public: System::Windows::Forms::TextBox^  textBox15;

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

	public: System::Windows::Forms::CheckBox^  checkBox2;


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




public: System::Windows::Forms::Label^  label22;

public: System::Windows::Forms::GroupBox^  groupBox5;


public: System::Windows::Forms::TextBox^  textBox25;
public: System::Windows::Forms::Label^  label25;
public: System::Windows::Forms::Button^  button9;
public: System::Windows::Forms::Label^  label24;
public: System::Windows::Forms::TextBox^  textBox24;
public: System::Windows::Forms::TreeView^  treeView6;
public: System::Windows::Forms::TreeView^  treeView5;
public: System::Windows::Forms::GroupBox^  groupBox6;
public: System::Windows::Forms::Button^  button10;

public: System::Windows::Forms::Label^  label26;
public: System::Windows::Forms::ToolStripMenuItem^  выходToolStripMenuItem;
public: System::Windows::Forms::ToolStripMenuItem^  ывывыфToolStripMenuItem;
public: System::Windows::Forms::ToolStripMenuItem^  настройкиToolStripMenuItem;
public: System::Windows::Forms::GroupBox^  groupBox7;
public: System::Windows::Forms::Button^  button12;
public: System::Windows::Forms::Button^  button11;
public: System::Windows::Forms::Label^  label28;
public: System::Windows::Forms::Label^  label27;

	public:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::TreeNode^  treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"Предметы"));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker3 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
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
			this->dateTimePicker4 = (gcnew System::Windows::Forms::DateTimePicker());
			this->treeView7 = (gcnew System::Windows::Forms::TreeView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
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
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->comboBox13 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox12 = (gcnew System::Windows::Forms::ComboBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->treeView3 = (gcnew System::Windows::Forms::TreeView());
			this->treeView2 = (gcnew System::Windows::Forms::TreeView());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox15 = (gcnew System::Windows::Forms::ComboBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->comboBox14 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->treeView6 = (gcnew System::Windows::Forms::TreeView());
			this->treeView5 = (gcnew System::Windows::Forms::TreeView());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->comboBox11 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->treeView4 = (gcnew System::Windows::Forms::TreeView());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ывывыфToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->настройкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->помощьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
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
			this->tabControl1->Size = System::Drawing::Size(896, 561);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Transparent;
			this->tabPage1->Controls->Add(this->label35);
			this->tabPage1->Controls->Add(this->treeView1);
			this->tabPage1->Controls->Add(this->textBox9);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(888, 535);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Контенгент";
			this->tabPage1->Enter += gcnew System::EventHandler(this, &MyForm::tabPage1_Enter);
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(6, 13);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(47, 13);
			this->label35->TabIndex = 6;
			this->label35->Text = L"Фильтр";
			// 
			// treeView1
			// 
			this->treeView1->Location = System::Drawing::Point(9, 36);
			this->treeView1->Name = L"treeView1";
			this->treeView1->Size = System::Drawing::Size(226, 493);
			this->treeView1->TabIndex = 5;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MyForm::treeView1_AfterSelect);
			this->treeView1->NodeMouseClick += gcnew System::Windows::Forms::TreeNodeMouseClickEventHandler(this, &MyForm::treeView1_NodeMouseClick);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(59, 10);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(177, 20);
			this->textBox9->TabIndex = 4;
			this->textBox9->TabStop = false;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dateTimePicker3);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->dateTimePicker2);
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
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->label34);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->textBox11);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
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
			this->groupBox1->Size = System::Drawing::Size(629, 519);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Сведения по студенту";
			// 
			// dateTimePicker3
			// 
			this->dateTimePicker3->Location = System::Drawing::Point(124, 202);
			this->dateTimePicker3->Name = L"dateTimePicker3";
			this->dateTimePicker3->Size = System::Drawing::Size(180, 20);
			this->dateTimePicker3->TabIndex = 20;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(124, 44);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(180, 20);
			this->dateTimePicker1->TabIndex = 20;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(124, 176);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(180, 20);
			this->dateTimePicker2->TabIndex = 20;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(317, 490);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 0;
			this->button13->TabStop = false;
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
			this->comboBox9->Sorted = true;
			this->comboBox9->TabIndex = 4;
			this->comboBox9->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox9_SelectedIndexChanged);
			// 
			// comboBox8
			// 
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Location = System::Drawing::Point(124, 123);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(180, 21);
			this->comboBox8->TabIndex = 5;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Бюджет", L"Коммерческий", L"Договор" });
			this->comboBox4->Location = System::Drawing::Point(124, 357);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(180, 21);
			this->comboBox4->TabIndex = 13;
			this->comboBox4->Text = L"Бюджет/Коммерческий";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Очно", L"Заочно" });
			this->comboBox3->Location = System::Drawing::Point(124, 331);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(180, 21);
			this->comboBox3->TabIndex = 12;
			this->comboBox3->Text = L"Очно/Заочно";
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Не нуждается", L"Нуждается", L"Заселен" });
			this->comboBox5->Location = System::Drawing::Point(124, 279);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(180, 21);
			this->comboBox5->TabIndex = 10;
			this->comboBox5->Text = L"Заселен/Нуждается";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Учится", L"Отчислен", L"Академ", L"Не определено" });
			this->comboBox2->Location = System::Drawing::Point(124, 305);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(180, 21);
			this->comboBox2->TabIndex = 11;
			this->comboBox2->Text = L"Учится/Отчислен";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Мужской", L"Женский" });
			this->comboBox1->Location = System::Drawing::Point(124, 70);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(180, 21);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->Text = L"Мужской/Женский";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(26, 487);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(125, 26);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Добавить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(157, 487);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(147, 26);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Изменить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->dateTimePicker4);
			this->groupBox2->Controls->Add(this->treeView7);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->textBox15);
			this->groupBox2->Controls->Add(this->textBox13);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Location = System::Drawing::Point(336, 18);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(287, 345);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Приказы";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm::groupBox2_Enter);
			// 
			// dateTimePicker4
			// 
			this->dateTimePicker4->Location = System::Drawing::Point(88, 260);
			this->dateTimePicker4->Name = L"dateTimePicker4";
			this->dateTimePicker4->Size = System::Drawing::Size(188, 20);
			this->dateTimePicker4->TabIndex = 25;
			// 
			// treeView7
			// 
			this->treeView7->Location = System::Drawing::Point(7, 18);
			this->treeView7->Name = L"treeView7";
			this->treeView7->Size = System::Drawing::Size(274, 210);
			this->treeView7->TabIndex = 24;
			this->treeView7->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MyForm::treeView7_AfterSelect);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(160, 310);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 24);
			this->button2->TabIndex = 23;
			this->button2->TabStop = false;
			this->button2->Text = L"Удалить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(20, 310);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 25);
			this->button1->TabIndex = 22;
			this->button1->TabStop = false;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(88, 283);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(188, 20);
			this->textBox15->TabIndex = 21;
			this->textBox15->TabStop = false;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(88, 238);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(188, 20);
			this->textBox13->TabIndex = 19;
			this->textBox13->TabStop = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(13, 286);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(57, 13);
			this->label15->TabIndex = 2;
			this->label15->Text = L"Описание";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(13, 264);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(33, 13);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Дата";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(13, 241);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 13);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Номер";
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
			this->label12->Location = System::Drawing::Point(23, 360);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(94, 13);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Основа обучения";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(23, 334);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(75, 13);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Вид обучения";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(23, 308);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 13);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Статус";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(23, 282);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(67, 13);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Общежитие";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(23, 256);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(78, 13);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Руководитель";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(23, 439);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(52, 13);
			this->label18->TabIndex = 2;
			this->label18->Text = L"Телефон";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(23, 413);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(32, 13);
			this->label17->TabIndex = 2;
			this->label17->Text = L"Email";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(24, 386);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(74, 13);
			this->label16->TabIndex = 2;
			this->label16->Text = L"Гражданство";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(23, 153);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(42, 13);
			this->label34->TabIndex = 2;
			this->label34->Text = L"Группа";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(23, 230);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(52, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Кафедра";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(124, 436);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(180, 20);
			this->textBox11->TabIndex = 16;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(124, 410);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(180, 20);
			this->textBox10->TabIndex = 15;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(124, 384);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(180, 20);
			this->textBox3->TabIndex = 14;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(124, 150);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(180, 20);
			this->textBox2->TabIndex = 8;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(124, 227);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(180, 20);
			this->textBox7->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(23, 204);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Конец обучения";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(124, 253);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(180, 20);
			this->textBox8->TabIndex = 9;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(24, 126);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(53, 13);
			this->label19->TabIndex = 2;
			this->label19->Text = L"Профиль";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(23, 178);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Начало обучения";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 100);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Направление";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(23, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Пол";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Дата рождения";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"ФИО";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Transparent;
			this->tabPage2->Controls->Add(this->label39);
			this->tabPage2->Controls->Add(this->comboBox13);
			this->tabPage2->Controls->Add(this->comboBox12);
			this->tabPage2->Controls->Add(this->label37);
			this->tabPage2->Controls->Add(this->label38);
			this->tabPage2->Controls->Add(this->label36);
			this->tabPage2->Controls->Add(this->label21);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->treeView3);
			this->tabPage2->Controls->Add(this->treeView2);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->textBox19);
			this->tabPage2->Controls->Add(this->checkBox3);
			this->tabPage2->Controls->Add(this->checkBox2);
			this->tabPage2->Controls->Add(this->textBox12);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(888, 535);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Групповая обработка";
			this->tabPage2->Enter += gcnew System::EventHandler(this, &MyForm::tabPage2_Enter);
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(500, 64);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(75, 13);
			this->label39->TabIndex = 12;
			this->label39->Text = L"Направление";
			// 
			// comboBox13
			// 
			this->comboBox13->FormattingEnabled = true;
			this->comboBox13->Location = System::Drawing::Point(660, 87);
			this->comboBox13->Name = L"comboBox13";
			this->comboBox13->Size = System::Drawing::Size(147, 21);
			this->comboBox13->TabIndex = 11;
			// 
			// comboBox12
			// 
			this->comboBox12->FormattingEnabled = true;
			this->comboBox12->Location = System::Drawing::Point(660, 61);
			this->comboBox12->Name = L"comboBox12";
			this->comboBox12->Size = System::Drawing::Size(147, 21);
			this->comboBox12->TabIndex = 10;
			this->comboBox12->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox12_SelectedIndexChanged);
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(8, 11);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(47, 13);
			this->label37->TabIndex = 9;
			this->label37->Text = L"Фильтр";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(267, 456);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(222, 13);
			this->label38->TabIndex = 8;
			this->label38->Text = L"Дважды щелкните для удаления студента";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(24, 456);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(213, 13);
			this->label36->TabIndex = 8;
			this->label36->Text = L"Дважды щелкните для выбора студента";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(322, 15);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(116, 13);
			this->label21->TabIndex = 7;
			this->label21->Text = L"Выбранные студенты";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(254, 472);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(240, 23);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Очистить полностью";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// treeView3
			// 
			this->treeView3->Location = System::Drawing::Point(254, 34);
			this->treeView3->Name = L"treeView3";
			this->treeView3->Size = System::Drawing::Size(240, 411);
			this->treeView3->TabIndex = 5;
			this->treeView3->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MyForm::treeView3_AfterSelect);
			this->treeView3->NodeMouseDoubleClick += gcnew System::Windows::Forms::TreeNodeMouseClickEventHandler(this, &MyForm::treeView3_NodeMouseDoubleClick);
			this->treeView3->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::treeView3_MouseDoubleClick);
			// 
			// treeView2
			// 
			this->treeView2->Location = System::Drawing::Point(8, 34);
			this->treeView2->Name = L"treeView2";
			this->treeView2->Size = System::Drawing::Size(240, 411);
			this->treeView2->TabIndex = 5;
			this->treeView2->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MyForm::treeView2_AfterSelect);
			this->treeView2->NodeMouseDoubleClick += gcnew System::Windows::Forms::TreeNodeMouseClickEventHandler(this, &MyForm::treeView2_NodeMouseDoubleClick);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(585, 150);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(147, 25);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Изменить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(660, 113);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(147, 20);
			this->textBox19->TabIndex = 3;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(500, 115);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(121, 17);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"Сменить группу на";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(500, 87);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(132, 17);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->Text = L"Сменить профиль на";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(62, 8);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(186, 20);
			this->textBox12->TabIndex = 1;
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::Transparent;
			this->tabPage3->Controls->Add(this->groupBox7);
			this->tabPage3->Controls->Add(this->groupBox6);
			this->tabPage3->Controls->Add(this->groupBox5);
			this->tabPage3->Controls->Add(this->label33);
			this->tabPage3->Controls->Add(this->label24);
			this->tabPage3->Controls->Add(this->textBox24);
			this->tabPage3->Controls->Add(this->treeView6);
			this->tabPage3->Controls->Add(this->treeView5);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(888, 535);
			this->tabPage3->TabIndex = 3;
			this->tabPage3->Text = L"Оценки";
			this->tabPage3->Enter += gcnew System::EventHandler(this, &MyForm::tabPage3_Enter);
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
			this->groupBox7->Text = L"Управление";
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(243, 87);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(73, 26);
			this->button12->TabIndex = 1;
			this->button12->Text = L"Удалить";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(243, 42);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(73, 26);
			this->button11->TabIndex = 1;
			this->button11->Text = L"Добавить";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(14, 94);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(154, 13);
			this->label28->TabIndex = 0;
			this->label28->Text = L"Удалить предмет или работу";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(14, 26);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(264, 13);
			this->label27->TabIndex = 0;
			this->label27->Text = L"Заполнить предметами соответстующие профилю";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->comboBox15);
			this->groupBox6->Controls->Add(this->button10);
			this->groupBox6->Controls->Add(this->label26);
			this->groupBox6->Location = System::Drawing::Point(560, 177);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(322, 45);
			this->groupBox6->TabIndex = 6;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Оценка по предмету";
			// 
			// comboBox15
			// 
			this->comboBox15->FormattingEnabled = true;
			this->comboBox15->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Отлично", L"Хорошо", L"Удовлетворительно", L"Зачет" });
			this->comboBox15->Location = System::Drawing::Point(88, 16);
			this->comboBox15->Name = L"comboBox15";
			this->comboBox15->Size = System::Drawing::Size(121, 21);
			this->comboBox15->TabIndex = 5;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(240, 16);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 3;
			this->button10->Text = L"Изменить";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(14, 19);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(45, 13);
			this->label26->TabIndex = 4;
			this->label26->Text = L"Оценка";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label40);
			this->groupBox5->Controls->Add(this->comboBox14);
			this->groupBox5->Controls->Add(this->textBox25);
			this->groupBox5->Controls->Add(this->label25);
			this->groupBox5->Controls->Add(this->button9);
			this->groupBox5->Location = System::Drawing::Point(560, 44);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(322, 123);
			this->groupBox5->TabIndex = 5;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Добавить работу";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(6, 57);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(78, 13);
			this->label40->TabIndex = 7;
			this->label40->Text = L"Тип предмета";
			// 
			// comboBox14
			// 
			this->comboBox14->FormattingEnabled = true;
			this->comboBox14->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Курсовая работа", L"Дипломная работа" });
			this->comboBox14->Location = System::Drawing::Point(86, 54);
			this->comboBox14->Name = L"comboBox14";
			this->comboBox14->Size = System::Drawing::Size(123, 21);
			this->comboBox14->TabIndex = 6;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(86, 29);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(230, 20);
			this->textBox25->TabIndex = 5;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(6, 32);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(57, 13);
			this->label25->TabIndex = 4;
			this->label25->Text = L"Название";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(241, 94);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 3;
			this->button9->Text = L"Добавить";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(112, 21);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(47, 13);
			this->label33->TabIndex = 2;
			this->label33->Text = L"Студент";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(365, 21);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(102, 13);
			this->label24->TabIndex = 2;
			this->label24->Text = L"Список предметов";
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(8, 44);
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
			this->treeView6->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MyForm::treeView6_AfterSelect);
			// 
			// treeView5
			// 
			this->treeView5->Location = System::Drawing::Point(6, 73);
			this->treeView5->Name = L"treeView5";
			this->treeView5->Size = System::Drawing::Size(271, 415);
			this->treeView5->TabIndex = 0;
			this->treeView5->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MyForm::treeView5_AfterSelect);
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::Transparent;
			this->tabPage4->Controls->Add(this->groupBox4);
			this->tabPage4->Controls->Add(this->groupBox3);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(888, 535);
			this->tabPage4->TabIndex = 2;
			this->tabPage4->Text = L"Предметы";
			this->tabPage4->Enter += gcnew System::EventHandler(this, &MyForm::tabPage4_Enter);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton4);
			this->groupBox4->Controls->Add(this->radioButton3);
			this->groupBox4->Controls->Add(this->comboBox11);
			this->groupBox4->Controls->Add(this->textBox23);
			this->groupBox4->Controls->Add(this->label23);
			this->groupBox4->Controls->Add(this->label22);
			this->groupBox4->Location = System::Drawing::Point(369, 6);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(286, 122);
			this->groupBox4->TabIndex = 1;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Свойства предмета";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(19, 99);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(189, 17);
			this->radioButton4->TabIndex = 6;
			this->radioButton4->Text = L"Предмет для текущего профиля";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Checked = true;
			this->radioButton3->Location = System::Drawing::Point(19, 76);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(192, 17);
			this->radioButton3->TabIndex = 5;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Предмет для всего направления";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// comboBox11
			// 
			this->comboBox11->FormattingEnabled = true;
			this->comboBox11->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Экзамен", L"Зачет" });
			this->comboBox11->Location = System::Drawing::Point(125, 20);
			this->comboBox11->Name = L"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(155, 21);
			this->comboBox11->TabIndex = 4;
			// 
			// textBox23
			// 
			this->textBox23->BackColor = System::Drawing::SystemColors::Window;
			this->textBox23->Location = System::Drawing::Point(125, 46);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(155, 20);
			this->textBox23->TabIndex = 3;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(16, 49);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(28, 13);
			this->label23->TabIndex = 2;
			this->label23->Text = L"ЗЭТ";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(16, 23);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(94, 13);
			this->label22->TabIndex = 1;
			this->label22->Text = L"Форма контроля";
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
			this->groupBox3->Text = L"Предметы";
			// 
			// treeView4
			// 
			this->treeView4->Location = System::Drawing::Point(9, 46);
			this->treeView4->Name = L"treeView4";
			treeNode1->Name = L"Root";
			treeNode1->Text = L"Предметы";
			this->treeView4->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode1 });
			this->treeView4->Size = System::Drawing::Size(336, 352);
			this->treeView4->TabIndex = 4;
			this->treeView4->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &MyForm::treeView4_AfterSelect);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(177, 433);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(168, 33);
			this->button8->TabIndex = 3;
			this->button8->Text = L"Удалить";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(9, 433);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(168, 33);
			this->button7->TabIndex = 3;
			this->button7->Text = L"Добавить";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(6, 410);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(52, 13);
			this->label20->TabIndex = 1;
			this->label20->Text = L"Предмет";
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
			this->comboBox7->Text = L"Профиль";
			this->comboBox7->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox7_SelectedIndexChanged);
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(9, 19);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(162, 21);
			this->comboBox6->TabIndex = 0;
			this->comboBox6->Text = L"Направление";
			this->comboBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox6_SelectedIndexChanged);
			// 
			// tabPage5
			// 
			this->tabPage5->BackColor = System::Drawing::Color::Transparent;
			this->tabPage5->Controls->Add(this->groupBox9);
			this->tabPage5->Controls->Add(this->groupBox8);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(888, 535);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Направления";
			this->tabPage5->Click += gcnew System::EventHandler(this, &MyForm::tabPage5_Click);
			this->tabPage5->Enter += gcnew System::EventHandler(this, &MyForm::tabPage5_Enter);
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
			this->groupBox9->Text = L"Работа с профилями";
			// 
			// comboBox10
			// 
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Location = System::Drawing::Point(17, 50);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(308, 21);
			this->comboBox10->TabIndex = 5;
			this->comboBox10->Text = L"Выберите направление";
			this->comboBox10->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox10_SelectedIndexChanged);
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(20, 26);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(126, 13);
			this->label31->TabIndex = 4;
			this->label31->Text = L"Выберите направление";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(14, 425);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(57, 13);
			this->label30->TabIndex = 3;
			this->label30->Text = L"Название";
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(17, 88);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(308, 329);
			this->listBox3->TabIndex = 0;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(72, 422);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(253, 20);
			this->textBox18->TabIndex = 2;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(17, 448);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(146, 28);
			this->button16->TabIndex = 1;
			this->button16->Text = L"Добавить";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(169, 448);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(156, 28);
			this->button17->TabIndex = 1;
			this->button17->Text = L"Удалить";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label32);
			this->groupBox8->Controls->Add(this->label29);
			this->groupBox8->Controls->Add(this->textBox27);
			this->groupBox8->Controls->Add(this->textBox4);
			this->groupBox8->Controls->Add(this->button15);
			this->groupBox8->Controls->Add(this->button14);
			this->groupBox8->Controls->Add(this->listBox2);
			this->groupBox8->Location = System::Drawing::Point(8, 6);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(331, 482);
			this->groupBox8->TabIndex = 0;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"Работа с направлениями";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(10, 399);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(26, 13);
			this->label32->TabIndex = 3;
			this->label32->Text = L"Код";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(10, 425);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(57, 13);
			this->label29->TabIndex = 3;
			this->label29->Text = L"Название";
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(68, 396);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(253, 20);
			this->textBox27->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(68, 422);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(253, 20);
			this->textBox4->TabIndex = 2;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(165, 448);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(156, 28);
			this->button15->TabIndex = 1;
			this->button15->Text = L"Удалить";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(13, 448);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(146, 28);
			this->button14->TabIndex = 1;
			this->button14->Text = L"Добавить";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(13, 23);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(308, 368);
			this->listBox2->TabIndex = 0;
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 609);
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
				this->файлToolStripMenuItem,
					this->ывывыфToolStripMenuItem, this->помощьToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(896, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"Выход";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->выходToolStripMenuItem });
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(108, 22);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// ывывыфToolStripMenuItem
			// 
			this->ывывыфToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->настройкиToolStripMenuItem });
			this->ывывыфToolStripMenuItem->Name = L"ывывыфToolStripMenuItem";
			this->ывывыфToolStripMenuItem->Size = System::Drawing::Size(56, 20);
			this->ывывыфToolStripMenuItem->Text = L"Опции";
			// 
			// настройкиToolStripMenuItem
			// 
			this->настройкиToolStripMenuItem->Name = L"настройкиToolStripMenuItem";
			this->настройкиToolStripMenuItem->Size = System::Drawing::Size(134, 22);
			this->настройкиToolStripMenuItem->Text = L"Настройки";
			// 
			// помощьToolStripMenuItem
			// 
			this->помощьToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->оПрограммеToolStripMenuItem });
			this->помощьToolStripMenuItem->Name = L"помощьToolStripMenuItem";
			this->помощьToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->помощьToolStripMenuItem->Text = L"Помощь";
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(896, 631);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Система учета студентов - ДЕКАНАТ";
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
			this->tabPage3->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		
#pragma endregion

public: char * StrToChar(String ^s) {

			IntPtr ptrToNativeString = Marshal::StringToHGlobalAnsi(s);
			char* nativeString = static_cast<char*>(ptrToNativeString.ToPointer());		
			return nativeString;
		}
public: void Mess(String ^s) {
	MessageBox::Show(s, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
public: int GetDirectionById(ComboBox^ c, String ^id) { //необходимо при загрузке из базы
	MYSQL_RES *res;
	MYSQL_ROW row;

	String ^s = gcnew String(""); 
	String ^s1;

	s = "select id, codename from Directions where id=" + id;
	D->mydb->RawSQL(StrToChar(s));
	res = D->mydb->res;

	if ((row = mysql_fetch_row(res))) {
		s1= gcnew String(row[1]);
		for (int i = 0; i < c->Items->Count; i++) {
			if (s1 == c->Items[i]->ToString()) {
				return i;
			}
		}
	}
	return -1;
}
public: int GetProfileById(ComboBox^ c, String ^Id) {
	MYSQL_RES *res;
	MYSQL_ROW row;
		String ^s = gcnew String("");
		String ^s1;

		s = "select id, name from Profiles where id=" + Id;
		D->mydb->RawSQL(StrToChar(s));
		res = D->mydb->res;

		if ((row = mysql_fetch_row(res))) {
				s1 = gcnew String(row[1]);
				for (int i = 0; i < c->Items->Count; i++) {
					if (s1 == c->Items[i]->ToString()) {
						return i;
					}
				}
		}

	return -1;
}
public: DateTime  ReformatDate(char *c) {
	int y, m, d;
	StringBuilder^ D = gcnew StringBuilder(gcnew String(c));
	
	String ^s = gcnew String("");
	s = "" + D[8] + D[9];
	d = System::Convert::ToInt32(s);
	s = "" + D[5] + D[6];
	m = System::Convert::ToInt32(s);	
	s = "" + D[0] + D[1]+ D[2] + D[3];
	y = System::Convert::ToInt32(s);
	return  DateTime(y,m,d);
}
public: int GetProfileId(ComboBox ^c) {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s, ^l;
	int pid = -1;

	s = gcnew String("");
	s = "select id, name from Profiles where name='" + c->SelectedItem + "'";

	D->mydb->RawSQL(StrToChar(s));
	res = D->mydb->res;

	if (row = mysql_fetch_row(res)) {
		pid = System::Convert::ToInt32(gcnew String(row[0]));
	}

	return pid;
}
public: int GetDirectionId(ComboBox ^c) {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s, ^l;
	int id = -1;

	s = gcnew String("");
	s = "select id, codename from Directions where codename='" + c->SelectedItem + "'";

	D->mydb->RawSQL(StrToChar(s));
	res = D->mydb->res;

	if (row = mysql_fetch_row(res)) {
		id = System::Convert::ToInt32(gcnew String(row[0]));
	}

	return id;


}
//------------------------
public: void ClearFields4() {
	this->treeView4->Nodes->Clear();
	this->textBox20->Text = "";
	this->comboBox11->SelectedIndex = -1;
	this->textBox23->Text = "";
}
public: void ClearFields2() {
	this->treeView3->Nodes->Clear();
	this->comboBox12->SelectedIndex = -1;
	this->comboBox13->SelectedIndex = -1;	
	this->textBox19->Text = "";	
	this->checkBox2->Checked = false;
	this->checkBox3->Checked = false;
}
public: void ClearFields3(int i) {
	this->textBox25->Text = "";
	this->comboBox14->SelectedIndex = -1;
	this->comboBox15->SelectedIndex = -1;
	if (i == 0) { this->treeView6->Nodes->Clear(); }
}
public: void LoadTree1() {
	MYSQL_RES *res,*res2;
	MYSQL_ROW row,row2;
	String ^s,^s2 ;
	int id;

	s2 = gcnew String("");
	this->treeView1->Nodes->Clear();

	s2 = "select distinct groupe from Students where fio Like '%"+this->textBox9->Text+"%' order by groupe";
	D->mydb->RawSQL(StrToChar(s2));
	res = D->mydb->res;

	while ((row = mysql_fetch_row(res))) {
		s = gcnew String(row[0]);
		TreeNode ^n1 = gcnew TreeNode(s);
		n1->Tag = -1;
		this->treeView1->Nodes->Add(n1);
			s2 = "select id, fio, groupe from Students where (groupe='" + s + "') and (fio Like '%" + this->textBox9->Text + "%') order by fio";
			D->mydb->RawSQL(StrToChar(s2));
			res2 = D->mydb->res;
			
			while ((row2 = mysql_fetch_row(res2))) {
				TreeNode ^n2 = gcnew TreeNode(gcnew String(row2[1]));
				n2->Tag = System::Convert::ToInt32(gcnew String(row2[0]));
				n1->Nodes->Add(n2);
			}
	}	
}
public: void LoadTree2() {
	MYSQL_RES *res, *res2;
	MYSQL_ROW row, row2;
	String ^s, ^s2;	

	s2 = gcnew String("");
	this->treeView2->Nodes->Clear();

	s2 = "select distinct groupe from Students where fio Like '%" + this->textBox12->Text + "%' order by groupe";
	D->mydb->RawSQL(StrToChar(s2));
	res = D->mydb->res;

	while ((row = mysql_fetch_row(res))) {
		s = gcnew String(row[0]);
		TreeNode ^n1 = gcnew TreeNode(s);
		n1->Tag = -1;
		this->treeView2->Nodes->Add(n1);
		s2 = "select id, fio, groupe from Students where (groupe='" + s + "') and (fio Like '%" + this->textBox12->Text + "%') order by fio";
		D->mydb->RawSQL(StrToChar(s2));
		res2 = D->mydb->res;

		while ((row2 = mysql_fetch_row(res2))) {
			TreeNode ^n2 = gcnew TreeNode(gcnew String(row2[1]));
			n2->Tag = System::Convert::ToInt32(gcnew String(row2[0]));
			n1->Nodes->Add(n2);
		}
	}

}
public: void LoadTree3() {
	MYSQL_RES *res, *res2;
	MYSQL_ROW row, row2;
	String ^s, ^s2;

	s2 = gcnew String("");
	this->treeView5->Nodes->Clear();

	s2 = "select distinct groupe from Students where fio Like '%" + this->textBox24->Text + "%' order by groupe";
	D->mydb->RawSQL(StrToChar(s2));
	res = D->mydb->res;

	while ((row = mysql_fetch_row(res))) {
		s = gcnew String(row[0]);
		TreeNode ^n1 = gcnew TreeNode(s);
		n1->Tag = -1;
		this->treeView5->Nodes->Add(n1);
		s2 = "select id, fio, groupe from Students where (groupe='" + s + "') and (fio Like '%" + this->textBox24->Text + "%') order by fio";
		D->mydb->RawSQL(StrToChar(s2));
		res2 = D->mydb->res;

		while ((row2 = mysql_fetch_row(res2))) {
			TreeNode ^n2 = gcnew TreeNode(gcnew String(row2[1]));
			n2->Tag = System::Convert::ToInt32(gcnew String(row2[0]));
			n1->Nodes->Add(n2);
		}
	}




}
public: void LoadProfiles1(/*Загружает профили в выпадающий список*/) {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s,^d;
	
	this->comboBox8->Items->Clear();
	this->comboBox8->Text = "";	
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
public: void LoadProfiles2() {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s, ^d;

	this->comboBox13->Items->Clear();
	this->comboBox13->Text = "";
	if (this->comboBox12->SelectedIndex == -1) return;
	s = this->comboBox12->SelectedItem->ToString();


	d = gcnew String("select P.name, D.id, D.codename, P.directId from Directions as D, Profiles as P where D.codename='" + s + "' and P.directId=D.id");

	D->mydb->RawSQL(StrToChar(d));
	res = D->mydb->res;
	while ((row = mysql_fetch_row(res))) {
		s = gcnew String(row[0]);
		this->comboBox13->Items->Add(s);
	}



}
public: void LoadProfiles4(/*Загружает профили в выпадающий список*/) {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s, ^d;

	this->comboBox7->Items->Clear();
	this->comboBox7->Text = "";
	ClearFields4();
	if (this->comboBox6->SelectedIndex == -1) return;
	s = this->comboBox6->SelectedItem->ToString();


	d = gcnew String("select P.name, D.id, D.codename, P.directId from Directions as D, Profiles as P where D.codename='" + s + "' and P.directId=D.id");

	D->mydb->RawSQL(StrToChar(d));
	res = D->mydb->res;
	while ((row = mysql_fetch_row(res))) {
		s = gcnew String(row[0]);
		this->comboBox7->Items->Add(s);
	}
}
public: void LoadDirections1() {
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
public: void LoadDirections2() {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s, ^id;

	D->mydb->RawSQL("select id, codename from Directions");
	res = D->mydb->res;

	this->comboBox12->Items->Clear();
	this->comboBox12->Text = "";
	while ((row = mysql_fetch_row(res))) {
		id = gcnew String(row[0]);
		s = gcnew String(row[1]);
		this->comboBox12->Items->Add(s);
	}



}
public: void LoadDirections4() {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s, ^id;

	D->mydb->RawSQL("select id, codename from Directions");
	res = D->mydb->res;

	
	ClearFields4();
	this->comboBox6->Items->Clear();
	this->comboBox6->Text = "";
	while ((row = mysql_fetch_row(res))) {
		id = gcnew String(row[0]);
		s = gcnew String(row[1]);
		this->comboBox6->Items->Add(s);
	}
}
public: void LoadProfiles5(/*Загружает профили в выпадающий список*/) {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s, ^d;

	
	if (this->comboBox10->SelectedIndex == -1) return;
	this->listBox3->Items->Clear();

	s = this->comboBox10->SelectedItem->ToString();
	d = gcnew String("select P.name, D.id, D.name, P.directId from Directions as D, Profiles as P where D.name='" + s + "' and P.directId=D.id");

	D->mydb->RawSQL(StrToChar(d));
	res = D->mydb->res;
	while ((row = mysql_fetch_row(res))) {
		s = gcnew String(row[0]);
		this->listBox3->Items->Add(s);
	}
}
public: void LoadDirections5() {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^n;

	D->mydb->RawSQL("select name from Directions");
	res = D->mydb->res;
	this->comboBox10->Items->Clear();
	this->comboBox10->SelectedIndex = -1;
	this->comboBox10->Text = "Выберите направление";

	this->listBox2->Items->Clear();
	this->listBox3->Items->Clear();


	while ((row = mysql_fetch_row(res))) {		
		n = gcnew String(row[0]);
		this->listBox2->Items->Add(n);
		this->comboBox10->Items->Add(n);
	}
}
public: void LoadLessons4() {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s,^l;
	int pid=-1;

	s = gcnew String("");
	pid = GetProfileId(this->comboBox7);

	s = "select id, name, profileID from Lessons where profileID=" + pid;		
	D->mydb->RawSQL(StrToChar(s));
	res = D->mydb->res;
	ClearFields4();
	
	while ((row = mysql_fetch_row(res))) {
		l = gcnew String(row[1]);
		TreeNode ^n1 = gcnew TreeNode(l);
		n1->Tag = System::Convert::ToInt32(gcnew String(row[0]));
		this->treeView4->Nodes->Add(n1);
	}
}
public: void AddLessons3() {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s, ^l;	
	int pid = -1;
	int id = this->SelectedStudent;
	if (id == -1) { return; }	

	s = gcnew String("");	

	s = "delete from marks where studentID=" + id; // Удалили предыдущие предметы оценки студента
	D->mydb->RawSQL(StrToChar(s));
	
	// узнаем какого профиля студент
	s = "select ProfileID,id from students where id=" + id;
	D->mydb->RawSQL(StrToChar(s));
	res = D->mydb->res;
	if ((row = mysql_fetch_row(res))) {
		pid = System::Convert::ToInt32(gcnew String(row[0]));
	}

	// Заполняем предметы для студента
	s = "insert into marks(StudentID, tip, LessonID) select " + id + ",2,id from lessons where ProfileID = " + pid;
	
	D->mydb->RawSQL(StrToChar(s));
}
public: void AddOneLesson4(int pid) {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s;	

	s = gcnew String("");	

	s = "insert into Lessons (name, profileID, exam, zet) Values('" +
		this->textBox20->Text + "'," +
		pid + "," +
		this->comboBox11->SelectedIndex + "," +
		this->textBox23->Text + ")";
	
	D->mydb->RawSQL(StrToChar(s));
}
public: void AddLesson4() {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s = gcnew String("");

	if (this->textBox23->Text == "") { Mess("Зэт не указан"); return; }
	if (this->textBox20->Text == "") { Mess("Имя предмета не указано"); return;  }

	if (this->radioButton4->Checked) { // предмет для одного профиля
		int pid = -1;
		if (this->comboBox7->SelectedIndex==-1) { return; }
		pid = GetProfileId(this->comboBox7);
		AddOneLesson4(pid);	
	}
	else { //Предмет для всего направления
		int id=GetDirectionId(this->comboBox6); // узнали направление
		s = "select id from profiles where DirectID=" + id;

		D->mydb->RawSQL(StrToChar(s)); // извлекаем все профили направления
		res = D->mydb->res;

		int pid=-1;
		while ((row = mysql_fetch_row(res))) {
			pid = System::Convert::ToInt32(gcnew String(row[0]));
			// для каждого профиля добавляем наш предмет
			AddOneLesson4(pid);
		}
	}
}
public: void UpdateStudent1() {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s,^id, ^d, ^p;
	
	if (this->SelectedStudent == -1) {
		return;
	}
	
	id = gcnew String("");
	s = gcnew String("");
	id = "" + this->SelectedStudent;


	d = gcnew String("");
	d = "select id, codename from Directions where codename='" + this->comboBox9->SelectedItem + "'";
	D->mydb->RawSQL(StrToChar(d));
	d = "-1";
	res = D->mydb->res;
	while ((row = mysql_fetch_row(res))) {
		d = gcnew String(row[0]);
	}

	p = gcnew String("");
	p = "select id,name from Profiles where name='" + this->comboBox8->SelectedItem + "'";
	D->mydb->RawSQL(StrToChar(p));
	p = "-1";
	res = D->mydb->res;
	while ((row = mysql_fetch_row(res))) {
		p = gcnew String(row[0]);
	}

	s = "update Students set " +
		"fio='" + this->textBox1->Text + "'," + //fio 
		"birth='" + this->dateTimePicker1->Value.Date.ToString("yyyy-MM-dd") + "'," + //birth			
		"sex=" + this->comboBox1->SelectedIndex + "," + //sex
		"directId=" + d + "," + //direct
		"profileId=" + p + "," + //profile
		"edu_start='" + this->dateTimePicker2->Value.Date.ToString("yyyy-MM-dd") + "'," + //edustart
		"edu_stop='" + this->dateTimePicker3->Value.Date.ToString("yyyy-MM-dd") + "'," + //edu stop
		"groupe='" + this->textBox2->Text + "'," + //groupe
		"cafedra='" + this->textBox7->Text + "'," + //caf
		"manager='" + this->textBox8->Text + "'," +// manager
		"hostel=" + this->comboBox5->SelectedIndex + "," + //hostel
		"statys=" + this->comboBox2->SelectedIndex + "," + //status
		"edu_vid=" + this->comboBox3->SelectedIndex + "," + // vid (ochno)
		"edu_base=" + this->comboBox4->SelectedIndex + "," + // base
		"country='" + this->textBox3->Text + "'," + //country
		"email='" + this->textBox10->Text + "'," + //email
		"tel='" + this->textBox11->Text + "' " +	//tel
		"where id=" + id;	
	D->mydb->RawSQL(StrToChar(s));
}
public: void UpdateOneStudent2(int id) {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s;
	bool flag = false;

	if (id == -1) {
		return;
	}

	
	s = gcnew String("");
	
	
	s = "update Students set ";

	if (this->checkBox2->Checked) {
		s = s + "directId=" + GetDirectionId(this->comboBox12)+",";
		s = s + "profileId=" + GetProfileId(this->comboBox13);
		flag = true;
	}
	if (this->checkBox3->Checked) {
		if (flag) { s = s + ", "; }
		s = s + "groupe='" + this->textBox19->Text +"'";
		flag = true;
	}	
	s = s + " where id=" + id;
	
	D->mydb->RawSQL(StrToChar(s));
}
public: void UpdateStudents2() {
	int id;
	for (int i = 0; i < this->treeView3->Nodes->Count; i++) {
		id = System::Convert::ToInt32(this->treeView3->Nodes[i]->Tag);
		UpdateOneStudent2(id);
	}	
}
public: void UpdateMark3() {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s;
	s = gcnew String("");

	int m = this->comboBox15->SelectedIndex;

	if (!this->treeView6->SelectedNode) { return; } //предмет не выбран
	if (m==-1) { return; } // оценка не указана

	int lid = System::Convert::ToInt32(this->treeView6->SelectedNode->Tag);

	s = "update marks set value=" + m + " where id=" + lid;
	D->mydb->RawSQL(StrToChar(s));
}
public: void AddMark3() {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s;
	s = gcnew String("");

	int id = -1;

	int t = this->comboBox14->SelectedIndex;
	id = this->SelectedStudent;

	if (!this->treeView5->SelectedNode) { return; } //студент не выбран
	if (t == -1) { return; } // тип предмета не указан
	if (id == -1) { return; }//студент не выбран

	

	s = "insert into marks (name, tip,studentID) value('" +
		this->textBox25->Text + "'," +
		this->comboBox14->SelectedIndex + ","+
		id+")"	;
	
	D->mydb->RawSQL(StrToChar(s));
}
public: void AddStudent1() {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s, ^d,^p;

	d = gcnew String("");
	d = "select id, codename from Directions where codename='" + this->comboBox9->SelectedItem + "'";
	D->mydb->RawSQL(StrToChar(d));	
	d = "-1";
	res = D->mydb->res;
	while ((row = mysql_fetch_row(res))) {
		d = gcnew String(row[0]);
	}

	p = gcnew String("");
	p = "select id,name from Profiles where name='" + this->comboBox8->SelectedItem + "'";
	D->mydb->RawSQL(StrToChar(p));
	p = "-1";
	res = D->mydb->res;
	while ((row = mysql_fetch_row(res))) {
		p = gcnew String(row[0]);
	}


	s = "insert into Students(fio, birth, sex, directId, profileId, edu_start, edu_stop, groupe, cafedra, manager, hostel, statys, edu_vid, edu_base, country, email, tel) Values('" +
		this->textBox1->Text + "','" + //fio 
		this->dateTimePicker1->Value.Date.ToString("yyyy-MM-dd")+ "','" + //birth
		this->comboBox1->SelectedIndex + "'," + //sex
		d + "," + //direct
		p + ",'" + //profile
		this->dateTimePicker2->Value.Date.ToString("yyyy-MM-dd") + "','" + //edustart
		this->dateTimePicker3->Value.Date.ToString("yyyy-MM-dd") + "','" + //edu stop
		this->textBox2->Text + "','" + //groupe
		this->textBox7->Text + "','" + //caf
		this->textBox8->Text + "'," +// manager
		this->comboBox5->SelectedIndex + "," + //hostel
		this->comboBox2->SelectedIndex + "," + //status
		this->comboBox3->SelectedIndex + "," + // vid (ochno)
		this->comboBox4->SelectedIndex + ",'" + // base
		this->textBox3->Text + "','" + //country
		this->textBox10->Text + "','" + //email
		this->textBox11->Text + "');";	//tel

	D->mydb->RawSQL(StrToChar(s));

}
public: void AddDirection5() {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s, ^d, ^p,^Code,^Name;
	Code= this->textBox27->Text ;
	Name = this->textBox4->Text;

	d = gcnew String("");
	d = "Insert into Directions (codename,name) Values ('" + Code + "', '" + Name + "');";
	
	D->mydb->RawSQL(StrToChar(d));

	this->textBox27->Text = "";
	this->textBox4->Text = "";

}
public: void AddProfile5() {

	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s, ^id,^d,  ^Name;
	//Для начала узнаем id направления
	if (this->comboBox10->SelectedIndex == -1) return;

	s = "select id, name from Directions where name='"+this->comboBox10->SelectedItem->ToString()+"'";
	D->mydb->RawSQL(StrToChar(s));
	res = D->mydb->res;
	
	while ((row = mysql_fetch_row(res))) {
		id = gcnew String(row[0]);
	}
	
	// Теперь добавим профиль
	Name = this->textBox18->Text;
	

	d = gcnew String("");
	d = "Insert into Profiles (directID,name) Values (" + id + ", '" + Name + "');";
	D->mydb->RawSQL(StrToChar(d));
	this->textBox18->Text = "";
}
public: void DeleteProfile5() {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s, ^id, ^d, ^Name;
	//Для начала узнаем id направления
	if (this->comboBox10->SelectedIndex == -1) return;
	if (this->listBox3->SelectedIndex == -1) return;


	s = "select id, name from Directions where name='" + this->comboBox10->SelectedItem->ToString() + "'";
	D->mydb->RawSQL(StrToChar(s));
	res = D->mydb->res;

	while ((row = mysql_fetch_row(res))) {
		id = gcnew String(row[0]);
	}
	// Теперь можно удалять сам профиль

	Name = this->listBox3->SelectedItem->ToString();

	d = gcnew String("");
	d = "Delete from Profiles where (directID=" + id + ") and (name='" + Name + "'); ";
	D->mydb->RawSQL(StrToChar(d));
}
public: void DeleteDirection5() {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s, ^id, ^d, ^Name;
	
	if (this->listBox2->SelectedIndex == -1) return;

	Name = this->listBox2->SelectedItem->ToString();
	s = "select id, name from Directions where name='"+Name+"'";
	D->mydb->RawSQL(StrToChar(s));
	res = D->mydb->res;

	while ((row = mysql_fetch_row(res))) {
		id = gcnew String(row[0]);
	}

	d = gcnew String("");
	d = "Delete from Directions where name='" + Name + "'; ";
	D->mydb->RawSQL(StrToChar(d));

	d = "Delete from Profiles where directID=" + id;
	Mess(d);
	D->mydb->RawSQL(StrToChar(d));
}
public: void DeleteLesson4() {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s;
	int id = 0;
	s = gcnew String("");
	

	if (!this->treeView4->SelectedNode)return;
	id = System::Convert::ToInt32(this->treeView4->SelectedNode->Tag);

	s = "delete from Lessons where id="+id;
	D->mydb->RawSQL(StrToChar(s));
}
public: void DeleteLesson3() {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s;	
	s = gcnew String("");

	if (!this->treeView6->SelectedNode)return;

	int lid = System::Convert::ToInt32(this->treeView6->SelectedNode->Tag);

	s = "delete from marks where id=" + lid;
	D->mydb->RawSQL(StrToChar(s));
}
public: void SelectStudent1(int id) {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s;
	if (id == -1) {//мы выбрали группу
		//?Очищать ли здесь поля студента
		return; 
	}
	s = "select fio, birth, sex, directId, profileId, edu_start, edu_stop, groupe, cafedra, manager, hostel, statys, edu_vid, edu_base, country, email, tel from Students where id=" + id;
	D->mydb->RawSQL(StrToChar(s));
	res = D->mydb->res;
	
	if ((row = mysql_fetch_row(res))) {
		this->textBox1->Text = gcnew String(row[0]); //fio 
		this->dateTimePicker1->Value = ReformatDate(row[1]);//birth
		this->comboBox1->SelectedIndex = System::Convert::ToInt32(gcnew String(row[2])); //sex
		this->comboBox9->SelectedIndex = GetDirectionById(comboBox9, gcnew String(row[3]));// direction
		LoadProfiles1();
		this->comboBox8->SelectedIndex = GetProfileById(comboBox8, gcnew String(row[4]));//profile
			this->dateTimePicker2->Value = ReformatDate(row[5]);//edustart
			this->dateTimePicker3->Value = ReformatDate(row[6]); //edu stop
			this->textBox2->Text = gcnew String(row[7]); //groupe
			this->textBox7->Text = gcnew String(row[8]); //caf
			this->textBox8->Text = gcnew String(row[9]);// manager
			this->comboBox5->SelectedIndex=System::Convert::ToInt32(gcnew String(row[10]));//hostel
			this->comboBox2->SelectedIndex = System::Convert::ToInt32(gcnew String(row[11])); //status
			this->comboBox3->SelectedIndex = System::Convert::ToInt32(gcnew String(row[12]));// vid (ochno)
			this->comboBox4->SelectedIndex = System::Convert::ToInt32(gcnew String(row[13])); // base
			this->textBox3->Text  = gcnew String(row[14]);  //country
			this->textBox10->Text = gcnew String(row[15]);//email
			this->textBox11->Text = gcnew String(row[16]);	//tel
	}
}
public: void SelectStudent2(TreeNode ^n1) {
	int id = System::Convert::ToInt32(n1->Tag);
	if (id == -1) { return; }

	// проверим нет ли записи с таким же тегом, добавленной ранее	
	for (int i = 0; i < this->treeView3->Nodes->Count; i++) {
		if (System::Convert::ToInt32(this->treeView3->Nodes[i]->Tag) == id) { return; }
	}
	TreeNode ^n2 = gcnew TreeNode(n1->Text);
	n2->Tag = id;

	this->treeView3->Nodes->Add(n2);
}
public: void SelectStudent3(int id) {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s;

	ClearFields3(0);
	if (id == -1) {//мы выбрали группу				   
		return;
	}
	
	s = "select M.id,L.name,L.id,M.LessonID,M.studentID from lessons as L,marks as M  where (M.Studentid=" + id+")"+
				" and (L.id=M.LessonID)";
	D->mydb->RawSQL(StrToChar(s));
	res = D->mydb->res;	

	while ((row = mysql_fetch_row(res))) {
		TreeNode ^n1 = gcnew TreeNode(gcnew String(row[1]));
		n1->Tag = System::Convert::ToInt32(gcnew String(row[0]));
		this->treeView6->Nodes->Add(n1);
	}
	TreeNode ^n1 = gcnew TreeNode("Курсовые и итоговые работы ");
	n1->Tag = -1;
	this->treeView6->Nodes->Add(n1);

	s = "select M.id,M.name,M.studentID from marks as M  where (M.Studentid=" + id + ")" +
		" and not (m.tip=2)";
	D->mydb->RawSQL(StrToChar(s));
	res = D->mydb->res;

	while ((row = mysql_fetch_row(res))) {
		TreeNode ^n2 = gcnew TreeNode(gcnew String(row[1]));
		n2->Tag = System::Convert::ToInt32(gcnew String(row[0]));
		n1->Nodes->Add(n2);
	}
}
public: void SelectedLesson3(int lid) {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s;
	int tip;
	
	if (lid == -1) {//мы выбрали группу	
		ClearFields3(1);
		return;
	}

	s = "select name,tip,value from marks where id="+lid;
	D->mydb->RawSQL(StrToChar(s));
	res = D->mydb->res;

	if ((row = mysql_fetch_row(res))) {
		tip = System::Convert::ToInt32(gcnew String(row[1]));
		if (tip != 2) {
			this->textBox25->Text = gcnew String(row[0]);
			this->comboBox14->SelectedIndex = tip;		
		}
		else {
			this->textBox25->Text = "";
			this->comboBox14->SelectedIndex = -1;			
		}
		this->comboBox15->SelectedIndex= System::Convert::ToInt32(gcnew String(row[2]));
	}
}
public: void SelectedLesson4(int id) {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s;
	s = gcnew String("");
	s = "select Exam, Zet, id from Lessons where id=" + id;

	D->mydb->RawSQL(StrToChar(s));
	res = D->mydb->res;

	while ((row = mysql_fetch_row(res))) {
		this->comboBox11->SelectedIndex = System::Convert::ToInt32( gcnew String(row[0]));
		this->textBox23->Text= gcnew String(row[1]);		
	}
}
public: void AddOrder1() {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s = gcnew String("");
	if (this->SelectedStudent == -1) { return; }
	s = "insert into orders (studentID,number,datta,about) Values (" +
		this->SelectedStudent + ",'" + //Id
		this->textBox13->Text + "','" + //number
		this->dateTimePicker4->Value.Date.ToString("yyyy-MM-dd") +"','" +// datta
		this->textBox15->Text + "');";	//about
	
	D->mydb->RawSQL(StrToChar(s));
}
public: void LoadOrder1() {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s,^Id,^sid,^number,^data, ^about;
	int id=this->SelectedStudent;
	
	this->treeView7->Nodes->Clear();
	if (id == -1) { return; }

	s = gcnew String("");
	s = "select id,studentID,number,datta,about from orders where studentID="+id;

	D->mydb->RawSQL(StrToChar(s));
	res = D->mydb->res;

	while ((row = mysql_fetch_row(res))) {
		Id = gcnew String(row[0]);		
		number= gcnew String(row[2]);
		data= gcnew String(row[3]);
		about = gcnew String(row[4]);
		s = "[" + number + "] " + data + " '"+about+"'";
		TreeNode ^n1 = gcnew TreeNode(s);
		n1->Tag = Id;
		this->treeView7->Nodes->Add(n1);		
	}
}
public: void DeleteOrder1() {
	MYSQL_RES *res;
	MYSQL_ROW row;
	String ^s = gcnew String("");
	
	if (this->SelectedStudent == -1) { return; }
	if (!this->treeView7->SelectedNode)return;
	int id = System::Convert::ToInt32(this->treeView7->SelectedNode->Tag);
	
	s = "delete from Orders where id="+id;
	D->mydb->RawSQL(StrToChar(s));
}
//---------------------
public: void Refresh0(){
	switch (this->Vkladka) {
	case 1: {
		LoadDirections1();
		LoadTree1();
		break; }
	case 2: {
		ClearFields2();
		LoadDirections2();
		LoadTree2();
		break; 
	}
	case 3: {
		ClearFields3(0);
		LoadTree3();
		break; 
	}
	case 4: {
		LoadDirections4();
		break; 
	}
	case 5: {
		LoadDirections5();
		LoadProfiles5();		
		break; 
	}	
	};
}
public: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
	}
public: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
public: System::Void treeView3_AfterSelect(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e) {
}
public: System::Void выходToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	// Меню Выход
	this->Close();
}
public: System::Void MyForm_Activated(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	UpdateStudent1();
	LoadTree1();
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	D = new Decan();
	LoadDirections1();
}
private: System::Void tabControl1_EnabledChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tabPage1_Enter(System::Object^  sender, System::EventArgs^  e) {
	this->Vkladka = 1;
	Refresh0();
}
private: System::Void tabPage2_Enter(System::Object^  sender, System::EventArgs^  e) {
	this->Vkladka = 2;	
	Refresh0();
}
private: System::Void tabPage3_Enter(System::Object^  sender, System::EventArgs^  e) {
	this->Vkladka = 3;
	Refresh0();
}
private: System::Void tabPage4_Enter(System::Object^  sender, System::EventArgs^  e) {
	this->Vkladka = 4;
	Refresh0();
}
private: System::Void tabPage5_Enter(System::Object^  sender, System::EventArgs^  e) {
	this->Vkladka = 5;
	Refresh0();
}
private: System::Void comboBox9_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	LoadProfiles1();
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void tabPage5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	AddStudent1();
	LoadTree1();

}
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	AddDirection5();
	Refresh0();
}
private: System::Void comboBox10_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	LoadProfiles5();
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	AddProfile5();
	LoadProfiles5();
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	DeleteProfile5();
	LoadProfiles5();
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	DeleteDirection5();
	Refresh0();

}
private: System::Void treeView1_AfterSelect(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e) {
	int id = System::Convert::ToInt32(this->treeView1->SelectedNode->Tag);
	this->SelectedStudent = id;
	//this->Text = "" + id;
	SelectStudent1(id);
	LoadOrder1();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	AddOrder1();
	LoadOrder1();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	DeleteOrder1();
	LoadOrder1();
}
private: System::Void treeView7_AfterSelect(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e) {
	
}
private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	LoadTree1();
}
private: System::Void comboBox7_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {	
	LoadLessons4();
}
private: System::Void comboBox6_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	LoadProfiles4();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	AddLesson4();
	LoadLessons4();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	DeleteLesson4();
	LoadLessons4();
}
private: System::Void treeView4_AfterSelect(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e) {
	int id = System::Convert::ToInt32(this->treeView4->SelectedNode->Tag);	
	SelectedLesson4(id);
}
private: System::Void textBox12_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	LoadTree2();
}
private: System::Void treeView2_NodeMouseDoubleClick(System::Object^  sender, System::Windows::Forms::TreeNodeMouseClickEventArgs^  e) {	
	
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	this->treeView3->Nodes->Clear();
}
private: System::Void treeView3_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
}
private: System::Void treeView3_NodeMouseDoubleClick(System::Object^  sender, System::Windows::Forms::TreeNodeMouseClickEventArgs^  e) {
	this->treeView3->SelectedNode->Remove();
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	UpdateStudents2();
	Refresh0();
}
private: System::Void comboBox12_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	LoadProfiles2();
}
private: System::Void treeView1_NodeMouseClick(System::Object^  sender, System::Windows::Forms::TreeNodeMouseClickEventArgs^  e) {
}
private: System::Void treeView2_AfterSelect(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e) {
	SelectStudent2(this->treeView2->SelectedNode);
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!this->treeView5->SelectedNode)return;
	int id = System::Convert::ToInt32(this->treeView5->SelectedNode->Tag);
	this->SelectedStudent = id;
	AddLessons3();	
	SelectStudent3(id);
}
private: System::Void treeView5_AfterSelect(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e) {

	int id = System::Convert::ToInt32(this->treeView5->SelectedNode->Tag);
	this->SelectedStudent = id;	
	SelectStudent3(id);
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {			
	if (!this->treeView5->SelectedNode)return;
	int id = System::Convert::ToInt32(this->treeView5->SelectedNode->Tag);
	this->SelectedStudent = id;
	DeleteLesson3();
	SelectStudent3(id);
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {

	UpdateMark3();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {	
	if (!this->treeView5->SelectedNode)return;
	int id = System::Convert::ToInt32(this->treeView5->SelectedNode->Tag);
	this->SelectedStudent = id;
	AddMark3();
	SelectStudent3(id);

}
private: System::Void treeView6_AfterSelect(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e) {
	if (!this->treeView5->SelectedNode)return;	
	this->SelectedStudent = System::Convert::ToInt32(this->treeView5->SelectedNode->Tag);

	if (!this->treeView6->SelectedNode)return;
	int id = System::Convert::ToInt32(this->treeView6->SelectedNode->Tag);	
	SelectedLesson3(id);	
}
};

}
