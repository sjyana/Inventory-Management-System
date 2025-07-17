#include "AddProduct.h"
#include "Dashboard.h"
#include "AllProducts.h"

void InventorySystem::AddProduct::backToDashboard() {
    Dashboard^ dashboard = gcnew Dashboard();
    dashboard->Show();
    this->Hide();
}

void InventorySystem::AddProduct::allProductsForm() {
    AllProducts^ allProducts = gcnew AllProducts();
    allProducts->Show();
    this->Hide();
}
