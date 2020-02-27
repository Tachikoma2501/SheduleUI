#include "stdafx.h"
#include <chrono>

#pragma once

namespace SheduleUI {
	//Includes the following namespace commands for simplification
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ClockForm
	/// </summary>
	public ref class ClockForm : public System::Windows::Forms::Form
	{		//Defines the integers second, minute, and hour
			//creates the string for minute and second
			static int Second = 0;
		    static int Minute = 0;
			static int Hour = 0;
			String^ Sec;
		    String^ Min;
	private: System::Windows::Forms::Button^  TimerStart;

			 //String^ Hour;

	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
			 

	public:
		ClockForm(void)
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
		~ClockForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  Time;

	protected:
	private: System::ComponentModel::IContainer^  components;

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
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Time = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->TimerStart = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &ClockForm::timer1_Tick);
			// 
			// Time
			// 
			this->Time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Time->Location = System::Drawing::Point(56, 21);
			this->Time->Name = L"Time";
			this->Time->Size = System::Drawing::Size(841, 341);
			this->Time->TabIndex = 0;
			this->Time->Text = L"0:0:0";
			this->Time->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Time->Click += gcnew System::EventHandler(this, &ClockForm::label1_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker1->Location = System::Drawing::Point(309, 405);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(300, 38);
			this->dateTimePicker1->TabIndex = 1;
			// 
			// TimerStart
			// 
			this->TimerStart->Location = System::Drawing::Point(309, 515);
			this->TimerStart->Name = L"TimerStart";
			this->TimerStart->Size = System::Drawing::Size(327, 94);
			this->TimerStart->TabIndex = 2;
			this->TimerStart->Text = L"Start Timer";
			this->TimerStart->UseVisualStyleBackColor = true;
			this->TimerStart->Click += gcnew System::EventHandler(this, &ClockForm::TimerStart_Click);
			// 
			// ClockForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1001, 652);
			this->Controls->Add(this->TimerStart);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->Time);
			this->Name = L"ClockForm";
			this->Text = L"Timer/Clock";
			this->Load += gcnew System::EventHandler(this, &ClockForm::ClockForm_Load);
			this->ResumeLayout(false);

		}

#pragma endregion
	//The timer feature
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		//Counting upwards the seconds using the timer feature
		Second++;
		//if statement for when seconds reach 60, add 1 minute to the counter
		if (Second == 60) {
			Second = 0;
			Minute++;
		}
		/*Minute++;
		if (Minute == 60) {
			Minute = 0;
			Hour++;
		}*/
		//converts the functions Sec and Min to string
		Sec = Convert::ToString(Second);
		Min = Convert::ToString(Minute);
		//Hr = Convert::ToString(Hour);
		//creates the text for the timer to show the user
		Time->Text = /*Hr + ":" +*/ Min + ":" + Sec;
		

	}
	//These are the "On Click" features for the following functions for the ClockForm Design
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void ClockForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void TimerStart_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
