/*

Victor Martins

salesChart

Input: The users will be asked to input 5 values coresponding to how
much money that store amde.


Processing:1. take the stores values
2. if any values are 0 or below then it will display a message and tell the user
to try again.
3.It calcaulates how many stars will be outputed based on the inital amount


Output: It will Output a bar graph demostration based on the inputs that has been inputed
by the user.


*/


#include<iostream>

using namespace std;

int main() {

	int store1, store2, store3, store4, store5, stars;//initialize all the varables
	char symbol = '*';

	do {
		// this do while will activate run through until all values are above 0
		cout << "Store Sales Analyzer ...\n\n";
		cout << "Enter Today's sales for store 1: ";
		cin >> store1;
		cout << "\nEnter Today's sales for store 2: ";
		cin >> store2;
		cout << "\nEnter Today's sales for store 3: ";
		cin >> store3;
		cout << "\nEnter Today's sales for store 4: ";
		cin >> store4;
		cout << "\nEnter Today's sales for store 5: ";
		cin >> store5;

		if (store1 <= 0 || store2 <= 0 || store3 <= 0 || store4 <= 0 || store5 <= 0) { // if the values are 0 and below it will give an error
			cout << "You have entered an incorrect value.\n";
			cout << "Please Enter them again\n" << endl;
		}

	} while (store1 <= 0 || store2 <= 0 || store3 <= 0 || store4 <= 0 || store5 <= 0); 
	//if the values pass this conditon then it continues with the code

	cout << "\nSALES BAR CHART\n";
	cout << "(Each * = 100)\n";
	//starts iteration of the switch statement, up to 5 it then breaks anf goes to the 
	//next for loop
	for (int s = 1; s <= 5; s++) {

		switch (s) {

		case 1:
			stars = store1 / 100;//to each iteration (s) it wll calculate the anwser based on the intial value.
			break;
		case 2:
			stars = store2 / 100;
			break;
		case 3:
			stars = store3 / 100;
			break;
		case 4:
			stars = store4 / 100;
			break;
		case 5:
			stars = store5 / 100;
			break;

		}
		cout << "Store " << s << ": ";
		for (int c = 1; stars >= c; c++) {//depending on the calculation based on the inital value it
			cout << symbol;					// it will display a set number of stars on that line
		}
		cout << endl; //it then goes to the next line and it iterates until the parent for loop is >=5 
	}
	cout << endl;
	return 0;
}