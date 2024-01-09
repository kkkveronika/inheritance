//Menu.cpp
#include "Menu.h"
#include"Function.h"
using namespace std;


void MainMenu() {
	bool check_enter;
	vector<class CInStock>product_in_stock;
	vector<class CInStock> Copy_product_in_stock;
	bool exit = 0;
	while (exit == false) {
		cout << "Test - 1\nEnter data - 2\nDelete products - 3\nLook products - 4\nLook only products in stock - 5\nExit - 6\nChoose: ";
		int out_user_choice = GetInt();
		switch (out_user_choice) {
		case(Test): {
			TestProducts();
		}break;
		case(Input):{
			product_in_stock=InputMenu();
		}break;
		case(Delete): {
			check_enter = CheckExistanceData(product_in_stock);
			if (check_enter == true) {
				DeleteProduct(product_in_stock);
				cout << "Do you want to save? Yes - 1, No - 2: ";
				int save_choice = GetSaveChoice();
				if (save_choice == 1) {
					SaveInFile(product_in_stock);
				}
				if (save_choice == 2) {
					break;
				}
			}
			else {
				cout << "You don't enter data. Please, choose item '2'" << endl;
				break;
			}
		}break;
		case(Look_products): {
			check_enter = CheckExistanceData(product_in_stock);
			if (check_enter == true) {
				LookProducts(product_in_stock);
				cout << "Do you want to save? Yes - 1, No - 2: ";
				int save_choice = GetSaveChoice();
				if (save_choice == 1) {
					SaveInFile(product_in_stock);
				}
				if (save_choice == 2) {
					break;
				}
			}
			else {
				cout << "You don't enter data. Please, choose item '2'" << endl;
				break;
			}
		}break;
		case(Available_in_stock): {
			check_enter = CheckExistanceData(product_in_stock);
			if (check_enter == true) {
				Copy_product_in_stock = Availability(product_in_stock);
				if ( static_cast<int>(Copy_product_in_stock.size()) == 0) {
					cout << endl << "No products" << endl << endl;
				}
				else {
					for (int i = 0; i< static_cast<int>(Copy_product_in_stock.size()); i++) {
						Copy_product_in_stock[i].Show(i);
					}
					cout << "Do you want to save? Yes - 1, No - 2: ";
					int save_choice = GetSaveChoice();
					if (save_choice == 1) {
						SaveInFile(Copy_product_in_stock);
					}
					if (save_choice == 2) {
						break;
					}
				}
			}
			else {
				cout << "You don't enter data. Please, choose item '2'" << endl;
				break;
			}
		}break;
		case(Exit): {
			exit = true;
		}break;
		default: {
			cout << "Error. Try again." << endl;
		}break;
		}
	}
}


vector<class CInStock> InputMenu() {
	bool exit = false;
	vector<class CInStock>Product_in_stock;
	while (exit == false) {
		cout << "Add products manual - 1\nAdd of file - 2\nBack - 3\nChoose: ";
		int in_user_choice = GetInt();
		switch (in_user_choice) {
		case(Add_manual): {
			CreateStock(Product_in_stock);
			cout << "Do you want to save? Yes - 1, No - 2: ";
			int save_choice = GetSaveChoice();
			if (save_choice == 1) {
				SaveInFile(Product_in_stock);
			}
			if (save_choice == 2) {
				break;
			}
		}break;
		case(Add_file): {
			InFile(Product_in_stock);
		}break;
		case(Back): {
			exit = true;
		}break;
		default: {
			cout << "Error. Try again." << endl;
		}break;
		}
	}
	return Product_in_stock;
}