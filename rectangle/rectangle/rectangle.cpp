/*

Victor Martins

rectangle.cpp

1.Program will prompt for BASE of a rectangle
2.Program will prompt HEIGHT of a rectangle 
3.Program will output the AREA of that triangle


*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	// declared three variables to use ARE, BASE, HEIGHT
	double height, base, area;
	//Asks for BASE
	cout << "We will be finding an AREA of a rectangle!" << endl;
	cout << "Please give me the BASE of the Rectangle: ";
	cin >> base;
	//Asks for height
	cout << "Thank you, now please give me the HEIGHT of the rectangle: ";
	cin >> height;
	//Gets area of the rectangle
	area = base*height;
	//Displays area of the rectangle
	cout << "OK!! the AREA of your triangle is: " << area << endl;


	return 0;
}