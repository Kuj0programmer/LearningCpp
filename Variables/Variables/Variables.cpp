// VariablesAndTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int i1 = 1L;
	cout << "i1= " << i1 << endl;
	int i2;
	i2 = 2;
	cout << "i2= " << i2 << endl;
	int i3(3);
	cout << "i3= " << i3 << endl;

	double d1 = 2.2;
	double d2 = i1;
	int i4 = (int)d1;
	cout << "d1= " << d1 << endl;
	cout << "d2= " << d2 << endl;
	cout << "i4= " << i4 << endl;

	char c1 = 'a';
	//char c2 = "b";
	cout << "c1= " << c1 << endl;
	//cout << "c2= " << c2 << endl;

	bool flag = false;
	cout << "flag= " << flag << endl;
	flag = (i1 != 0);
	cout << "flag= " << flag << endl;
	flag = (d1 != 0.0);
	cout << "flag= " << flag << endl;

	//unsigned char n1 = 128;
	//char n2 = 128;
	//cout << "n1= " << n1 << endl;
	//cout << "n2= " << n2 << endl;
	//n1=254;
	//n2=254;
	//cout << "n1= " << n1 << endl;
	//cout << "n2= " << n2 << endl;
	//n1=300;
	//n2=300;
	//cout << "n1= " << n1 << endl;
	//cout << "n2= " << n2 << endl;



	return 0;
}
