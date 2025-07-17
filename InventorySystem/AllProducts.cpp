#include "AllProducts.h"
#include "Dashboard.h"
#include "AddProduct.h"
#include "EditProduct.h"

void InventorySystem::AllProducts::backToDashboard(){
    Dashboard^ dashboard = gcnew Dashboard();
    dashboard->Show();
    this->Hide();
}

void InventorySystem::AllProducts::addProductForm() {
    AddProduct^ addProduct = gcnew AddProduct();
    addProduct->Show();
    this->Hide();
}

void InventorySystem::AllProducts::editProductForm() {
    Product^ productDetails = this->product;
	EditProduct^ editProduct = gcnew EditProduct(productDetails);
    editProduct->Show();
    this->Hide();
}