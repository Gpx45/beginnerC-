/*

	Victor Martins
	rectangle.cpp

	Input: the user will asks the user to enter the width anbd length of the rectangle.

	Proccessing: 
	1.The program will user to different functions getLength() to obtain the length of the rectangle 
	2.use getWidth() to obtain the width of the rectangle
	3.will use the getDisplay() function to output the anwser (area) of therectangle

	Output: 
	1.It will first will display the name of the program
	2.It will Prompt the user to input the width
	3.It will Prompt the user to input the length
	4. It will then display the area of the rectangle
	5. Quit


*/

#include<iostream>
#include<cmath>

using namespace std;

double getWidth();
double getLength();
void displayMessage();

int main() {

	cout << "\n \tRectangle AREA Program...\n" << endl;
	
	getLength();
	getWidth();
	displayMessage();

	return 0;
}

double getWidth() {

	double width;
	do{
	cout << "\n\tPlease Enter the WIDTH: ";

	cin >> width;
	
		if (width < 0) {

			cout << "\n\tError you entered an Invalid Value." << endl;

		}
	} while (width < 0);
	
	return width;
}


double getLength() {
	double length;

	do{
	
	cout << "\n\tPlease Enter the LENGTH: ";

	cin >> length;

	
		if (length < 0) {

			cout << "\n\tError you entered an Invalid Value.\n" << endl;
		}
	} while (length < 0);

	return length;
}

void displayMessage() {

	double area;

	area = getWidth() * getWidth();

	cout << "\n\tThe AREA of your Rectangle is: " << area;
}

