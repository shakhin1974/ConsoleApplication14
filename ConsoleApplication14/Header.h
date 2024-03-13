#pragma once
#include<string>
using namespace std;
class Person {
	string sur_name;
	string name;
	string f_name;
	int age;
	char gend;
	string* arr;
public:
	int id;
	void Sur_name(string surname);
	void Name(string name_);
	void F_name(string f_name_);
	void Age(int age_);
	void Gend(char gend_);
	void Arr(string* _arr)
	{
		arr = _arr;
	}
	void Vivod() { std::cout << id 
		<< "  " << sur_name
		<< "  " << age
		<< "  " << gend
		<< "  " << arr[0]
<< endl; }

};