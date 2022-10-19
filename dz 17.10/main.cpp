#include <iostream>
#include <fstream>
#include "Directory.h";
#include <Windows.h>
using namespace std;

int main() {
	Directory obj("TOB_BomBom", "Vasya", 1030401023, "Babushkina_20a", "Candies");
	obj.Save();
	obj.Print();
	obj.Search_Name();
}