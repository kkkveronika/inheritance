//ParentClass.h
#pragma once
#include <string>

using namespace std;

class CProduct {
protected:
	string Name;
	int Volume;
	string Maker;
	int Price;
	int Total_price;
public:
	void SetName(string Name);
	string GetName();
	void SetVolume(int Volume);
	int GetVolume();
	void SetMaker(string Maker);
	string GetMaker();
	void SetPrice(int Price);
	int GetPrice();
	void SetTotal_price(int Total_price);
	int GetTotal_price();
	CProduct(string Name, int Volume, string Maker, int Price, int Total_price);
	CProduct();
	virtual ~CProduct();
};

