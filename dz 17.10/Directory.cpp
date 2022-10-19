#include "Directory.h"

void Directory::Out()
{
	cout << "Name: " << name << endl;
	cout << "Owner: " << owner << endl;
	cout << "Phone: " << phone << endl;
	cout << "Address: " << address << endl;
	cout << "Type of activity: " << type << endl;
}

void Directory::Init()
{
	cout << "Name: ";
	cin >> name;
	cout << "Owner: ";
	cin >> owner;
	cout << "Phone: ";
	cin >> phone;
	cout << "Address: ";
	cin >> address;
	cout << "Type of activity: ";
	cin >> type;
}

void Directory::Save()
{
	ofstream save("Directory.txt", ios::app);
	
	save <<  name << endl
		<<  owner << endl
		<<phone << endl
		<< address << endl
	    << type;
	save.close();
	
}

void Directory::Print()
{
	Directory temp;
	ifstream read("Directory.txt", ios::in);
	do {
		read >> temp.name >> temp.owner >> temp.phone >> temp.address >> temp.type;
		cout << "Name: " << temp.name << endl
			<< "Owner: " << temp.owner << endl
			<< "Phone: " << temp.phone << endl
			<< "Address: " << temp.address << endl
			<< "Type of activity: " << temp.type;
	} while (!read.eof());
	read.close();
}

void Directory::Search_Name()
{
	string data;
	Directory temp;
	ifstream search("Directory.txt");
	cout << "\nEnter name: ";
	cin >> data;
	
	do {
		search >> temp.name;
	if (data == temp.name) {
		cout << "Yes!" << endl
			<< temp.name;
		break;
	}

	} while (!search.eof());
	search.close();
}

void Directory::Search_Owner()
{
	string data;
	Directory temp;
	ifstream search("Directory.txt");
	cout << "\nEnter Owner: ";
	cin >> data;

	do {
		search >> temp.owner;
		if (data == temp.owner) {
			cout << "Yes!" << endl
				<< temp.owner;
			break;
		}

	} while (!search.eof());
	search.close();
}

void Directory::Search_Address()
{
	string data;
	Directory temp;
	ifstream search("Directory.txt");
	cout << "\nEnter address: ";
	cin >> data;
	do {
		search >> temp.address;
		if (data == temp.address) {
			cout << "Yes!" << endl
				<< temp.address;
			break;
		}

	} while (!search.eof());
	search.close();
}

void Directory::Search_Type()
{
	string data;
	Directory temp;
	ifstream search("Directory.txt");
	cout << "\nEnter type: ";
	cin >> data;
	do {
		search >> temp.type;
		if (data == temp.type) {
			cout << "Yes!" << endl
				<< temp.type;
			break;
		}

	} while (!search.eof());
	search.close();
}

void Directory::Search_Phome()
{
	int data;
	Directory temp;
	ifstream search("Directory.txt");
	cout << "\nEnter phone:";
	cin >> data;
	do {
			search >> temp.phone;
		if (data == temp.phone) {
			cout << "Yes!" << endl
				<< temp.phone;
			break;
		}

	} while (!search.eof());
	search.close();
}
