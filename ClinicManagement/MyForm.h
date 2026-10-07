#pragma once
#include "FileHandling.h"
#include<stdio.h>
namespace ClinicManagement {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:

	private: System::Windows::Forms::TabPage^ tabPageCreate;
	private: System::Windows::Forms::TabPage^ tabPageAdd;
	private: System::Windows::Forms::TabPage^ tabPageSearch;



	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutCreate;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::TextBox^ createID;

	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ createFLname;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ createDepartment;
	private: System::Windows::Forms::TextBox^ createStatus;

	private: System::Windows::Forms::TextBox^ createAge;

	private: System::Windows::Forms::TextBox^ createSex;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutAdd;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::TextBox^ addStatus;

	private: System::Windows::Forms::TextBox^ addAge;

	private: System::Windows::Forms::TextBox^ addSex;

	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ addID;

	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ addFLname;

	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::TextBox^ addDepartment;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TabPage^ tabPageModify;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutModify;
	private: System::Windows::Forms::TextBox^ modifyOldID;

	private: System::Windows::Forms::TextBox^ textBox37;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
	private: System::Windows::Forms::TextBox^ modifyStatus;

	private: System::Windows::Forms::TextBox^ modifyAge;

	private: System::Windows::Forms::TextBox^ modifySex;

	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::TextBox^ textBox29;
	private: System::Windows::Forms::TextBox^ textBox30;

	private: System::Windows::Forms::TextBox^ textBox33;
	private: System::Windows::Forms::TextBox^ modifyFLname;

	private: System::Windows::Forms::TextBox^ textBox35;
	private: System::Windows::Forms::TextBox^ modifyDepartment;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::SplitContainer^ splitContainerSearch;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutSearch;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel8;
	private: System::Windows::Forms::TextBox^ searchStatus;

	private: System::Windows::Forms::TextBox^ searchAge;

	private: System::Windows::Forms::TextBox^ searchSex;

	private: System::Windows::Forms::TextBox^ textBox42;
	private: System::Windows::Forms::TextBox^ textBox43;
	private: System::Windows::Forms::TextBox^ textBox44;
	private: System::Windows::Forms::TextBox^ searchID;

	private: System::Windows::Forms::TextBox^ textBox46;
	private: System::Windows::Forms::TextBox^ textBox47;
	private: System::Windows::Forms::TextBox^ searchFLname;

	private: System::Windows::Forms::TextBox^ textBox49;
	private: System::Windows::Forms::TextBox^ searchDepartment;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Button^ createButton;
	private: System::Windows::Forms::Button^ addButton;
	private: System::Windows::Forms::Button^ modifySubmitButton;

	private: System::Windows::Forms::Button^ searchButton;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ modifyFindButton;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutSearchResults;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ searchResults;
	private: System::Windows::Forms::TabPage^ tabPageRemove;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ buttonRemove;
	private: System::Windows::Forms::TextBox^ removeID;

	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Button^ searchClear;
	private: System::Windows::Forms::Label^ label7;









	public:
	protected:

	public:

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	protected:

