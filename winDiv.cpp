/*
Victor Martins
winDiv.cpp
Input:The user must input the values for each region (NE,SE,NW,SW)
You will input for values one for each.

Processing: takes the inpt of the gross values and depending on which is the
highest it will display the highest gross amount 
and the region who got the highest.


Output: The Output will be displaying the gretest sales for that quater
based on the 4 input value the user had placed.
This program will divide the 4 different sales
(NE,SE,NW,SW) had the greatest value.
and it'll output it to the console
*/


//Headers:
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

//Prototypes:

void findHighest(double, double, double, double);
double getSales(string);

//main()
int main() {

	cout << "Gross Calculator Program.....\n" << endl;

	double sales1, sales2, sales3, sales4;
	
	sales1 = getSales("North-East");
	sales2 = getSales("North-West");
	sales3 = getSales("South-East");
	sales4 = getSales("South-West");

	findHighest(sales1, sales2, sales3, sales4);

	return 0;
}

/*getSales(string rArea);

This function wil return the sales value that was inputed by the user.
it retain which passed region it got thrn reatin the value from the user.

*/


double getSales(string rArea) {
	double sales;
	
	do {
		
		cout << "Please Enter the Total Sales for the " << rArea << ": $ ";
		cin >> sales;

		if (sales < 0)
			cout << "\n\tError the values is Invalid.";
	} while (sales < 0);

	return sales;
}

/* void findHighest(double s1, double s2, double s3, double s4)
This function will obtain the value for each input from the user
and determine which is the highest and display
the informaion of which is the highest region and their sales (which is the highest out of all)

*/
void findHighest(double s1, double s2, double s3, double s4) {

	double highest = 0;

	if (s1 > s2 && s1 > s3 && s1 > s4) {
		highest = s1;
		cout << "\nNorth-East" << " has the highest gross at: $ " <<
			fixed << setprecision(2) << highest << endl;
	}
	else if (s2 > s1 && s2 > s3 && s2 > s4) {
		highest = s2;
		cout << "\nNorth-West" << " has the highest gross at: $ " <<
			fixed << setprecision(2) << highest << endl;
	}
	else if (s3 > s1 && s3 > s2 && s3 > s4) {
		highest = s3;
		cout << "\nSouth-East" << " has the highest gross at: $ " <<
			fixed << setprecision(2) << highest << endl;
	}
	else if (s4 > s1 && s4 > s2 && s4 > s3) {
		highest = s4;
		cout << "\nSout-West" << " has the highest gross at: $ " <<
			fixed << setprecision(2) << highest << endl;
	}

	return;
}