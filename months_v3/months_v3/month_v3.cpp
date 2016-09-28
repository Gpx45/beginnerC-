/*


Victor Martins

months_v3.cpp

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
	else if (month == 2)
		cout << "February" << endl;
	else if (month == 3)
		cout << "March" << endl;
	else if (month == 4)
		cout << "April" << endl;
	else if (month == 5)
		cout << "May" << endl;
	else if (month == 6)
		cout << "June" << endl;
	else if (month == 7)
		cout << "July" << endl;
	else if (month == 8)
		cout << "August" << endl;
	else if (month == 9)
		cout << "September" << endl;
	else if (month == 10)
		cout << "October" << endl;
	else if (month == 11)
		cout << "November" << endl;
	else if (month == 12)
		cout << "December" << endl;											
	else
		cout << "Invalid Month!" << endl;





	return 0;
}