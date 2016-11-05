/*

Victor Martins
rectangle.cpp

Calculates the length and wdith with two separate functions,
the program ultilizes getWidth() to obtain the width
and it ultilizes getLength() to obtain the length and
uses displayMessage() to receive the length and width and display the area.

Processing:

1. Prompt the user for the width of the rectangle.
2. Prompt the user for the length of the rectangle.
3. Calculate the area of the ractangle.
4. Display area of the rectangle.

*/

//Headers:

#include<iostream>
#include<iomanip>

using namespace std;

//Prototypes:

double getLength();
double getWidth();
void displayMessage(double l, double w, double& a); // initate the parameter type and reference type

													// main function

int main() {

	double width = 0, length = 0, area = 0.0;	// set the variables that will be parameters

	width = getWidth();	// gets the width

	length = getLength();	//gets length

	displayMessage(width, length, area);	//takes the 2 arguments from getWidth() and getLength() and references Area


	return 0;
}
// function that gets the width of the user.
double getWidth() {

	double width = 0.0;

	do {
		cout << "Please Enter the WIDTH of your rectangle: ";

		cin >> width;

		if (width < 0) {

			cout << "\n\tError invalid value for WIDTH.";
		}

	} while (width < 0);

	return width;
}
// function that gets the length of the user.
double getLength() {

	double length = 0.0;

	do {
		cout << "\nPlease Enter the LENGTH of your rectangle: ";
		cin >> length;

		if (length < 0) {

			cout << "\tError invalis value for LENGTH.";
		}
	} while (length < 0);

	return length;
}
//gets arguments from main that where set to the getWidth() and getLength() functions
//calculates are and sets area to the value and refers it to the arguments in main.
void displayMessage(double recWidth, double recLength, double & recArea) {

	recArea = recWidth * recLength;
	cout << "\n\tThe AREA of your rectangle is " << recArea << endl;

	return;
}
