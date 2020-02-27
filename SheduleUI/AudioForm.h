#pragma once
#include "stdafx.h"

//Including namespace(s) as to simplify the code and prevent unecessary repetition
namespace SheduleUI {
	//Includes the following namespace commands for simplification
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AudioForm
	/// </summary>
	public ref class AudioForm : public System::Windows::Forms::Form
	{
	public:
		AudioForm(void)
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
		~AudioForm()
		{	//if statement for the Audio Form to delete
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(303, 497);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(234, 92);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Play";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AudioForm::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 31;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Alarm Clock", L"Bomb Siren", L"Fire Alarm", L"Japanese Temple",
					L"Railroad Crossing", L"Ship Bell", L"Siren", L"Submarine Diving Alarm", L"Warning Siren", L"Woop Woop"
			});
			this->listBox1->Location = System::Drawing::Point(230, 85);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(412, 252);
			this->listBox1->TabIndex = 1;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &AudioForm::listBox1_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(125, 415);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(398, 38);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &AudioForm::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(566, 399);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(225, 69);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Choose File";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AudioForm::button2_Click);
			// 
			// AudioForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(905, 660);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Name = L"AudioForm";
			this->Text = L"Audio Library";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		//When clicking the button1 in the windows form
		//it allows the user to use the openFileDialog feature to select a wav file
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;
		openFileDialog->ShowDialog();
		textBox1->Text = openFileDialog->FileName;

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		try
		{
			//Takes the file path from the textbox and plaves the wav file that has been selected. 
			System::Media::SoundPlayer^ player = gcnew System::Media::SoundPlayer();
			player->SoundLocation = textBox1->Text;
			player->Load();
			player->PlaySync();
		}
		catch (Win32Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
		
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
