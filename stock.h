#pragma once

#include "stock_exchange.h"
#include<string>
using namespace std;

class Stock_Exchange;

class Stock
{
	string name;
	double price;
	Stock_Exchange* se;

public:
	//const
	Stock(Stock_Exchange* s, string stock_name, double stock_price)
	{
		se = s;
		name = stock_name;
		price = stock_price;
	}
	string get_name();
	void set_price(double p);
};