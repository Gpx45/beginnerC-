/*
Victor Martins
chart.cpp


Input: In this program the user has to input 5 different values
and then it will calculate a bar graph on the screen

Processing: The program take the 5 values from each store and for every $100
from each one of those values, it will output a star " * " on their respected line.

Output:


Store Sales Analyzer ...

Enter today's sales for store 1: 500 600 734 255 744

Enter today's sales for store 2:
Enter today's sales for store 3:
Enter today's sales for store 4:
Enter today's sales for store 5:
SALES BAR CHART
(Each * = $100)

Store 1: *****
Store 2: ******
Store 3: *******
Store 4: **
Store 5: *******

Press any key to continue . . .


*/

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main() {
	
	int store1, store2, store3, store4, store5;// initialize each value
	char s;
	s = '*';// set the * to be output
	const int starAmount = 100;
	cout << "\nStore Sales Analyzer ...\n" << endl;
	cout << "Enter today's sales for store 1: "; // asks for store 1
	cin >> store1;
	cout << endl;
	cout << "Enter today's sales for store 2: ";  // asks for store 2
	cin >> store2;
	cout << endl;
	cout << "Enter today's sales for store 3: ";  // asks for store 3
	cin >> store3;
	cout << endl;
	cout << "Enter today's sales for store 4: ";  // asks for store 4
	cin >> store4;
	cout << endl;
	cout << "Enter today's sales for store 5: ";  // asks for store 5
	cin >> store5;
	cout << endl;
	do{

		if (store1 <= 0 || store2 <= 0 || store3 <= 0 || store4 <= 0 || store5 <= 0) // if the user enters a value 0 and below it will ask for the inputs again
		{
			cout << "You Have Entered an Invalid Number! Please Try Again! ";
			cin >> store1 >> store2 >> store3 >> store4, store5;
		}
		
	} while (store1 < 0 || store2 < 0 || store3 < 0 || store4 < 0 || store5 <= 0);

	cout << "SALES BAR CHART\n";//program starts here
	cout << "(Each * = $100)\n\n";

	cout << "Store 1: ";
	
	do { //outputs bar fore store 1
		cout << s;
		store1 -= starAmount;
	} while (store1 >= starAmount);
	
	cout << endl;
	cout << "Store 2: ";
	
	do { //outputs bar fore store 2
		cout << s;
		store2 -= starAmount;
	
	} while (store2 >= starAmount);

	cout << endl;
	cout << "Store 3: ";

	do { //outputs bar fore store 3
		cout << s;
		store3 -= starAmount;

	} while (store3 >= starAmount);

	cout << endl;
	cout << "Store 4: ";

	do { //outputs bar fore store 4
		cout << s;
		store4 -= starAmount;

	} while (store4 >= starAmount);

	cout << endl;
	cout << "Store 5: ";

	do { //outputs bar fore store 5
		cout << s;
		store5 -= starAmount;
		
	} while (store5 >= starAmount);

	cout << endl;
	cout << endl;

	return 0;
}