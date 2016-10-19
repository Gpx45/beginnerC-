/*

victor Martins

line.cpp

Prompt user for a number, and display a lin of that many
Xs


Input:  A number

Processing: Prompt user for a number
Display a filled line wih xs
1.Prompt user for a number
2.For the height (number) of the square
3.Display field of Xs

Output: A filled filled with a set
number of Xs as indicated in user input and itll 
create a line and the set of line as inputed in
the number variable.



*/


#include<iostream>

using namespace std;

int main() {

	int number;

	//Prompt user for a number
	cout << "Line Builder..." << endl;
	do {
		cout << "\nPlease enter a number: (1-15): " << endl;
		cin >> number;

		if (number < 1 || number > 15)
			cout << "\tError ... Invalid Number." << endl;

	} while (number < 1 || number > 15);

	for (int counter = 0; counter < number; counter++) {
	
		for (int height = 0; height < number; height++) {
			cout << "X ";
		}
		cout << endl;
	}

	cout << endl;


	return 0;
}