#pragma once
//Includes the headers files
#include "CalendarForm.h"
#include "AudioForm.h"
#include "ClockForm.h"
#include "Options.h"
#include "AlarmForm.h"

namespace SheduleUI {
	//Includes the following namespace commands for simplification
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	//Creates a terminal upon program running for debbugging purposes
	namespace Win32 {
		[DllImport("kernel32.dll", CallingConvention =CallingConvention::StdCall)]
		int AllocConsole();
		[DllImport("kernel32.dll", CallingConvention =CallingConvention::StdCall)]
		int FreeConsole();
	}


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
		//Windows forms to create the buttons
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::PictureBox^  pictureBox1;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(278, 369);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(273, 112);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Timer/Clock";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(779, 369);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(277, 112);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Calendar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(278, 540);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(273, 100);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Alarms";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(779, 540);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(277, 100);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Audio Library";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(520, 724);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(268, 97);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Options";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(498, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(317, 237);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(1293, 944);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Main Menu";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	//Calls the ClockForm window and loads it 
	this->Hide();
	SheduleUI::ClockForm object_name_clock;
	object_name_clock.ShowDialog();
	this->Show();
	}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	//Calls the CalendarForm window and loads it
	this->Hide();
	SheduleUI::CalendarForm object_name_calendar;
	object_name_calendar.ShowDialog();
	this->Show();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	//Calls the AlarmForm window and loads it
	this->Hide();
	SheduleUI::AlarmForm object_name_alarm;
	object_name_alarm.ShowDialog();
	this->Show();
	
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	//Calls the AudioForm window and loads it
	this->Hide();
	SheduleUI::AudioForm object_name_audio;
	object_name_audio.ShowDialog();
	this->Show();
}

private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	//Calls the options window and loads it
	this->Hide();
	SheduleUI::Options object_name_option;
	object_name_option.ShowDialog();
	this->Show();
}

private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
