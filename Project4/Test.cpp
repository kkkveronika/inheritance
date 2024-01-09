//Test.cpp
#include"Test.h"

void TestProducts() {
	bool Check_test1 = false;
	bool Check_test2 = false;
	bool Check_test3 = false;
	vector<class CInStock> Test1;
	vector<class CInStock> Copy_test1;
	vector<class CInStock> Test_result1;

	vector<class CInStock> Test2;
	vector<class CInStock> Copy_test2;
	vector<class CInStock> Test_result2;

	vector<class CInStock> Test3;
	vector<class CInStock> Copy_test3;

	CInStock Product1("Apple", 5, "LoveApple", 10, 50, "have");
	CInStock Product2("Orange", 7, "LoveOrange", 12, 84, "nothave");
	CInStock Product3("Mango", 2, "LoveMango", 50, 100, "Have");

	Test1.push_back(Product1);
	Test1.push_back(Product2);
	Test1.push_back(Product3);

	Test_result1.push_back(Product1);
	Test_result1.push_back(Product3);


	Copy_test1 = Availability(Test1);

	CInStock Product4("Apple", 5, "LoveApple", 10, 50, "Nothave");
	CInStock Product5("Orange", 7, "LoveOrange", 12, 84, "nothave");
	CInStock Product6("Mango", 2, "LoveMango", 50, 100, "have");

	Test2.push_back(Product4);
	Test2.push_back(Product5);
	Test2.push_back(Product6);

	Test_result2.push_back(Product6);

	Copy_test2=Availability(Test2);

	CInStock Product7("Apple", 5, "LoveApple", 10, 50, "Nothave");
	CInStock Product8("Orange", 7, "LoveOrange", 12, 84, "nothave");
	CInStock Product9("Mango", 2, "LoveMango", 50, 100, "Nothave");

	Test3.push_back(Product7);
	Test3.push_back(Product8);
	Test3.push_back(Product9);

	Copy_test3 = Availability(Test3);

	if ( static_cast<int>(Copy_test1.size()) ==  static_cast<int>(Test_result1.size())) {
		for (int i = 0; i <  static_cast<int>(Copy_test1.size()); i++) {
			if ((Copy_test1[i].GetAvailability() == Test_result1[i].GetAvailability() && Copy_test1[i].GetMaker() == Test_result1[i].GetMaker()
				&& Copy_test1[i].GetName() == Test_result1[i].GetName() && Copy_test1[i].GetPrice() == Test_result1[i].GetPrice()
				&& Copy_test1[i].GetTotal_price() == Test_result1[i].GetTotal_price() && Copy_test1[i].GetVolume() == Test_result1[i].GetVolume())) {
				Check_test1 = true;
			}
			else {
				Check_test1 = false;
				cout << endl << "Test ¹1 was negative." << endl << endl;
				cout << "The result of the work:" << endl;
				for (int j = 0; j <  static_cast<int>(Copy_test1.size()); j++) {
					Copy_test1[i].Show(j);
				}
				cout << endl << "Expected result:" << endl;
				for (int k = 0; k <  static_cast<int>(Test_result1.size()); k++) {
					Test_result1[i].Show(k);
				}
			}
		}
	}
	else {
		Check_test1 = false;
		cout << endl << "Test ¹1 was negative." << endl << endl;
		cout << "The result of the work:" << endl;
		for (int i = 0; i <  static_cast<int>(Copy_test1.size()); i++) {
			Copy_test1[i].Show(i);
		}
		cout << endl << "Expected result:" << endl;
		for (int i = 0; i <  static_cast<int>(Test_result1.size()); i++) {
			Test_result1[i].Show(i);
		}
	}

	if ( static_cast<int>(Copy_test2.size()) ==  static_cast<int>(Test_result2.size())) {
		for (int n = 0; n <  static_cast<int>(Copy_test2.size()); n++) {
			if (Copy_test2[n].GetAvailability() == Test_result2[n].GetAvailability() && Copy_test2[n].GetMaker() == Test_result2[n].GetMaker()
				&& Copy_test2[n].GetName() == Test_result2[n].GetName() && Copy_test2[n].GetPrice() == Test_result2[n].GetPrice()
				&& Copy_test2[n].GetTotal_price() == Test_result2[n].GetTotal_price() && Copy_test2[n].GetVolume() == Test_result2[n].GetVolume()) {
				Check_test2 = true;
			}
			else {
				Check_test2 = false;
				cout << endl << "Test ¹2 was negative." << endl << endl;
				cout << "The result of the work:" << endl;
				for (int m = 0; m <  static_cast<int>(Copy_test2.size()); m++) {
					Copy_test2[m].Show(m);
				}
				cout << endl << "Expected result:" << endl;
				for (int f = 0; f <  static_cast<int>(Test_result2.size()); f++) {
					Test_result2[f].Show(f);
				}
			}
		}
	}
	else {
		Check_test2 = false;
		cout << endl << "Test ¹2 was negative." << endl << endl;
		cout << "The result of the work:" << endl;
		for (int i = 0; i <  static_cast<int>(Copy_test2.size()); i++) {
			Copy_test2[i].Show(i);
		}
		cout << endl << "Expected result:" << endl;
		for (int i = 0; i <  static_cast<int>(Test_result2.size()); i++) {
			Test_result2[i].Show(i);
		}
	}

	if ( static_cast<int>(Copy_test3.size()) == 0) {
		Check_test3 = true;
	}
	else {
		Check_test3 = false;
		cout << endl << "Test ¹3 was negative." << endl << endl;
		cout << "The result of the work:" << endl;
		for (int i = 0; i <  static_cast<int>(Copy_test3.size()); i++) {
			Copy_test3[i].Show(i);
		}
		cout << endl << "Expected result:" << endl;
		cout << "No products" << endl;
	}

	if (Check_test1 == true && Check_test2 == true && Check_test3 == true) {
		cout << endl << "Test was successful" << endl;
	}
}
