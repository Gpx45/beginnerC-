#include<iostream>

double getWidth();
double getLength();
void getDisplay(double l, double w);

using namespace std;




int main() {

	double length, width = 0.0;

	width = getWidth();
	length = getLength();
	getDisplay(length, width);

	return 0;
}

double getWidth() {

	double width;

	do {

		cout << "Enter your WIDTH: ";
		cin >> width;

		if (width < 0) {

			cout << "Error Please Insert an positive integer: ";
		}

	} while (width < 0);
	
	return width;
}

double getLength() {

	double length;

	do {

		cout << "Enter your LENGTH: ";
		cin >> length;

		if (length < 0) {

			cout << "Error Please Insert an positive integer: ";
		}

	} while (length < 0);

	return length;
}

void getDisplay(double l, double w) {

	double length, area, width = 0;

	length = l;
	width = w;

	area = width * length;

	cout << "Your AREA is: " << area << endl;

	
}