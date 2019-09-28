#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

void calcAge(int year)
{
	constexpr int currentYear = 2019;
	int age;

	age = currentYear - year;

	if (age < 10)
	{
		cout << "This book is younger than ten years old." << endl;
	}
	else
	{
		cout << "This book is at least ten years old." << endl;
	}
}

void bookLength(int pages)
{
	if (pages < 100)
	{
		cout << "This book is a short book." << endl;
	}
	else if (pages > 100 && pages < 300)
	{
		cout << "This book is an average book." << endl;
	}
	else
	{
		cout << "This book is a long book." << endl;
	}
}

int main()
{
	string title;
	string author;
	int year;
	int pages;

	cout << "Enter the book title: ";
	getline(cin, title);

	cout << "Enter the author: ";
	getline(cin, author);

	cout << "Enter the publish year: ";
	cin >> year;

	cout << "Enter the total number of pages: ";
	cin >> pages;

	calcAge(year);
	bookLength(pages);

}