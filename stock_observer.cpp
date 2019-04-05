#include "pch.h"
#include "stock_observer.h"
#include<iostream>
using namespace std;

int Stock_Observer::id_sequence = 1;

void Stock_Observer::notify(string stock_name)
{
	cout << "Object " << id << " notified about " << stock_name << endl;
}