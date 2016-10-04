/*

Victor Martins

bookClub.cpp

This program will ask for the user the amount of books have purchased in a certain month and then it 
will award them points depending on the amount of books they have purchased for that month.


*/

#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {

	int books;
	cout << ":Book Points:\n" << endl;
	string month;
	cout << "Please Enter the Month: ";
	getline(cin, month);
	cout << "\nPlease Enter the Number of Books you have Purchased (Limit 4 books) on " << month << ": ";
	cin >> books;
	cout << endl;
	if (books < 0)
		cout << "Error... Number of Books should be greater/equal to 0, NO NEGATIVES!!!\n";
	else if (books == 0)
		cout << "You Have Earned \" 0 \" points. \n";
	else if (books == 1)
		cout << "You have earned \" 5 \" points \n";
	else if (books == 2)
		cout << "You have earned \" 15 \" points \n";
	else if (books == 3)
		cout << "You have earned \" 30 \" points \n";
	else if (books == 4)
		cout << "You have earned \" 60 \" points \n";
	else if (books >= 5)
		cout << "You have earned ENOUGH POINTS YOU BOOKWORM!! NOW GO READ\n";

	return 0;
}

