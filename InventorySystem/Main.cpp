#include "LoginForm.h"
#include "Dashboard.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	InventorySystem::LoginForm loginForm;
	loginForm.ShowDialog();
	if (loginForm.LoginSuccessful)
	{
		while (true) {
			InventorySystem::Dashboard dashboard;
			Application::Run(% dashboard);
			break;
		}
	}
}