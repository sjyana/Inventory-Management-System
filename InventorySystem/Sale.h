#pragma once

using namespace System;

public ref class Product {
public:
	int id;
	String^ product_name;
	int quantity;
	int total;
	String^ mode_of_payment;
	String^ date_time;
};