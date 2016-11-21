/*

	Victor Martins

	corpSales.cpp

	Keep track of the quarterly, annual and average sales. For a company with 
	four divisions (East, West, North, South)

	Input: Quarterly Sales per Division

	Processing:
	1. Prompt user for quater sales for each division.
	2. Calculate the total and average sales for division
	3. Display the report.

	Output: Report Showing the annual & average sales per
	devision

*/

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

//User-Definded Datatypes
struct DivisionRec{

	string name;
	double q1Sales;
	double q2Sales;
	double q3Sales;
	double q4Sales;
	double totalSales;
	double averageSales;
};


//Global Constants

const int SIZE = 4;

// Function Prototypes:
void GetSales(DivisionRec&);
void CalcSales(DivisionRec&);
void DisplaySales(DivisionRec div);


int main() {

	//Variable Declarations:
	DivisionRec division[SIZE] = { {"East "},{"West "},{"North "},{"South "} };

	cout << "\nCorporate Sales Data Management App..." << endl;

	// Prompt user for quater sales for each division.

	for (int i = 0; i < SIZE; i++) {
		GetSales(division[i]);

	}

	// Calculate the total and average sales for division

	for (int i = 0; i < SIZE; i++) {
		CalcSales(division[i]);
	}

	// Display the report.

	cout << "Corporate Sales Sumamry Report..." << endl;

	for (int i = 0; i < SIZE; i++) {
		DisplaySales(division[i]);
	}




	return 0;
}


/*
void GetSales(DivisionRec& div)

Prompt ser for quaterly sales data and update
values in div.

return vale: none.
*/

void GetSales(DivisionRec& div) {

	cout << "\nEnter the Following Data for " << div.name << "Division: " << endl;
	do {

		cout << "\tFirst Quarter Sales: ";
		cin >> div.q1Sales;

		cout << "\tSecond Quarter Sales: ";
		cin >> div.q2Sales;

		cout << "\tThird Quarter Sales: ";
		cin >> div.q3Sales;

		cout << "\tFourth Quarter Sales: ";
		cin >> div.q4Sales;

		if (div.q1Sales < 0 || div.q2Sales < 0 || div.q3Sales < 0 || div.q4Sales < 0) {
		
			cout << "\n\t Error... Invalid Sales. (>=0) ";
		} 
	} while (div.q1Sales < 0 || div.q2Sales < 0 || div.q3Sales < 0 || div.q4Sales < 0);


}

/*
void CalcSales(DivisionRec div);

Calculate & Updata total average annual sales for division div

return value: nnone
*/


void CalcSales(DivisionRec& div) {

	div.totalSales = div.q1Sales + div.q2Sales + div.q3Sales + div.q4Sales;

	div.averageSales = div.totalSales / 4;

	return;
};

/*
void DisplaySales(DivisionRec div)

Display the average quarterly and total annual sales for
division div.

return value None.

*/


void DisplaySales(DivisionRec div) {

	cout << "\nDivision: " << div.name << endl;
	cout << fixed << setprecision(2)
		<< "\tAverage Quarterly Sales: $" << div.averageSales << endl
		<< "\tTotal Annual Sales: $" << div.totalSales << endl;


	return;
}