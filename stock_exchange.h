#pragma once


#include "stock_observer.h"
#include "stock.h"
#include<unordered_map>
#include<string>
#include<list>
using namespace std;

class Stock_Observer;
class Stock;

class Stock_Exchange
{
	unordered_map<string, Stock*> registered_stocks;  // key, value
	unordered_map<string, list<Stock_Observer*>> stock_observers;

public:
	void notify_observers(string stock_name);
	void unregister_observer(Stock_Observer& so, string stock_name);
	void register_observer(Stock_Observer& so, string stock_name);
	void add_stock(Stock& new_stock);
	void remove_stock(Stock& s);
	Stock& get_stock(string stock_name);
};