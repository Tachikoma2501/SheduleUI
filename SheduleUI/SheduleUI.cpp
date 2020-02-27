#include "stdafx.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
//Runs the main application and runs the main menu
//MyForm windows form application
int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SheduleUI::MyForm form;
	Application::Run(%form);

	return 0;
}