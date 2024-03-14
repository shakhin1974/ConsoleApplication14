#pragma once
#include<string>
using namespace std;
class Person {
	string sur_name;
	string name;
	string f_name;
	int age;
	char gend;
	string* ch_arr;
	string phone;
	string parents;
	string married;
public:
	int id;
	void Sur_name(string surname);
	void Name(string name_);
	void F_name(string f_name_);
	void Age(int age_);
	void Gend(char gend_);
	void Phone(string phone_);
	void CH_Arr(string* _arr);
	void Parents(string f_name, string f_surname);
	void Vivod(int n) { std::cout << id 
		<< "  " << sur_name
		<< "  " << age
		<< "  " << gend
		<< "  " << phone
		<< endl;
		cout << "Дети " << sur_name<<"a "<<endl;
	for (int i = 0; i < n; i++)
		
	{
		cout << ch_arr[i]<<" ";
		}
 
 }

};
