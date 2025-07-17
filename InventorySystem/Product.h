#pragma once

using namespace System;

public ref class Product {
	public:
		int id;
		String^ product_name;
		String^ category;
		int quantity;
		int price;
		String^ description;
};