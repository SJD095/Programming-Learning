#include <iostream>
#include "BulkItem.h" 

using namespace std;

BulkItem::BulkItem(const string& bookName, double salesPrice, int qty, double salesDisc):BookItem(bookName, salesPrice)
{
	minQty_ = qty;
	discount_ = salesDisc;
}

double BulkItem::netPrice(int cnt) const
{
	if(cnt > minQty_)
	{
		return cnt * price_ * discount_;
	}
	
	else
	{
		return cnt * price_;
	}
}