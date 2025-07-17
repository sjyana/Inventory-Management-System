#include "Dashboard.h"
#include "AddProduct.h"
#include "AllProducts.h"
#include "AddSales.h"
#include "AllSales.h"

void InventorySystem::Dashboard::addProductForm() {
    AddProduct^ addProduct = gcnew AddProduct();
    addProduct->Show();
    this->Hide();
}

void InventorySystem::Dashboard::allProductsForm() {
    AllProducts^ allProducts = gcnew AllProducts();
    allProducts->Show();
    this->Hide();
}

void InventorySystem::Dashboard::salesForm() {
    AddSales^ addSales = gcnew AddSales();
    addSales->Show();
    this->Hide();
}

void InventorySystem::Dashboard::allSalesForm() {
    AllSales^ allSales = gcnew AllSales();
    allSales->Show();
    this->Hide();
}


