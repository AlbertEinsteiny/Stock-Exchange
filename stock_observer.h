#pragma once

#include "stock.h"
#include "stock_exchange.h"
#include<string>
using namespace std;

class Stock_Exchange;

class Stock_Observer
{
	static int id_sequence;
	int id;
	Stock_Exchange* se;
public:
	//const
	Stock_Observer(Stock_Exchange* s)
	{
		se = s;
		id = id_sequence++;
	}
	void notify(string stock_name);
};