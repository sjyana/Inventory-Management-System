#include "AllSales.h"
#include "AddSales.h"
#include "Dashboard.h"

void InventorySystem::AllSales::backToDashboard() {
	Dashboard^ dashboard = gcnew Dashboard();
	dashboard->Show();
	this->Hide();
}

void InventorySystem::AllSales::addSaleForm() {
	AddSales^ addSales = gcnew AddSales();
	addSales->Show();
	this->Hide();
}