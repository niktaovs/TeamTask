#pragma once
#include<iostream>

using namespace std;
/// <summary>
/// abstract class!!!
/// </summary>
class Employer
{
private:
	string name;
	string fname;
public:
	//Employer(string, string);

	virtual void Fill();

	virtual void Print() = 0;

	virtual ~Employer() {}
};

class President: virtual public Employer
{
private:

public:
	virtual void Fill();
	virtual void Print() = 0;




};
