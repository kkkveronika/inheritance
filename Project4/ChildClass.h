//ChildClass.h
#pragma once
#include "ParentClass.h"

class CInStock : public CProduct {
private:
	string Availability;
public:
	void SetAvailability(string Availability);
	string GetAvailability();
	void Show(int i);
	CInStock(string Name, int Volume, string Maker, int Price, int Total_price, string Availability);
	CInStock();
	~CInStock();
};