#pragma once
#include<string>
using namespace std;
class Person {

	string surname;
	string name;
	string f_name= "Noname";
	int age;
	char gend;
	string* ch_arr;
	string phone;
	string parents;
	string married;
public:
	int id;
	void Sur_name(string surname_);
	void Name(string name_);
	void F_name(string f_name_);
	void Age(int age_);
	void Gend(char gend_);
	void Phone(string phone_);
	void CH_Arr(string* _arr);
	void Parents(string f_name,
		string f_surname, 
		string m_name, string m_surname);
	void Vivod(int n) { std::cout << id 
		<< "\n" << surname
		<< "\nВозраст: " << age
		<< "  " << parents
		<< "Пол: " << gend
		<< "\nТелефон: " << phone
		<< endl;
		cout << "Дети: ";
	for (int i = 0; i < n; i++)
		
	{
		cout << ch_arr[i]<<" ";
		}
 
 }

};
