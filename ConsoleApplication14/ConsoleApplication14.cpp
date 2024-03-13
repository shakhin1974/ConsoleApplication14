#include <iostream>
#include<windows.h>
#include"Header.h"
#include<string>
using namespace std;
void Person ::Sur_name(string surname) 
{ 	if (surname > "А" && surname < "Я")
	{ sur_name = surname; 	}
	else
		sur_name = "#######"; }
void Person::Name(string name_)
{ name = name_;
}void Person::F_name(string f_name_)
{ f_name = f_name_; }
void Person ::Age(int age_)
{
	if (age_ <= 101 && age_ >= 0) { age = age_; }
	else { age = 0; }};
void Person::Gend(char gend_)
{
	if (gend_ == 'М' or gend_ == 'Ж')
	{
		gend = gend_;
	}
	else
		gend = '#';
}
int main()
{SetConsoleCP(1251);
SetConsoleOutputCP(1251);
	Person Ivan;
	Ivan.id = 1;
	Ivan.Sur_name("Смирнов");
	Ivan.Name("Иван");
	Ivan.F_name("Олегович");
	Ivan.Age(17);
	Ivan.Gend('М');
	string arr[] = {"Илья", "Лена", "Николай", "Анна"};
	Ivan.Arr( arr );
	Ivan.Vivod();
	
}
