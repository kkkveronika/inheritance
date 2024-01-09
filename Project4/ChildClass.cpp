//ChildClass.cpp
#include <iostream>
#include <string>
#include "ChildClass.h"
using namespace std;

void CInStock::SetAvailability(string availability) {
	this->Availability = availability;
}
string CInStock::GetAvailability() {
	return Availability;
}

void CInStock::Show(int i) {
	cout << "Product " << i + 1 << ":\n" << GetName() << "  " << GetVolume() << " pieces\n" << "Maker: " << GetMaker() << "\n" << "1 pieces cost " << GetPrice() //
		<< "\n" << "Total price: " << GetTotal_price() << "\n" << "Product " << GetAvailability() << endl;
}

CInStock::CInStock(string Name, int Volume, string Maker, int Price, int Total_price, string Availability) {
	this->Name = Name;
	this->Volume = Volume;
	this->Maker = Maker;
	this->Price = Price;
	this->Total_price = Total_price;
	this->Availability = Availability;
}

CInStock::CInStock() {
	CProduct();
}

CInStock::~CInStock() {};