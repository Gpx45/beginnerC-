/*

	Victor Martins

	winDiv.cpp

	Input:The user must input the values for each region (NE,SE,NW,SW)
	You will input for values one for each.

	Processing:

	Output: The Output will be displaying the gretest sales for that quater
	based on the 4 input value the user had placed.

	This program will divide the 4 different sales 
	(NE,SE,NW,SW) had the greatest value.
	and it'll output it to the console



*/


//Headers:
#include<iostream>
#include<string>

using namespace std;

//Prototypes:

void findHighest(double, double, double, double);
double getSales(string&);

//main()
int main() {
	
	double sales1,sales2,sales3,sales4;
	string region,region1,region2,region3,region4;

	cout << "Pleaser Enter the Name of the Division: ";
	getline(cin, region);
	cout << endl;
	sales1 = getSales(region);
	region = region1;

	
	cout << "\nPleaser Enter the Name of the Division: ";
	getline(cin, region);
	cout << endl;
	sales2 = getSales(region);
	region = region2;

	cout << "\nPleaser Enter the Name of the Division: ";
	getline(cin, region);
	cout << endl;
	sales3 = getSales(region);
	region = region3;

	cout << "\nPleaser Enter the Name of the Division: ";
	getline(cin, region);
	cout << endl;
	sales4 = getSales(region);
	region = region4;

	findHighest(sales1, sales2, sales3, sales4);

	return 0;
}

//
double getSales(string& rArea) {
	double sales;
	cout << "Please Enter the Total Sales for the " << rArea << ": ";
	cin >> sales;
	cin.ignore();

	return sales;
}

// 
void findHighest(double s1, double s2, double s3, double s4) {

	double highest = 0;

	if (s1 > s2 || s1 > s3 || s1 > s4)
		s1 = highest;
	else if (s2 > s1 || s2 > s3 || s2 > s4)
		s2 = highest;
	else if (s3 > s1 || s3 > s2 || s3 > s4)
		s3 = highest;
	else if (s4 > s1 || s4 > s2 || s4 > s3)
		s4 = highest;

	cout << " Your biggest Sale is " << highest;

	return;
}