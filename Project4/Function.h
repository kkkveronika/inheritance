	//Function.h
	#pragma once

	#include<iostream>
	#include<fstream>
	#include"ChildClass.h"
	#include"CorrectInput.h"
	#include "Menu.h"
	void CreateStock(vector<class CInStock>&product_in_stock);

	void InFile(vector<class CInStock>& product_in_stock);

	vector<class CInStock> Availability(vector<class CInStock>& product_in_stock);

	vector<class CInStock>& DeleteProduct(vector<class CInStock>& product_in_stock);

	void LookProducts(vector<class CInStock>& product_in_stock);

	void SaveInFile(vector<class CInStock>& product_in_stock);

	bool CheckExistanceData(vector<class CInStock>& product_in_stock);