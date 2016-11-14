/*

Victor Martins

monkeys.cpp

Keep track of the amount of food eaten by three
monkeys rfom monday through friday.

Input:
Pounds of food eaten by each monkey by day.

Processing:
1. Prompt user for pounds of food eaten by each monkey, everyday.
2. Calculate and display 
	-Average amount of food eaten per day by all the monkeys
	- Least amount of food eaten during the week by any one monkey.
	- The greatest amount of food eaten during the week. by anyone monkey.

Output:
Report that includes:
	- Average amount of food eaten per day by all the monkeys
	- Least amount of food eaten during the week by any one monkey.
	- The greatest amount of food eaten during the week. by anyone monkey. 


*/

//Header Files

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Global Constants
const int MONKEYS = 3, DAYS = 5;
const string monkeys[] = { "Harambe", "Billy", "George" };
const string days[] = { "Monday","Tuesday","Wednesday","Thursday","Friday" };

//Prototypes:


int main() {
	
	//Variables
	double food[MONKEYS][DAYS];
	double average, least, greatest;

	cout << "\nMonkey Food Tracker App...";


	//Set number formatting
	cout << fixed << setprecision(2);


	//Prompt user for pounds of foos eaten by each monkey everyday

	for (int m = 0; m < MONKEYS; m++) {
		GetFood(food, m);
	}


	// Calculate and Display Average amount of food eaten per day by all the monkeys

	cout << "\nThe Amount of Food eaten by the monkeys on: " < , endl;
	for (int d = 0; d < DAYS; d++) {
		average = GetAverage(food, d);
		cout << "\t" << days[d] << " is " << average << endl;
	}

	//Calculate and display the least amount of food eaten
	//during the week by anyone monkey

	cout << "\nThe least amount of food eaten this week by ..." << endl;
	for (int m = 0; m < MONKEYS; m++){

		least = GetLeast(food, m);
		cout << "\t" << monkeys[m] << " is " << least << " pounds " << endl;

	}


	//Calculate and display the greatest amount of food eaten
	//during the week by anyone monkey

	cout << "\nThe least amount of food eaten this week by ..." << endl;
	for (int m = 0; m < MONKEYS; m++) {

		greatest = GetGreatest(food, m);
		cout << "\t" << monkeys[m] << " is " << greatest << " pounds " << endl;

	}
	return 0;
}



