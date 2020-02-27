#pragma once

namespace SheduleUI {
	//Includes the following namespace commands for simplification
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for AlarmForm
	/// </summary>
	public ref class AlarmForm : public System::Windows::Forms::Form
	{
	public:
	//Creates the following windows forms (features) for the AlarmForm
		int addend1;
		int addend2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  timelabel2;

	public:
		//Defines the integer seconds left in the timer
		//int timeLeft;
		int sectimeleft;

	public:
		int mintimeleft;
		AlarmForm(void)
		{
			//Sets the values for the tebox in the windows form
			InitializeComponent();
			textBox2->Text = "10";
			textBox3->Text = "10";
			//Converts the values in the text boxes into an integer
			int value1 = Convert::ToInt32(textBox2->Text);
			int value2 = Convert::ToInt32(textBox3->Text);
			sectimeleft = value2;
			mintimeleft = value1;
			//timeLeft = 30;
			
			//TODO: Add the constructor code here
			



		}
	private: System::Windows::Forms::Timer^  timer1;
	public:

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AlarmForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  timeLabel;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  startButton;
	private: System::ComponentModel::IContainer^  components;

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
		{	//Creates the new graphics for the following features in the windows forms window
			this->components = (gcnew System::ComponentModel::Container());
			this->timeLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->timelabel2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// timeLabel
			// 
			this->timeLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->timeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->timeLabel->Location = System::Drawing::Point(579, 166);
			this->timeLabel->Name = L"timeLabel";
			this->timeLabel->Size = System::Drawing::Size(189, 122);
			this->timeLabel->TabIndex = 0;
			this->timeLabel->Click += gcnew System::EventHandler(this, &AlarmForm::timeLabel_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(39, 167);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(247, 61);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Time Left";
			// 
			// startButton
			// 
			this->startButton->AutoSize = true;
			this->startButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->startButton->Location = System::Drawing::Point(239, 516);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(349, 95);
			this->startButton->TabIndex = 1;
			this->startButton->Text = L"Start";
			this->startButton->UseVisualStyleBackColor = true;
			this->startButton->Click += gcnew System::EventHandler(this, &AlarmForm::startButton_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &AlarmForm::timer1_Tick);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(315, 427);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(410, 38);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &AlarmForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(71, 419);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(215, 53);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Alarm Sound";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AlarmForm::button1_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker1->Location = System::Drawing::Point(388, 47);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 38);
			this->dateTimePicker1->TabIndex = 4;
			this->dateTimePicker1->Value = System::DateTime(2019, 4, 21, 15, 32, 24, 0);
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &AlarmForm::dateTimePicker1_ValueChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(156, 268);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(98, 36);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &AlarmForm::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 548);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(128, 32);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Set Time";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(156, 336);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(98, 36);
			this->textBox3->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(21, 268);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 32);
			this->label3->TabIndex = 8;
			this->label3->Text = L"minutes";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(21, 340);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(121, 32);
			this->label4->TabIndex = 9;
			this->label4->Text = L"seconds";
			// 
			// timelabel2
			// 
			this->timelabel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->timelabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->timelabel2->Location = System::Drawing::Point(315, 166);
			this->timelabel2->Name = L"timelabel2";
			this->timelabel2->Size = System::Drawing::Size(231, 122);
			this->timelabel2->TabIndex = 10;
			this->timelabel2->Click += gcnew System::EventHandler(this, &AlarmForm::label5_Click);
			// 
			// AlarmForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(866, 673);
			this->Controls->Add(this->timelabel2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->startButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->timeLabel);
			this->Name = L"AlarmForm";
			this->Text = L"AlarmForm1";
			this->Load += gcnew System::EventHandler(this, &AlarmForm::AlarmForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AlarmForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		//The if statement for when the seconds & minutes hit/less than 0
		//Countdowns the minutes & seconds timer 
		if (sectimeleft > 0 && mintimeleft > 0) {
			if (sectimeleft == 0){
				mintimeleft = mintimeleft - 1;
				timelabel2->Text = mintimeleft + "m";
				sectimeleft = 60;
			}
			sectimeleft = sectimeleft - 1;
			//setimeLeft = timeLeft - 1;
			//seconds
			timeLabel->Text = sectimeleft + "s";
		}
		//else statement for when the timer hits 0
		//It will play the selected wav file that the user chose in the menu
		else {
			timer1->Stop();
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = textBox1->Text;
			player->Load();
			player->PlaySync();
			startButton->Enabled = true;
		}
	}
//The "On Click function for the following windows form features"
private: System::Void timeLabel_Click(System::Object^  sender, System::EventArgs^  e) {
	//PrintDialog(timeLeft);
}
public: System::Void startButton_Click(System::Object^  sender, System::EventArgs^  e) {
	timer1->Start();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	//When clicking the button1 in the windows form
	//it allows the user to use the openFileDialog feature to select a wav file
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;
	openFileDialog->ShowDialog();
	textBox1->Text = openFileDialog->FileName;

}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
