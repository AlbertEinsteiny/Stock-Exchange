#include "pch.h"
#include <iostream>
#include "stock_exchange.h"
#include "stock_observer.h"
#include "stock.h"

int main()
{
	Stock_Exchange se;

	Stock_Observer so1(&se), so2(&se);

	Stock nvda(&se, "NVDA", 190.90);
	Stock amz(&se, "AMZ", 1838.11);
	Stock aapl(&se, "AAPL", 196.94);

	se.register_observer(so1, "NVDA");
	se.register_observer(so2, "AMZ");
	se.register_observer(so1, "AAPL");

	nvda.set_price(190.90);
	amz.set_price(1838.11);
	aapl.set_price(196.94);
}