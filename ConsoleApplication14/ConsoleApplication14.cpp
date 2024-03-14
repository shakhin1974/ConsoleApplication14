#include <iostream>
#include<windows.h>
#include"Header.h"
#include<string>
#include<algorithm>
using namespace std;
void Person ::Sur_name(string surname_) 
{ 	if (surname_ > "А" && surname_ < "Я")
	{ surname = surname_; 	}
	else
		surname_ = "#######"; }
void Person::Name(string name_)
{ name = name_;
}void Person::F_name(string f_name_)
{ f_name = f_name_; }
void Person ::Age(int age_)
{
	
	if (age_ <= 101 && age_ >= 0) { age = age_ ; }
	else { age = 0; }};
void Person::Gend(char gend_)
{ if (gend_ == 'М' or gend_ == 'Ж')
	{ gend = gend_; }
	else
		gend = '#'; }
void Person::Phone(string phone_)
{ 	if (phone_.length() == 11)
	{ phone = phone_; }
	else
		phone = "#############";
}
void Person::CH_Arr(string* _arr)
{
	ch_arr = _arr;
}
void Person::Parents(string f_name, 
	string f_surname, string m_name, string m_surname) 
{
	if (f_name > "А" && f_name < "Я" &&
		f_surname> "А" && f_surname < "Я" && m_name > "А" && m_name < "Я" &&
		m_surname> "А" && m_surname < "Я")
	{
	parents = "\nОтец: " + f_name + ' ' + f_surname
	+ "\nМама: " + m_name + ' ' + m_surname + "\n";
	}
	else
		parents = "#########";
}
int main()
{SetConsoleCP(1251);
SetConsoleOutputCP(1251);
	Person Ivan;
	Ivan.id = 1;
	Ivan.Sur_name("Смирнов");
	Ivan.Name("Иван");
	Ivan.F_name("Олегович");
	Ivan.Age(37);
	Ivan.Gend('М');
	Ivan.Parents("Виктор ", "Смирнов", "Анна", "Смирнова");
 	Ivan.Phone("89888081218");
	string ch[] = { "Лена","Иван","Николай", "Анна" };
	Ivan.CH_Arr(ch);
	int n = size(ch);
	Ivan.Vivod(n);
	
}
