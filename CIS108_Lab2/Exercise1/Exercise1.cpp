#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int age;
	int newAge;
	double tempF;
	double tempC;


	//Age
	cout << "Enter your age: ";
	cin >> age;

	newAge = age + 10;

	cout << "In ten years you will be " << newAge << " years old." << endl;

	//Temperature
	cout << "Enter the temperature in degrees fahrenheit: ";
	cin >> tempF;

	tempC = (tempF - 32)*5/9;
	cout << "The temperature in degrees celsius is " << tempC << endl;

	return 0;
}