#include "EditProduct.h"
#include "Dashboard.h"
#include "AllProducts.h"

void InventorySystem::EditProduct::backToDashboard() {
    Dashboard^ dashboard = gcnew Dashboard();
    dashboard->Show();
    this->Hide();
}

void InventorySystem::EditProduct::allProductsForm() {
    AllProducts^ allProducts = gcnew AllProducts();
    allProducts->Show();
    this->Hide();
}
