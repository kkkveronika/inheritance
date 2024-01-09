//ParentClass.cpp
#include <iostream>
#include <string>
#include "ParentClass.h"

using namespace std;


void CProduct::SetName(string name) {
	this->Name = name;
}
string CProduct::GetName() {
	return Name;
}

void CProduct::SetVolume(int volume) {
	this->Volume = volume;
}
int CProduct::GetVolume() {
	return Volume;
}

void CProduct::SetMaker(string maker) {
	this->Maker = maker;
}
string CProduct::GetMaker() {
	return Maker;
}

void CProduct::SetPrice(int price) {
	this->Price = price;
}
int CProduct::GetPrice() {
	return Price;
}

void CProduct::SetTotal_price(int total_price) {
	this->Total_price = total_price;
}
int CProduct::GetTotal_price() {
	return Total_price;
}

CProduct::CProduct(string Name, int Volume, string Maker, int Price, int Total_price) {
	this->Name = Name;
	this->Volume = Volume;
	this->Maker = Maker;
	this->Price = Price;
	this->Total_price = Total_price;
}

CProduct::CProduct() {
}
CProduct::~CProduct() {}