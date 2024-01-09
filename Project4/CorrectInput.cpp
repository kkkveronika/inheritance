//CorrectInput.cpp
#include <iostream>
#include "CorrectInput.h"
using namespace std;

string GetString() {
	int count = 0;
	int flag = 0;
	string Enter;
	while (flag != 1) {
		cin >> Enter;
		char Symbol;
		int len = (int)Enter.length();
		for (int i = 0; i < len; i++) {
			Symbol = Enter[i];
			if (!((Symbol >= 'A' && Symbol <= 'Z') || (Symbol >= 'a' && Symbol <= 'z'))) {
				count += 1;
			}
		}
		if (count > 0) {
			cout << "Error! Try again." << endl;
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			count = 0;
		}
		else {
			flag = 1;
		}
	}
	return Enter;
}

int GetInt() {
	int input;
	cin >> input;
	while (!(input >= 1)) {
		cout << "Error! Try again." << endl;
		cin.clear();
		cin.sync();
		cin.ignore(INT_MAX, '\n');
		cin >> input;
	}
	return input;
}

string GetAbailability() {
	int flag = 0;
	string Enter;
	while (flag != 1) {
		cin >> Enter;
		if (!(Enter=="Have" || Enter=="have" || Enter=="nothave" || Enter=="Nothave")) {
			cout << "Error! Try again." << endl;
				cin.clear();
				cin.ignore(INT_MAX, '\n');
		}
		else {
			flag = 1;
		}
	}
	return Enter;
}

int GetSaveChoice() {
	int input;
	cin >> input;
	while (!(input >= 1 && input <= 2)) {
		cout << "Error. Try again." << endl;
		cin.clear();
		cin.sync();
		cin.ignore(INT_MAX, '\n');
		cin >> input;
	}
	return input;
}

bool GetBool() {
	bool input;
	cin >> input;
	while (!(input == 0 || input == 1)) {
		cout << "Error. Try again." << endl;
		cin.clear();
		cin.sync();
		cin.ignore(INT_MAX, '\n');
		cin >> input;
	}
	return input;
}
