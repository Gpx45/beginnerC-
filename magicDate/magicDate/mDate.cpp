/*

Victor Martins	

mDate.cpp

Asks user to enter a date in the following format 01/01/1980
seperately and then based on what they type, the program will decide wether or not the date is a magical 
date or not.



*/

#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>

using namespace std;

int main() {

	int day, month, year;

	cout << "Magic Dates!" << endl;

	cout << "THe format will look like this in the end \n";
	cout << "01.01/1980\n" << endl;

	cout << "Please insert a number for The Day:\n" << endl;
	cout << "DAY: ";
	cin >> day;

	cout << "Please insert a number for the Month (numeric)\n" << endl;
	cout << "MONTH: ";
	cin >> month;

	cout << "Now please insert a TWO DIGIT number for the year.\n" << endl;
	cout << "YEAR: ";
	cin >> year;

	if (month*day == year) 
		cout << "This DATE is Magic!!!!:D: ";
	else
		cout << "This date is not magical. Please try again.";
	return 0;
}