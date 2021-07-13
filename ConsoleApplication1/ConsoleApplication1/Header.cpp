#include "Header.h"

/*Employer::Employer(string _name, string _fname):
	name{_name},
	fname{_fname}
{
}*/

void Employer::Fill()
{
	cout << "Name: "; 
	cin >> name;
	cout << "Fname: ";
	cin >> fname;
}

void President::Fill()
{
	cout << "Name: ";
	cin >> name;
	cout << "Fname: ";
	cin >> fname;
}


