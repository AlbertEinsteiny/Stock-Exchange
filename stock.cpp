#include "pch.h"
#include "stock.h"
using namespace std;

string Stock::get_name()
{
	return name;
}

void Stock::set_price(double p)
{
	price = p;
	se->notify_observers(this->name);
}