//Menu.h
#pragma once

#include<iostream>
#include <vector>
#include"ChildClass.h"
#include"CorrectInput.h"
#include"Test.h"

enum {
	Test=1,
	Input,
	Delete,
	Look_products,
	Available_in_stock,
	Exit,
};

enum {
	Add_manual=1,
	Add_file,
	Back,
};

void MainMenu();

vector<class CInStock> InputMenu();