	private: System::ComponentModel::IContainer^ components;
	protected:

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPageCreate = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutCreate = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->createStatus = (gcnew System::Windows::Forms::TextBox());
			this->createAge = (gcnew System::Windows::Forms::TextBox());
			this->createSex = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->createID = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->createFLname = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->createDepartment = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->createButton = (gcnew System::Windows::Forms::Button());
			this->tabPageAdd = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutAdd = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->addStatus = (gcnew System::Windows::Forms::TextBox());
			this->addAge = (gcnew System::Windows::Forms::TextBox());
			this->addSex = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->addID = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->addFLname = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->addDepartment = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->tabPageModify = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutModify = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->modifyOldID = (gcnew System::Windows::Forms::TextBox());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->modifyStatus = (gcnew System::Windows::Forms::TextBox());
			this->modifyAge = (gcnew System::Windows::Forms::TextBox());
			this->modifySex = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->modifyFLname = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->modifyDepartment = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->modifySubmitButton = (gcnew System::Windows::Forms::Button());
			this->modifyFindButton = (gcnew System::Windows::Forms::Button());
			this->tabPageRemove = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->buttonRemove = (gcnew System::Windows::Forms::Button());
			this->removeID = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tabPageSearch = (gcnew System::Windows::Forms::TabPage());
			this->splitContainerSearch = (gcnew System::Windows::Forms::SplitContainer());
			this->tableLayoutSearch = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel8 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->searchStatus = (gcnew System::Windows::Forms::TextBox());
			this->searchAge = (gcnew System::Windows::Forms::TextBox());
			this->searchSex = (gcnew System::Windows::Forms::TextBox());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->searchID = (gcnew System::Windows::Forms::TextBox());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->textBox47 = (gcnew System::Windows::Forms::TextBox());
			this->searchFLname = (gcnew System::Windows::Forms::TextBox());
			this->textBox49 = (gcnew System::Windows::Forms::TextBox());
			this->searchDepartment = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->searchButton = (gcnew System::Windows::Forms::Button());
			this->searchClear = (gcnew System::Windows::Forms::Button());
			this->tableLayoutSearchResults = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->searchResults = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPageCreate->SuspendLayout();
			this->tableLayoutCreate->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tabPageAdd->SuspendLayout();
			this->tableLayoutAdd->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->tabPageModify->SuspendLayout();
			this->tableLayoutModify->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->tabPageRemove->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tabPageSearch->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainerSearch))->BeginInit();
			this->splitContainerSearch->Panel1->SuspendLayout();
			this->splitContainerSearch->Panel2->SuspendLayout();
			this->splitContainerSearch->SuspendLayout();
			this->tableLayoutSearch->SuspendLayout();
			this->tableLayoutPanel8->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutSearchResults->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPageCreate);
			this->tabControl1->Controls->Add(this->tabPageAdd);
			this->tabControl1->Controls->Add(this->tabPageModify);
			this->tabControl1->Controls->Add(this->tabPageRemove);
			this->tabControl1->Controls->Add(this->tabPageSearch);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabControl1->ItemSize = System::Drawing::Size(100, 30);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(2023, 1391);
			this->tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tabControl1->TabIndex = 0;
			// 
			// tabPageCreate
			// 
			this->tabPageCreate->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tabPageCreate->Controls->Add(this->tableLayoutCreate);
			this->tabPageCreate->Location = System::Drawing::Point(10, 40);
			this->tabPageCreate->Name = L"tabPageCreate";
			this->tabPageCreate->Padding = System::Windows::Forms::Padding(3);
			this->tabPageCreate->Size = System::Drawing::Size(2003, 1341);
			this->tabPageCreate->TabIndex = 0;
			this->tabPageCreate->Text = L"Create";
			// 
			// tableLayoutCreate
			// 
			this->tableLayoutCreate->ColumnCount = 2;
			this->tableLayoutCreate->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				438)));
			this->tableLayoutCreate->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutCreate->Controls->Add(this->label7, 0, 8);
			this->tableLayoutCreate->Controls->Add(this->tableLayoutPanel2, 0, 4);
			this->tableLayoutCreate->Controls->Add(this->createID, 1, 1);
			this->tableLayoutCreate->Controls->Add(this->textBox2, 0, 1);
			this->tableLayoutCreate->Controls->Add(this->textBox3, 0, 2);
			this->tableLayoutCreate->Controls->Add(this->createFLname, 1, 2);
			this->tableLayoutCreate->Controls->Add(this->textBox5, 0, 3);
			this->tableLayoutCreate->Controls->Add(this->createDepartment, 1, 3);
			this->tableLayoutCreate->Controls->Add(this->label1, 0, 0);
			this->tableLayoutCreate->Controls->Add(this->createButton, 0, 6);
			this->tableLayoutCreate->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutCreate->Location = System::Drawing::Point(3, 3);
			this->tableLayoutCreate->Name = L"tableLayoutCreate";
			this->tableLayoutCreate->RowCount = 9;
			this->tableLayoutCreate->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15.38461F)));
			this->tableLayoutCreate->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.890111F)));
			this->tableLayoutCreate->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.890111F)));
			this->tableLayoutCreate->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.890111F)));
			this->tableLayoutCreate->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.890111F)));
			this->tableLayoutCreate->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.890111F)));
			this->tableLayoutCreate->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.890111F)));
			this->tableLayoutCreate->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.890111F)));
			this->tableLayoutCreate->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15.38461F)));
			this->tableLayoutCreate->Size = System::Drawing::Size(1997, 1335);
			this->tableLayoutCreate->TabIndex = 0;
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->tableLayoutCreate->SetColumnSpan(this->label7, 2);
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(3, 1129);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(1991, 206);
			this->label7->TabIndex = 14;
			this->label7->Text = L"This will overwrite any existing files.";
			this->label7->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 6;
			this->tableLayoutCreate->SetColumnSpan(this->tableLayoutPanel2, 2);
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel2->Controls->Add(this->createStatus, 5, 0);
			this->tableLayoutPanel2->Controls->Add(this->createAge, 3, 0);
			this->tableLayoutPanel2->Controls->Add(this->createSex, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->textBox6, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->textBox8, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->textBox9, 4, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 604);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 126)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1991, 126);
			this->tableLayoutPanel2->TabIndex = 3;
			// 
			// createStatus
			// 
			this->createStatus->Dock = System::Windows::Forms::DockStyle::Fill;
			this->createStatus->Location = System::Drawing::Point(1658, 3);
			this->createStatus->Name = L"createStatus";
			this->createStatus->Size = System::Drawing::Size(330, 48);
			this->createStatus->TabIndex = 13;
			// 
			// createAge
			// 
			this->createAge->Dock = System::Windows::Forms::DockStyle::Fill;
			this->createAge->Location = System::Drawing::Point(996, 3);
			this->createAge->Name = L"createAge";
			this->createAge->Size = System::Drawing::Size(325, 48);
			this->createAge->TabIndex = 12;
			// 
			// createSex
			// 
			this->createSex->Dock = System::Windows::Forms::DockStyle::Fill;
			this->createSex->Location = System::Drawing::Point(334, 3);
			this->createSex->Name = L"createSex";
			this->createSex->Size = System::Drawing::Size(325, 48);
			this->createSex->TabIndex = 10;
			// 
			// textBox6
			// 
			this->textBox6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(3, 3);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(325, 48);
			this->textBox6->TabIndex = 9;
			this->textBox6->Text = L"Sex :\r\n";
			// 
			// textBox8
			// 
			this->textBox8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(665, 3);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(325, 48);
			this->textBox8->TabIndex = 10;
			this->textBox8->Text = L"Age :";
			// 
			// textBox9
			// 
			this->textBox9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(1327, 3);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(325, 48);
			this->textBox9->TabIndex = 11;
			this->textBox9->Text = L"Status:\r\n";
			// 
			// createID
			// 
			this->createID->Dock = System::Windows::Forms::DockStyle::Fill;
			this->createID->Location = System::Drawing::Point(441, 208);
			this->createID->Name = L"createID";
			this->createID->Size = System::Drawing::Size(1553, 48);
			this->createID->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(3, 208);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(432, 48);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"ID :";
			// 
			// textBox3
			// 
			this->textBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(3, 340);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(432, 48);
			this->textBox3->TabIndex = 6;
			this->textBox3->Text = L"First and Last Name :";
			// 
			// createFLname
			// 
			this->createFLname->Dock = System::Windows::Forms::DockStyle::Fill;
			this->createFLname->Location = System::Drawing::Point(441, 340);
			this->createFLname->Name = L"createFLname";
			this->createFLname->Size = System::Drawing::Size(1553, 48);
			this->createFLname->TabIndex = 7;
			// 
			// textBox5
			// 
			this->textBox5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(3, 472);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(432, 48);
			this->textBox5->TabIndex = 8;
			this->textBox5->Text = L"Department :";
			// 
			// createDepartment
			// 
			this->createDepartment->Dock = System::Windows::Forms::DockStyle::Fill;
			this->createDepartment->Location = System::Drawing::Point(441, 472);
			this->createDepartment->Name = L"createDepartment";
			this->createDepartment->Size = System::Drawing::Size(1553, 48);
			this->createDepartment->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->tableLayoutCreate->SetColumnSpan(this->label1, 2);
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.9F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1991, 205);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Fill in the required data to add the first patient to the new file :";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// createButton
			// 
			this->createButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutCreate->SetColumnSpan(this->createButton, 2);
			this->createButton->Location = System::Drawing::Point(3, 868);
			this->createButton->Name = L"createButton";
			this->createButton->Size = System::Drawing::Size(1991, 126);
			this->createButton->TabIndex = 11;
			this->createButton->Text = L"Submit";
			this->createButton->UseVisualStyleBackColor = true;
			this->createButton->Click += gcnew System::EventHandler(this, &MyForm::createButton_Click);
			// 
			// tabPageAdd
			// 
			this->tabPageAdd->BackColor = System::Drawing::Color::White;
			this->tabPageAdd->Controls->Add(this->tableLayoutAdd);
			this->tabPageAdd->Location = System::Drawing::Point(10, 40);
			this->tabPageAdd->Name = L"tabPageAdd";
			this->tabPageAdd->Padding = System::Windows::Forms::Padding(3);
			this->tabPageAdd->Size = System::Drawing::Size(2003, 1341);
			this->tabPageAdd->TabIndex = 1;
			this->tabPageAdd->Text = L"  Add";
			// 
			// tableLayoutAdd
			// 
			this->tableLayoutAdd->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tableLayoutAdd->ColumnCount = 2;
			this->tableLayoutAdd->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				438)));
			this->tableLayoutAdd->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutAdd->Controls->Add(this->tableLayoutPanel4, 0, 4);
			this->tableLayoutAdd->Controls->Add(this->addID, 1, 1);
			this->tableLayoutAdd->Controls->Add(this->textBox20, 0, 1);
			this->tableLayoutAdd->Controls->Add(this->textBox21, 0, 2);
			this->tableLayoutAdd->Controls->Add(this->addFLname, 1, 2);
			this->tableLayoutAdd->Controls->Add(this->textBox23, 0, 3);
			this->tableLayoutAdd->Controls->Add(this->addDepartment, 1, 3);
			this->tableLayoutAdd->Controls->Add(this->label2, 0, 0);
			this->tableLayoutAdd->Controls->Add(this->addButton, 1, 5);
			this->tableLayoutAdd->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutAdd->Location = System::Drawing::Point(3, 3);
			this->tableLayoutAdd->Name = L"tableLayoutAdd";
			this->tableLayoutAdd->RowCount = 9;
			this->tableLayoutAdd->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15.38461F)));
			this->tableLayoutAdd->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.890111F)));
			this->tableLayoutAdd->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.890111F)));
			this->tableLayoutAdd->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.890111F)));
			this->tableLayoutAdd->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.890111F)));
			this->tableLayoutAdd->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.890111F)));
			this->tableLayoutAdd->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.890111F)));
			this->tableLayoutAdd->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.890111F)));
			this->tableLayoutAdd->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15.38461F)));
			this->tableLayoutAdd->Size = System::Drawing::Size(1997, 1335);
			this->tableLayoutAdd->TabIndex = 1;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 6;
			this->tableLayoutAdd->SetColumnSpan(this->tableLayoutPanel4, 2);
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel4->Controls->Add(this->addStatus, 5, 0);
			this->tableLayoutPanel4->Controls->Add(this->addAge, 3, 0);
			this->tableLayoutPanel4->Controls->Add(this->addSex, 1, 0);
			this->tableLayoutPanel4->Controls->Add(this->textBox16, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->textBox17, 2, 0);
			this->tableLayoutPanel4->Controls->Add(this->textBox18, 4, 0);
			this->tableLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel4->Location = System::Drawing::Point(3, 604);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 126)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(1991, 126);
			this->tableLayoutPanel4->TabIndex = 3;
			// 
			// addStatus
			// 
			this->addStatus->Dock = System::Windows::Forms::DockStyle::Fill;
			this->addStatus->Location = System::Drawing::Point(1658, 3);
			this->addStatus->Name = L"addStatus";
			this->addStatus->Size = System::Drawing::Size(330, 48);
			this->addStatus->TabIndex = 13;
			// 
			// addAge
			// 
			this->addAge->Dock = System::Windows::Forms::DockStyle::Fill;
			this->addAge->Location = System::Drawing::Point(996, 3);
			this->addAge->Name = L"addAge";
			this->addAge->Size = System::Drawing::Size(325, 48);
			this->addAge->TabIndex = 12;
			// 
			// addSex
			// 
			this->addSex->Dock = System::Windows::Forms::DockStyle::Fill;
			this->addSex->Location = System::Drawing::Point(334, 3);
			this->addSex->Name = L"addSex";
			this->addSex->Size = System::Drawing::Size(325, 48);
			this->addSex->TabIndex = 10;
			// 
			// textBox16
			// 
			this->textBox16->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox16->Location = System::Drawing::Point(3, 3);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(325, 48);
			this->textBox16->TabIndex = 9;
			this->textBox16->Text = L"Sex :\r\n";
			// 
			// textBox17
			// 
			this->textBox17->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox17->Location = System::Drawing::Point(665, 3);
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(325, 48);
			this->textBox17->TabIndex = 10;
			this->textBox17->Text = L"Age :";
			// 
			// textBox18
			// 
			this->textBox18->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox18->Location = System::Drawing::Point(1327, 3);
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(325, 48);
			this->textBox18->TabIndex = 11;
			this->textBox18->Text = L"Status:\r\n";
			// 
			// addID
			// 
			this->addID->Dock = System::Windows::Forms::DockStyle::Fill;
			this->addID->Location = System::Drawing::Point(441, 208);
			this->addID->Name = L"addID";
			this->addID->Size = System::Drawing::Size(1553, 48);
			this->addID->TabIndex = 4;
			// 
			// textBox20
			// 
			this->textBox20->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox20->Location = System::Drawing::Point(3, 208);
			this->textBox20->Name = L"textBox20";
			this->textBox20->ReadOnly = true;
			this->textBox20->Size = System::Drawing::Size(432, 48);
			this->textBox20->TabIndex = 5;
			this->textBox20->Text = L"ID :";
			// 
			// textBox21
			// 
			this->textBox21->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox21->Location = System::Drawing::Point(3, 340);
			this->textBox21->Name = L"textBox21";
			this->textBox21->ReadOnly = true;
			this->textBox21->Size = System::Drawing::Size(432, 48);
			this->textBox21->TabIndex = 6;
			this->textBox21->Text = L"First and Last Name :";
			// 
			// addFLname
			// 
			this->addFLname->Dock = System::Windows::Forms::DockStyle::Fill;
			this->addFLname->Location = System::Drawing::Point(441, 340);
			this->addFLname->Name = L"addFLname";
			this->addFLname->Size = System::Drawing::Size(1553, 48);
			this->addFLname->TabIndex = 7;
			// 
			// textBox23
			// 
			this->textBox23->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox23->Location = System::Drawing::Point(3, 472);
			this->textBox23->Name = L"textBox23";
			this->textBox23->ReadOnly = true;
			this->textBox23->Size = System::Drawing::Size(432, 48);
			this->textBox23->TabIndex = 8;
			this->textBox23->Text = L"Department :";
			// 
			// addDepartment
			// 
			this->addDepartment->Dock = System::Windows::Forms::DockStyle::Fill;
			this->addDepartment->Location = System::Drawing::Point(441, 472);
			this->addDepartment->Name = L"addDepartment";
			this->addDepartment->Size = System::Drawing::Size(1553, 48);
			this->addDepartment->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->tableLayoutAdd->SetColumnSpan(this->label2, 2);
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.9F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1991, 205);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Fill in the required data to add the new patient to the file :";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// addButton
			// 
			this->addButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutAdd->SetColumnSpan(this->addButton, 2);
			this->addButton->Location = System::Drawing::Point(3, 868);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(1991, 126);
			this->addButton->TabIndex = 12;
			this->addButton->Text = L"Submit";
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Click += gcnew System::EventHandler(this, &MyForm::addButton_Click);
			// 
			// tabPageModify
			// 
			this->tabPageModify->Controls->Add(this->tableLayoutModify);
			this->tabPageModify->Location = System::Drawing::Point(10, 40);
			this->tabPageModify->Name = L"tabPageModify";
			this->tabPageModify->Size = System::Drawing::Size(2003, 1341);
			this->tabPageModify->TabIndex = 5;
			this->tabPageModify->Text = L"Modify";
			this->tabPageModify->UseVisualStyleBackColor = true;
			// 
			// tableLayoutModify
			// 
			this->tableLayoutModify->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tableLayoutModify->ColumnCount = 2;
			this->tableLayoutModify->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				438)));
			this->tableLayoutModify->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutModify->Controls->Add(this->label6, 0, 9);
			this->tableLayoutModify->Controls->Add(this->modifyOldID, 1, 1);
			this->tableLayoutModify->Controls->Add(this->textBox37, 0, 1);
			this->tableLayoutModify->Controls->Add(this->tableLayoutPanel6, 0, 6);
			this->tableLayoutModify->Controls->Add(this->textBox33, 0, 4);
			this->tableLayoutModify->Controls->Add(this->modifyFLname, 1, 4);
			this->tableLayoutModify->Controls->Add(this->textBox35, 0, 5);
			this->tableLayoutModify->Controls->Add(this->modifyDepartment, 1, 5);
			this->tableLayoutModify->Controls->Add(this->label3, 0, 0);
			this->tableLayoutModify->Controls->Add(this->modifySubmitButton, 0, 8);
			this->tableLayoutModify->Controls->Add(this->modifyFindButton, 0, 2);
			this->tableLayoutModify->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutModify->Location = System::Drawing::Point(0, 0);
			this->tableLayoutModify->Name = L"tableLayoutModify";
			this->tableLayoutModify->RowCount = 10;
			this->tableLayoutModify->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15)));
			this->tableLayoutModify->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.75F)));
			this->tableLayoutModify->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.75F)));
			this->tableLayoutModify->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.75F)));
			this->tableLayoutModify->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.75F)));
			this->tableLayoutModify->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.75F)));
			this->tableLayoutModify->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.75F)));
			this->tableLayoutModify->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.75F)));
			this->tableLayoutModify->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.75F)));
			this->tableLayoutModify->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15)));
			this->tableLayoutModify->Size = System::Drawing::Size(2003, 1341);
			this->tableLayoutModify->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->tableLayoutModify->SetColumnSpan(this->label6, 2);
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(3, 1137);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(1997, 204);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Enter 0 in all unchanged fields.\r\nclick submit directly or click find to check if"
				L" patient ID exists in the files first.";
			this->label6->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// modifyOldID
			// 
			this->modifyOldID->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->modifyOldID->Location = System::Drawing::Point(441, 267);
			this->modifyOldID->Name = L"modifyOldID";
			this->modifyOldID->Size = System::Drawing::Size(1559, 48);
			this->modifyOldID->TabIndex = 12;
			// 
			// textBox37
			// 
			this->textBox37->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->textBox37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox37->Location = System::Drawing::Point(3, 267);
			this->textBox37->Name = L"textBox37";
			this->textBox37->ReadOnly = true;
			this->textBox37->Size = System::Drawing::Size(432, 48);
			this->textBox37->TabIndex = 11;
			this->textBox37->Text = L"ID :";
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->ColumnCount = 6;
			this->tableLayoutModify->SetColumnSpan(this->tableLayoutPanel6, 2);
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel6->Controls->Add(this->modifyStatus, 5, 0);
			this->tableLayoutPanel6->Controls->Add(this->modifyAge, 3, 0);
			this->tableLayoutPanel6->Controls->Add(this->modifySex, 1, 0);
			this->tableLayoutPanel6->Controls->Add(this->textBox28, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->textBox29, 2, 0);
			this->tableLayoutPanel6->Controls->Add(this->textBox30, 4, 0);
			this->tableLayoutPanel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel6->Location = System::Drawing::Point(3, 789);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 1;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 111)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(1997, 111);
			this->tableLayoutPanel6->TabIndex = 3;
			// 
			// modifyStatus
			// 
			this->modifyStatus->Dock = System::Windows::Forms::DockStyle::Fill;
			this->modifyStatus->Location = System::Drawing::Point(1663, 3);
			this->modifyStatus->Name = L"modifyStatus";
			this->modifyStatus->Size = System::Drawing::Size(331, 48);
			this->modifyStatus->TabIndex = 13;
			this->modifyStatus->Text = L"0";
			// 
			// modifyAge
			// 
			this->modifyAge->Dock = System::Windows::Forms::DockStyle::Fill;
			this->modifyAge->Location = System::Drawing::Point(999, 3);
			this->modifyAge->Name = L"modifyAge";
			this->modifyAge->Size = System::Drawing::Size(326, 48);
			this->modifyAge->TabIndex = 12;
			this->modifyAge->Text = L"0";
			// 
			// modifySex
			// 
			this->modifySex->Dock = System::Windows::Forms::DockStyle::Fill;
			this->modifySex->Location = System::Drawing::Point(335, 3);
			this->modifySex->Name = L"modifySex";
			this->modifySex->Size = System::Drawing::Size(326, 48);
			this->modifySex->TabIndex = 10;
			this->modifySex->Text = L"0";
			// 
			// textBox28
			// 
			this->textBox28->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox28->Location = System::Drawing::Point(3, 3);
			this->textBox28->Name = L"textBox28";
			this->textBox28->ReadOnly = true;
			this->textBox28->Size = System::Drawing::Size(326, 48);
			this->textBox28->TabIndex = 9;
			this->textBox28->Text = L"Sex :\r\n";
			// 
			// textBox29
			// 
			this->textBox29->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox29->Location = System::Drawing::Point(667, 3);
			this->textBox29->Name = L"textBox29";
			this->textBox29->ReadOnly = true;
			this->textBox29->Size = System::Drawing::Size(326, 48);
			this->textBox29->TabIndex = 10;
			this->textBox29->Text = L"Age :";
			// 
			// textBox30
			// 
			this->textBox30->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox30->Location = System::Drawing::Point(1331, 3);
			this->textBox30->Name = L"textBox30";
			this->textBox30->ReadOnly = true;
			this->textBox30->Size = System::Drawing::Size(326, 48);
			this->textBox30->TabIndex = 11;
			this->textBox30->Text = L"Status:\r\n";
			// 
			// textBox33
			// 
			this->textBox33->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox33->Location = System::Drawing::Point(3, 555);
			this->textBox33->Name = L"textBox33";
			this->textBox33->ReadOnly = true;
			this->textBox33->Size = System::Drawing::Size(432, 48);
			this->textBox33->TabIndex = 6;
			this->textBox33->Text = L"First and Last Name :";
			// 
			// modifyFLname
			// 
			this->modifyFLname->Dock = System::Windows::Forms::DockStyle::Fill;
			this->modifyFLname->Location = System::Drawing::Point(441, 555);
			this->modifyFLname->Name = L"modifyFLname";
			this->modifyFLname->Size = System::Drawing::Size(1559, 48);
			this->modifyFLname->TabIndex = 7;
			this->modifyFLname->Text = L"0";
			// 
			// textBox35
			// 
			this->textBox35->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox35->Location = System::Drawing::Point(3, 672);
			this->textBox35->Name = L"textBox35";
			this->textBox35->ReadOnly = true;
			this->textBox35->Size = System::Drawing::Size(432, 48);
			this->textBox35->TabIndex = 8;
			this->textBox35->Text = L"Department :";
			// 
			// modifyDepartment
			// 
			this->modifyDepartment->Dock = System::Windows::Forms::DockStyle::Fill;
			this->modifyDepartment->Location = System::Drawing::Point(441, 672);
			this->modifyDepartment->Name = L"modifyDepartment";
			this->modifyDepartment->Size = System::Drawing::Size(1559, 48);
			this->modifyDepartment->TabIndex = 9;
			this->modifyDepartment->Text = L"0";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->tableLayoutModify->SetColumnSpan(this->label3, 2);
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.9F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(3, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(1997, 201);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Fill in the new data to modify the patient information through their Old ID :";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// modifySubmitButton
			// 
			this->modifySubmitButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutModify->SetColumnSpan(this->modifySubmitButton, 2);
			this->modifySubmitButton->Location = System::Drawing::Point(3, 1023);
			this->modifySubmitButton->Name = L"modifySubmitButton";
			this->modifySubmitButton->Size = System::Drawing::Size(1997, 111);
			this->modifySubmitButton->TabIndex = 13;
			this->modifySubmitButton->Text = L"Submit";
			this->modifySubmitButton->UseVisualStyleBackColor = true;
			this->modifySubmitButton->Click += gcnew System::EventHandler(this, &MyForm::modifySubmitButton_Click);
			// 
			// modifyFindButton
			// 
			this->modifyFindButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->tableLayoutModify->SetColumnSpan(this->modifyFindButton, 2);
			this->modifyFindButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->modifyFindButton->Location = System::Drawing::Point(814, 333);
			this->modifyFindButton->Margin = System::Windows::Forms::Padding(3, 15, 3, 15);
			this->modifyFindButton->Name = L"modifyFindButton";
			this->modifyFindButton->Size = System::Drawing::Size(375, 87);
			this->modifyFindButton->TabIndex = 14;
			this->modifyFindButton->Text = L"Find";
			this->modifyFindButton->UseVisualStyleBackColor = true;
			this->modifyFindButton->Click += gcnew System::EventHandler(this, &MyForm::modifyFindButton_Click);
			// 
			// tabPageRemove
			// 
			this->tabPageRemove->Controls->Add(this->tableLayoutPanel1);
			this->tabPageRemove->Location = System::Drawing::Point(10, 40);
			this->tabPageRemove->Name = L"tabPageRemove";
			this->tabPageRemove->Size = System::Drawing::Size(2003, 1341);
			this->tabPageRemove->TabIndex = 6;
			this->tabPageRemove->Text = L"Remove";
			this->tabPageRemove->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				438)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->buttonRemove, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->removeID, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->textBox7, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->label8, 0, 2);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 10;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.75F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.75F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.75F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.75F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.75F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.75F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.75F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.75F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(2003, 1341);
			this->tableLayoutPanel1->TabIndex = 3;
			// 
			// buttonRemove
			// 
			this->buttonRemove->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->tableLayoutPanel1->SetColumnSpan(this->buttonRemove, 2);
			this->buttonRemove->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRemove->Location = System::Drawing::Point(814, 801);
			this->buttonRemove->Margin = System::Windows::Forms::Padding(3, 15, 3, 15);
			this->buttonRemove->Name = L"buttonRemove";
			this->buttonRemove->Size = System::Drawing::Size(375, 87);
			this->buttonRemove->TabIndex = 14;
			this->buttonRemove->Text = L"Remove";
			this->buttonRemove->UseVisualStyleBackColor = true;
			this->buttonRemove->Click += gcnew System::EventHandler(this, &MyForm::buttonRemove_Click);
			// 
			// removeID
			// 
			this->removeID->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->removeID->Location = System::Drawing::Point(441, 618);
			this->removeID->Name = L"removeID";
			this->removeID->Size = System::Drawing::Size(1559, 48);
			this->removeID->TabIndex = 12;
			// 
			// textBox7
			// 
			this->textBox7->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(3, 618);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(432, 48);
			this->textBox7->TabIndex = 11;
			this->textBox7->Text = L"ID :";
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->tableLayoutPanel1->SetColumnSpan(this->label8, 2);
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(3, 318);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(1997, 117);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Fill In the patient\'s ID to remove them :";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tabPageSearch
			// 
			this->tabPageSearch->BackColor = System::Drawing::Color::White;
			this->tabPageSearch->Controls->Add(this->splitContainerSearch);
			this->tabPageSearch->Location = System::Drawing::Point(10, 40);
			this->tabPageSearch->Name = L"tabPageSearch";
			this->tabPageSearch->Size = System::Drawing::Size(2003, 1341);
			this->tabPageSearch->TabIndex = 2;
			this->tabPageSearch->Text = L"Search";
			// 
			// splitContainerSearch
			// 
			this->splitContainerSearch->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainerSearch->Location = System::Drawing::Point(0, 0);
			this->splitContainerSearch->Name = L"splitContainerSearch";
			// 
			// splitContainerSearch.Panel1
			// 
			this->splitContainerSearch->Panel1->Controls->Add(this->tableLayoutSearch);
			// 
			// splitContainerSearch.Panel2
			// 
			this->splitContainerSearch->Panel2->Controls->Add(this->tableLayoutSearchResults);
			this->splitContainerSearch->Panel2MinSize = 350;
			this->splitContainerSearch->Size = System::Drawing::Size(2003, 1341);
			this->splitContainerSearch->SplitterDistance = 1098;
			this->splitContainerSearch->TabIndex = 0;
			// 
			// tableLayoutSearch
			// 
			this->tableLayoutSearch->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tableLayoutSearch->ColumnCount = 2;
			this->tableLayoutSearch->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				438)));
			this->tableLayoutSearch->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutSearch->Controls->Add(this->label5, 0, 8);
			this->tableLayoutSearch->Controls->Add(this->tableLayoutPanel8, 0, 4);
			this->tableLayoutSearch->Controls->Add(this->searchID, 1, 1);
			this->tableLayoutSearch->Controls->Add(this->textBox46, 0, 1);
			this->tableLayoutSearch->Controls->Add(this->textBox47, 0, 2);
			this->tableLayoutSearch->Controls->Add(this->searchFLname, 1, 2);
			this->tableLayoutSearch->Controls->Add(this->textBox49, 0, 3);
			this->tableLayoutSearch->Controls->Add(this->searchDepartment, 1, 3);
			this->tableLayoutSearch->Controls->Add(this->label4, 0, 0);
			this->tableLayoutSearch->Controls->Add(this->tableLayoutPanel3, 0, 6);
			this->tableLayoutSearch->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutSearch->Location = System::Drawing::Point(0, 0);
			this->tableLayoutSearch->Name = L"tableLayoutSearch";
			this->tableLayoutSearch->RowCount = 9;
			this->tableLayoutSearch->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15.38461F)));
			this->tableLayoutSearch->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.890111F)));
			this->tableLayoutSearch->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.890111F)));
			this->tableLayoutSearch->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.890111F)));
			this->tableLayoutSearch->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.890111F)));
			this->tableLayoutSearch->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.890111F)));
			this->tableLayoutSearch->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.890111F)));
			this->tableLayoutSearch->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 9.890111F)));
			this->tableLayoutSearch->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15.38461F)));
			this->tableLayoutSearch->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutSearch->Size = System::Drawing::Size(1098, 1341);
			this->tableLayoutSearch->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->tableLayoutSearch->SetColumnSpan(this->label5, 2);
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(3, 1130);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(1092, 211);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Enter 0 in unnecessary fields.\r\n(0 in all fields prints the entire patient list)";
			this->label5->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// tableLayoutPanel8
			// 
			this->tableLayoutPanel8->ColumnCount = 6;
			this->tableLayoutSearch->SetColumnSpan(this->tableLayoutPanel8, 2);
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel8->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel8->Controls->Add(this->searchStatus, 5, 0);
			this->tableLayoutPanel8->Controls->Add(this->searchAge, 3, 0);
			this->tableLayoutPanel8->Controls->Add(this->searchSex, 1, 0);
			this->tableLayoutPanel8->Controls->Add(this->textBox42, 0, 0);
			this->tableLayoutPanel8->Controls->Add(this->textBox43, 2, 0);
			this->tableLayoutPanel8->Controls->Add(this->textBox44, 4, 0);
			this->tableLayoutPanel8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel8->Location = System::Drawing::Point(3, 605);
			this->tableLayoutPanel8->Name = L"tableLayoutPanel8";
			this->tableLayoutPanel8->RowCount = 1;
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel8->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 126)));
			this->tableLayoutPanel8->Size = System::Drawing::Size(1092, 126);
			this->tableLayoutPanel8->TabIndex = 3;
			// 
			// searchStatus
			// 
			this->searchStatus->Dock = System::Windows::Forms::DockStyle::Fill;
			this->searchStatus->Location = System::Drawing::Point(913, 3);
			this->searchStatus->Name = L"searchStatus";
			this->searchStatus->Size = System::Drawing::Size(176, 48);
			this->searchStatus->TabIndex = 13;
			this->searchStatus->Text = L"0";
			// 
			// searchAge
			// 
			this->searchAge->Dock = System::Windows::Forms::DockStyle::Fill;
			this->searchAge->Location = System::Drawing::Point(549, 3);
			this->searchAge->Name = L"searchAge";
			this->searchAge->Size = System::Drawing::Size(176, 48);
			this->searchAge->TabIndex = 12;
			this->searchAge->Text = L"0";
			// 
			// searchSex
			// 
			this->searchSex->Dock = System::Windows::Forms::DockStyle::Fill;
			this->searchSex->Location = System::Drawing::Point(185, 3);
			this->searchSex->Name = L"searchSex";
			this->searchSex->Size = System::Drawing::Size(176, 48);
			this->searchSex->TabIndex = 10;
			this->searchSex->Text = L"0";
			// 
			// textBox42
			// 
			this->textBox42->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox42->Location = System::Drawing::Point(3, 3);
			this->textBox42->Name = L"textBox42";
			this->textBox42->ReadOnly = true;
			this->textBox42->Size = System::Drawing::Size(176, 48);
			this->textBox42->TabIndex = 9;
			this->textBox42->Text = L"Sex :\r\n";
			// 
			// textBox43
			// 
			this->textBox43->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox43->Location = System::Drawing::Point(367, 3);
			this->textBox43->Name = L"textBox43";
			this->textBox43->ReadOnly = true;
			this->textBox43->Size = System::Drawing::Size(176, 48);
			this->textBox43->TabIndex = 10;
			this->textBox43->Text = L"Age :";
			// 
			// textBox44
			// 
			this->textBox44->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox44->Location = System::Drawing::Point(731, 3);
			this->textBox44->Name = L"textBox44";
			this->textBox44->ReadOnly = true;
			this->textBox44->Size = System::Drawing::Size(176, 48);
			this->textBox44->TabIndex = 11;
			this->textBox44->Text = L"Status:\r\n";
			// 
			// searchID
			// 
			this->searchID->Dock = System::Windows::Forms::DockStyle::Fill;
			this->searchID->Location = System::Drawing::Point(441, 209);
			this->searchID->Name = L"searchID";
			this->searchID->Size = System::Drawing::Size(654, 48);
			this->searchID->TabIndex = 4;
			this->searchID->Text = L"0";
			// 
			// textBox46
			// 
			this->textBox46->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox46->Location = System::Drawing::Point(3, 209);
			this->textBox46->Name = L"textBox46";
			this->textBox46->ReadOnly = true;
			this->textBox46->Size = System::Drawing::Size(432, 48);
			this->textBox46->TabIndex = 5;
			this->textBox46->Text = L"ID :";
			// 
			// textBox47
			// 
			this->textBox47->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox47->Location = System::Drawing::Point(3, 341);
			this->textBox47->Name = L"textBox47";
			this->textBox47->ReadOnly = true;
			this->textBox47->Size = System::Drawing::Size(432, 48);
			this->textBox47->TabIndex = 6;
			this->textBox47->Text = L"First and Last Name :";
			// 
			// searchFLname
			// 
			this->searchFLname->Dock = System::Windows::Forms::DockStyle::Fill;
			this->searchFLname->Location = System::Drawing::Point(441, 341);
			this->searchFLname->Name = L"searchFLname";
			this->searchFLname->Size = System::Drawing::Size(654, 48);
			this->searchFLname->TabIndex = 7;
			this->searchFLname->Text = L"0";
			// 
			// textBox49
			// 
			this->textBox49->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox49->Location = System::Drawing::Point(3, 473);
			this->textBox49->Name = L"textBox49";
			this->textBox49->ReadOnly = true;
			this->textBox49->Size = System::Drawing::Size(432, 48);
			this->textBox49->TabIndex = 8;
			this->textBox49->Text = L"Department :";
			// 
			// searchDepartment
			// 
			this->searchDepartment->Dock = System::Windows::Forms::DockStyle::Fill;
			this->searchDepartment->Location = System::Drawing::Point(441, 473);
			this->searchDepartment->Name = L"searchDepartment";
			this->searchDepartment->Size = System::Drawing::Size(654, 48);
			this->searchDepartment->TabIndex = 9;
			this->searchDepartment->Text = L"0";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->tableLayoutSearch->SetColumnSpan(this->label4, 2);
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(3, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1092, 206);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Fill in the data to use as a search filter:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutSearch->SetColumnSpan(this->tableLayoutPanel3, 2);
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Controls->Add(this->searchButton, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->searchClear, 1, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 869);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 126)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(1092, 126);
			this->tableLayoutPanel3->TabIndex = 14;
			// 
			// searchButton
			// 
			this->searchButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->searchButton->Location = System::Drawing::Point(3, 3);
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(540, 120);
			this->searchButton->TabIndex = 12;
			this->searchButton->Text = L"Search";
			this->searchButton->UseVisualStyleBackColor = true;
			this->searchButton->Click += gcnew System::EventHandler(this, &MyForm::searchButton_Click);
			// 
			// searchClear
			// 
			this->searchClear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->searchClear->Location = System::Drawing::Point(549, 3);
			this->searchClear->Name = L"searchClear";
			this->searchClear->Size = System::Drawing::Size(540, 120);
			this->searchClear->TabIndex = 13;
			this->searchClear->Text = L"Clear";
			this->searchClear->UseVisualStyleBackColor = true;
			this->searchClear->Click += gcnew System::EventHandler(this, &MyForm::searchClear_Click);
			// 
			// tableLayoutSearchResults
			// 
			this->tableLayoutSearchResults->ColumnCount = 1;
			this->tableLayoutSearchResults->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutSearchResults->Controls->Add(this->searchResults, 0, 1);
			this->tableLayoutSearchResults->Controls->Add(this->textBox1, 0, 0);
			this->tableLayoutSearchResults->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutSearchResults->Location = System::Drawing::Point(0, 0);
			this->tableLayoutSearchResults->Name = L"tableLayoutSearchResults";
			this->tableLayoutSearchResults->RowCount = 2;
			this->tableLayoutSearchResults->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				55)));
			this->tableLayoutSearchResults->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutSearchResults->Size = System::Drawing::Size(901, 1341);
			this->tableLayoutSearchResults->TabIndex = 0;
			// 
			// searchResults
			// 
			this->searchResults->Dock = System::Windows::Forms::DockStyle::Fill;
			this->searchResults->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchResults->Location = System::Drawing::Point(3, 58);
			this->searchResults->Multiline = true;
			this->searchResults->Name = L"searchResults";
			this->searchResults->ReadOnly = true;
			this->searchResults->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->searchResults->Size = System::Drawing::Size(895, 1280);
			this->searchResults->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Location = System::Drawing::Point(3, 3);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(895, 49);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Results";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)), static_cast<System::Int32>(static_cast<System::Byte>(229)),
				static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->ClientSize = System::Drawing::Size(2023, 1391);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::WindowsDefaultBounds;
			this->Text = L"Clinic Management";
			this->TransparencyKey = System::Drawing::Color::RosyBrown;
			this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPageCreate->ResumeLayout(false);
			this->tableLayoutCreate->ResumeLayout(false);
			this->tableLayoutCreate->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tabPageAdd->ResumeLayout(false);
			this->tableLayoutAdd->ResumeLayout(false);
			this->tableLayoutAdd->PerformLayout();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->tabPageModify->ResumeLayout(false);
			this->tableLayoutModify->ResumeLayout(false);
			this->tableLayoutModify->PerformLayout();
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			this->tabPageRemove->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tabPageSearch->ResumeLayout(false);
			this->splitContainerSearch->Panel1->ResumeLayout(false);
			this->splitContainerSearch->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainerSearch))->EndInit();
			this->splitContainerSearch->ResumeLayout(false);
			this->tableLayoutSearch->ResumeLayout(false);
			this->tableLayoutSearch->PerformLayout();
			this->tableLayoutPanel8->ResumeLayout(false);
			this->tableLayoutPanel8->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutSearchResults->ResumeLayout(false);
			this->tableLayoutSearchResults->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
	}

	private: System::Void createButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((createID->TextLength == 0) || (createFLname->TextLength == 0) || (createDepartment->TextLength == 0) || (createAge->TextLength == 0) || (createSex->TextLength == 0) || (createStatus->TextLength == 0))
		{
			MessageBox::Show(tabPageCreate, "Please fill in all the fields", "Error", MessageBoxButtons::OK);
		}
		else
		{
			FileHandling f;

			Patient p(1);

			p.stringtowchar(createID->Text, createFLname->Text, createDepartment->Text, createAge->Text, createSex->Text, createStatus->Text);
			f.create("clinique.dat", "info.dat", p);

			MessageBox::Show(tabPageCreate, "Created file!", "Success!", MessageBoxButtons::OK);

			createID->Text = "";
			createFLname->Text = "";
			createDepartment->Text = "";
			createAge->Text = "";
			createSex->Text = "";
			createStatus->Text = "";
		}
	}
	private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((addID->TextLength == 0) || (addFLname->TextLength == 0) || (addDepartment->TextLength == 0) || (addAge->TextLength == 0) || (addSex->TextLength == 0) || (addStatus->TextLength == 0))
		{
			MessageBox::Show(tabPageAdd, "Please fill in all the fields", "Error", MessageBoxButtons::OK);
		}
		else
		{
			FileHandling f;

			Patient p2(1);

			p2.stringtowchar(addID->Text, addFLname->Text, addDepartment->Text, addAge->Text, addSex->Text, addStatus->Text);
			int temp = f.add("clinique.dat", "info.dat", p2);
			if (temp == 1)
				MessageBox::Show(tabPageAdd, "Added Patient!", "Success!", MessageBoxButtons::OK);
			else if (temp == 2)
				MessageBox::Show(tabPageAdd, "Patient IDs must be unique", "Patient exists", MessageBoxButtons::OK);
			else
				MessageBox::Show(tabPageAdd, "", "Unknown Error", MessageBoxButtons::OK);

			addID->Text = "";
			addFLname->Text = "";
			addDepartment->Text = "";
			addAge->Text = "";
			addSex->Text = "";
			addStatus->Text = "";
		}
	}
	private: System::Void modifyFindButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((modifyOldID->TextLength == 0))
		{
			MessageBox::Show(tabPageModify, "Please fill the old ID", "Error", MessageBoxButtons::OK);
		}
		else
		{
			FileHandling f;

			if (f.checkifnotdeleted("clinique.dat", (modifyOldID->Text)) != 0)
				MessageBox::Show(tabPageModify, "Patient exists!", "Found!", MessageBoxButtons::OK);
			else
				MessageBox::Show(tabPageModify, "Patient Does not Exist", "Not found", MessageBoxButtons::OK);
		}
	}
	private: System::Void modifySubmitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((modifyOldID->TextLength == 0))
		{
			MessageBox::Show(tabPageModify, "Please fill the old ID", "Error", MessageBoxButtons::OK);
		}
		else
		{
			FileHandling f;
			Patient p3(1);
			p3.stringtowchar(modifyOldID->Text, modifyFLname->Text, modifyDepartment->Text, modifyAge->Text, modifySex->Text, modifyStatus->Text);

			int temp = f.modifyPatient("clinique.dat", modifyOldID->Text, p3);
			if (temp == 1)
				MessageBox::Show(tabPageModify, "Modified Patient!", "Success!", MessageBoxButtons::OK);
			else if (temp == 2)
				MessageBox::Show(tabPageModify, "Patient IDs must be unique", "Patient exists", MessageBoxButtons::OK);
			else
				MessageBox::Show(tabPageModify, "", "Unknown Error", MessageBoxButtons::OK);
		}
		modifyOldID->Text = "";
		modifyFLname->Text = "";
		modifyDepartment->Text = "";
		modifyAge->Text = "";
		modifySex->Text = "";
		modifyStatus->Text = "";
	}
	private: System::Void buttonRemove_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((removeID->TextLength == 0))
		{
			MessageBox::Show(tabPageRemove, "Please fill the ID", "Error", MessageBoxButtons::OK);
		}
		else
		{
			FileHandling f;

			bool temp = f.removepatient("clinique.dat", removeID->Text);
			if (temp)
				MessageBox::Show(tabPageRemove, "Removed Patient!", "Success!", MessageBoxButtons::OK);
			else
				MessageBox::Show(tabPageRemove, "Patient Does not exist", "Not found", MessageBoxButtons::OK);

			removeID->Text = "";
		}
	}
	private: System::Void searchButton_Click(System::Object^ sender, System::EventArgs^ e) {
		FileHandling f;
		Patient filter(1), p(1);
		filter.stringtowchar(searchID->Text, searchFLname->Text, searchDepartment->Text, searchAge->Text, searchSex->Text, searchStatus->Text);
		f.patientfile = fopen("clinique.dat", "rb");

		while (fread(&p, sizeof(Patient), 1, f.patientfile) == 1)
		{
			searchResults->Text = searchResults->Text + f.searchResultMatch(filter, p) + "\r\n";
		}

		fclose(f.patientfile);
		if (searchResults->Text->Length == 0)
			searchResults->Text = "No Results!";

		searchID->Text = "";
		searchFLname->Text = "";
		searchDepartment->Text = "";
		searchAge->Text = "";
		searchSex->Text = "";
		searchStatus->Text = "";
	}

	private: System::Void searchClear_Click(System::Object^ sender, System::EventArgs^ e) {
		searchResults->Text = "";
	}

	};
};
