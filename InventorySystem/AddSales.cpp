#include "AddSales.h"
#include "Dashboard.h"
#include "AllSales.h"

void InventorySystem::AddSales::backToDashboard() {
    Dashboard^ dashboard = gcnew Dashboard();
    dashboard->Show();
    this->Hide();
}

void InventorySystem::AddSales::allSalesForm() {
    AllSales^ allSales = gcnew AllSales();
    allSales->Show();
    this->Hide();
}
