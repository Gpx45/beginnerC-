/*

Victor Martins

pizza.cpp

Calculates number of slices on a pizza
take the area of pizza and calculates by  14.125 in inches

*/


#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {

	cout << "Joes's Pizza Palace Calculator ...\n" << endl;
	double diameter, area, div;
	div = 14.125;
	cout << "Enter the Diameter of the pizza (inches): ";
	cin >> diameter;
	double radius = diameter / 2;
	area = 3.14 * (pow(radius, 2));
	cout << endl << "A " << diameter << " inch pizza contains about " << setprecision(1) << fixed << area / div << " slices \n" << endl;


}
