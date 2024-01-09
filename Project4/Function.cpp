//Function.cpp
#include"Function.h"

void CreateStock(vector<class CInStock>& product_in_stock) {
	string Str = "";
	int Int = 0;
	cout << "Enter number of products: ";
	int numb = GetInt();
	CInStock* instock = new CInStock[numb];

	for (int i = 0; i < numb; i++) {
		cout << "Name of product: ";
		Str = GetString();
		instock[i].SetName(Str);
		cout << "Volume of product: ";
		Int = GetInt();
		instock[i].SetVolume(Int);
		cout << "Maker of product: ";
		Str = GetString();
		instock[i].SetMaker(Str);
		cout << "Price of product: ";
		Int = GetInt();
		instock[i].SetPrice(Int);
		cout << "Total price of product: ";
		Int = GetInt();
		instock[i].SetTotal_price(Int);
		cout << "Available on stock (have or nothave): ";
		Str = GetAbailability();
		instock[i].SetAvailability(Str);
		product_in_stock.push_back(instock[i]);
	}	
	delete[] instock;
	instock = nullptr;
}

void InFile(vector<class CInStock>& product_in_stock) {
	cout << "Enter the name of file(without file permission!): ";
	string name_file = "";
	cin >> name_file;
	ifstream file;
	file.open(name_file);
	if (!file.is_open()) {
		cout << "File opening error" << endl;
	}
	else {
		while (!file.eof()) {
			string name = "";
			int volume = {};
			string maker = "";
			int price = {};
			int total_price = {};
			string availability = "";
			file >> name;
			file >> volume;
			file >> maker;
			file>> price;
			file>> total_price;
			file >> availability;
			CInStock Product_in_stock(name, volume, maker, price, total_price, availability);
			product_in_stock.push_back(Product_in_stock);
		}
	}
	file.close();
}

vector<class CInStock>& DeleteProduct(vector<class CInStock>& product_in_stock) {
	vector<class CInStock>::iterator iter = product_in_stock.begin();
	cout << "Enter number of product you want to delete: ";
	int number_for_delete = GetInt();
	iter += (number_for_delete - 1);
	product_in_stock.erase(iter);
	return product_in_stock;
}

void LookProducts(vector<class CInStock>& product_in_stock) {
	for (int i = 0; i <  static_cast<int>(product_in_stock.size()); i++) {
		product_in_stock[i].Show(i);
	}
}

vector<class CInStock> Availability(vector<class CInStock>& product_in_stock) {
	vector<class CInStock>Copy_product_in_stock;
	for (int i = 0; i <  static_cast<int>(product_in_stock.size()); i++) {
		if (product_in_stock[i].GetAvailability() == "Have" || product_in_stock[i].GetAvailability() == "have") {
			Copy_product_in_stock.push_back(product_in_stock[i]);
		}
	}
	return Copy_product_in_stock;
}

void SaveInFile(vector<class CInStock>& product_in_stock) {
	int tryAnotherFile{};
	ofstream file;
	string name_file = "";
	cout << "Enter the name of file(without file permission!):  ";
	cin >> name_file;
	if (ifstream(name_file)) {
		cout << "The file exists." << endl;
		cout << "Overwrite existing file - 0\nEnter again - 1\nChoose: ";
		tryAnotherFile = GetBool();
	}
	file.open(name_file); // ф-ция open, если не находит файл с таким именем.
	if (!file.is_open()) {
		cout << "File opening error";
	}
	else {
		if (tryAnotherFile == 0) {
			for (int i = 0; i <  static_cast<int>(product_in_stock.size()); i++) {
				file << "Product " << i + 1 << ":\n" << product_in_stock[i].GetName() << "  " << product_in_stock[i].GetVolume() << " pieces\n" << "Maker: " //
					<< product_in_stock[i].GetMaker() << "\n" << "1 pieces cost " << product_in_stock[i].GetPrice() << "\n" << "Total price: " << product_in_stock[i].GetTotal_price() << //
					"\n" << "Product " << product_in_stock[i].GetAvailability() << endl;
			}
		}
		if (tryAnotherFile == 1) {
			SaveInFile(product_in_stock);
		}
	}
	file.close();
}

bool CheckExistanceData(vector<class CInStock>& product_in_stock) {
	bool flag = true;
	if ( static_cast<int>(product_in_stock.size()!=0)) {
		for (int i = 0; i <  static_cast<int>(product_in_stock.size()); i++) {
			if (product_in_stock[i].GetName() == "" && product_in_stock[i].GetMaker() == "" && product_in_stock[i].GetVolume() == 0 && product_in_stock[i].GetPrice() == 0 && product_in_stock[i].GetTotal_price() == 0 && product_in_stock[i].GetAvailability() == "") {
				flag = false;
			}
		}
	}
	else {
		flag = false;
	}
	return flag;
}

