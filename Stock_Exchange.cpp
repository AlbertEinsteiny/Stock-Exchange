// Stock_Exchange.cpp : This file contains the 'main' function.

#include "pch.h"
#include "stock_exchange.h"
#include "stock_observer.h"
#include<algorithm>
using namespace std;


void Stock_Exchange::add_stock(Stock& new_stock)
{
	registered_stocks[new_stock.get_name()] = &new_stock;
}

void Stock_Exchange::remove_stock(Stock& s)
{
	registered_stocks.erase(s.get_name());
	stock_observers.erase(s.get_name()); //Memory leak?
}

Stock& Stock_Exchange::get_stock(string stock_name)
{
	return *registered_stocks[stock_name];
}

void Stock_Exchange::register_observer(Stock_Observer& observer, string stock_name)
{
	stock_observers[stock_name].push_back(&observer);
}

void Stock_Exchange::unregister_observer(Stock_Observer& observer, string stock_name)
{
	auto l = stock_observers[stock_name];
	l.erase(std::find(l.begin(), l.end(), &observer));
}

void Stock_Exchange::notify_observers(string stock_name)
{
	for (auto &o : stock_observers[stock_name])
	{
		o->notify(stock_name);
	}
}
