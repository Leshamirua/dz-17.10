#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class Directory {
	string name;
	string owner;
	int phone;
	string address;
	string type;
public:
	Directory() = default;
	Directory(string n, string o, int ph, string add, string t) {
		name = n;
		owner = o;
		phone = ph;
		address = add;
		type = t;
	}
	void Out();
	void Init();
	void Save();
	void Print();
	void Search_Name();
	void Search_Owner();
	void Search_Address();
	void Search_Type();
	void Search_Phome();
};
