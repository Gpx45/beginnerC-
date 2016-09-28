/*


Victor Martins

months_v1.cpp

Prompts user for a number (1-12) and display the corresponding month


Version 1: Using If form
*/

#include<iostream>

using namespace std;

int main() {

	// variable declaration

	int month;

	// prompt user for a moth from 1 to 12
	
	cout << "\nPlease enter a Month (1-12): ";
	cin >> month;

	if (month == 1)
		cout << "January" << endl;
	if (month == 2)
		cout << "February" << endl;
	if (month == 3)
		cout << "March" << endl;
	if (month == 4)
		cout << "April" << endl;
	if (month == 5)
		cout << "May" << endl;
	if (month == 6)
		cout << "June" << endl;
	if (month == 7)
		cout << "July" << endl;
	if (month == 8)
		cout << "August" << endl;
	if (month == 9)
		cout << "September" << endl;
	if (month == 10)
		cout << "October" << endl;
	if (month == 11)
		cout << "November" << endl;
	if (month == 12)
		cout << "December" << endl;
	




	return 0;
}