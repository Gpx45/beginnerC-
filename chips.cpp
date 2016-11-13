/*

Victor Martins

salsa.cpp

Input:
pormpts user to input the sales of jars from the user

Processing:
1. gets the total of all the jars.
2. gets the lowest sold jars out of all the jars.
3. gets the highest sold jars out of all the jars.
4. gets the lowest string of the salsa sold.
5. gets the highest string of the salsa sold.

Output:
outputs a report of the types of salsa their is in the company
their total of the jars sold
the lowest salsa sold and the highest salsa sold.

*/

#include<iostream>
#include<string>
#include<climits>
#include<iomanip>

using namespace std;

//Prototypes:
void getJars(string[], int[], int);
int getTotal(string[], int[], int);
int getLowest(string[], int[],string&, int);
int getHighest(string[], int[],string&, int);
void displayReport(string[], string&, string&, int, int&, int&, int&);

int main() {

	// The variables that hold the values.
	string salsa[] = { "Mild", "Medium", "Sweet", "Hot", "Zesty" };		// The salsa array holding all the names of salsa.
	const int NUM = 5;
	int lowest, highest;
	int total = 0;
	int jars[NUM];
	string highSalsa, lowSalsa;	// holds the names of the highest and lowest sold salsas.

	getJars(salsa, jars, NUM);

	total = getTotal(salsa, jars, NUM);

	lowest = getLowest(salsa, jars, lowSalsa, NUM);

	highest = getHighest(salsa, jars, highSalsa, NUM);

	displayReport(salsa, lowSalsa, highSalsa, NUM, lowest, highest, total);
	
	return 0;
}


/*
void getJars(string salsa[], int jars[], int NUM)

This function obtains all the jars sales for the month and stores it in the ajrs array.


*/
void getJars(string salsa[], int jars[], int NUM) {



	cout << "Salsa Sales Calculator...\n";
	cout << "------------------------\n";
	for (int i = 0; i < NUM; i++) {
		do {
			cout << "Please Insert the Jar Amount for Each Salsa: ";
			cout << salsa[i];
			cout << " ";
			cin >> jars[i];

			cout << endl;
			// If the user inserts a negative value it will ask for the value again.
			if (jars[i] < 0)
				cout << "\tError NO negative Values, Do it again.\n\n";

		}while (jars[i] < 0);
		
	}

	

	return;
}

/*
int getTotal(string salsa[], int jars[], int NUM)

This function goes through the jars array
and adds each element of the array to the
total variable.


*/


int getTotal(string salsa[], int jars[], int NUM) {

	int total = 0;

	for (int i = 0; i < NUM; i++) {

		total += jars[i];
	}

	return total;
}

/*
int getLowest(string salsa[], int jars[],string& lowSalsa, int NUM)

1. This function does two things.
first goes through the jars array and determines
which value is the lowest value out of all the values sets it in the loweest variable.
2. It take the value in the salsa array of the same subscript form the jars
array and passes the string to lowSalsa variable.

*/

int getLowest(string salsa[], int jars[],string& lowSalsa, int NUM) {

	int lowest = jars[0];
	for (int i = 0; i < NUM; i++) {
		if (lowest > jars[i]) {
			lowest = jars[i];
		}
		if (lowest == jars[i]) {
			lowSalsa = salsa[i];
		}
	}

	return lowest;
}


/*
int getHighest(string salsa[], int jars[], string& highSalsa, int NUM)

1. This function does two things.
first goes through the jars array and determines
which value is the highest value out of all the values set in the highest variable and returns it
2. It take the value in the salsa array of the same subscript form the jars
array and passes the string to highSalsa variable.


*/

int getHighest(string salsa[], int jars[], string& highSalsa, int NUM) {

	
	int highest = jars[0];
	for (int i = 0; i < NUM; i++) {
		if (highest < jars[i]) {
			highest = jars[i];
		}
		if (highest == jars[i]) {
			highSalsa = salsa[i];
		}
	}

	return highest;
}

/*
void displayReport(string salsa[], string& lowSalsa, string& highSalsa, int NUM, int& lowest, int& highest, int& total)

This function gets all the variables needed passed to it and outputs the erport out on the command prompt.
it passes, sals[], highSalsa, NUM, lowest, highest, total variable and creates a report

it displays all the salsas available
it displays the total
and the highest and lowest salsas sold for the month.


*/

void displayReport(string salsa[], string& lowSalsa, string& highSalsa, int NUM, int& lowest, int& highest, int& total) {

	cout << setw(30) << right << "Monthly Report" << endl;
	cout << "----------------------------------------------" << endl;
	cout << setw(10) << right;
	for (int i = 0; i < NUM; i++) {
		cout << " " << salsa[i];
	}

	cout << endl << endl;
	cout << setw(10) << left << "Highest Salsa Sales: ";
	cout << setw(10) << left << highSalsa << " " << highest << endl;
	cout << setw(10) << left << "Lowest Salsa Sales: ";
	cout << setw(11) << left << lowSalsa << " " << lowest << endl;
	cout << endl << "Total of Jars Sold This Month: " << total << endl;


	return;
}

