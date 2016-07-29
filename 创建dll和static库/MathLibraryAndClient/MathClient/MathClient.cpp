// MathClient.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "MathLibrary.h"

using namespace std;

int main()
{
	double a = 7.4;
	int b = 99;

	cout<<"a + b ="<<MathLibrary::Functions::Add(a,b)<<endl;
	
	cout<<"a * b="<<MathLibrary::Functions::Multiply(a , b)<<endl;

	cout<<"a + (a * b) = "<<MathLibrary::Functions::AddMultiply(a , b)<<endl;

	system("pause");

	return 0;
}



