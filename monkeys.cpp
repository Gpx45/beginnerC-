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
void GetFood(double[][DAYS], int);
double GetAverage(double[][DAYS], int);
double GetLeast(double[][DAYS], int);
double GetGreatest(double[][DAYS], int);


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

	cout << "\nThe Amount of Food eaten by the monkeys on: " << endl;
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

/*
void GetFood(double food[],int m)

Prompt the user for the amount of food eaten by "monkey"
during the week and store it in food[]


*/

void GetFood(double food[][DAYS], int monkey) {

	cout << "\n\tEnter amount of food eaten by " << monkeys[monkey] << " on " << endl;

	for (int d = 0; d < DAYS; d++)
		do {

			cout << "\t" << days[d] << ": ";
			cin >> food[monkey][d];

			if (food[monkey][d] < 0)
				cout << "\n\t Error... Invalid Number. Try again" << endl;
		} while (food[monkey][d] < 0);
		



	return;
}

/*
double GetAverage(double food[][DAYS], int day)

calculate the average amount of food eaten by the whole family
of monkeys on "day"

return Value: Average

*/


double GetAverage(double food[][DAYS], int day) {

	double average, total = 0;

	for (int m = 0; m < MONKEYS; m++)
		total += food[m][day];

	average = total / MONKEYS;

	return average;
}


/*
double GetLeast(double food[][DAYS], int monkey)

return the least amount of food eaten by "monkey"
during the week

Return Value: Least amount of food.

*/

double GetLeast(double food[][DAYS], int monkey) {

	double least;

	least = DBL_MAX;

	for (int d = 0; d < DAYS; d++)
		if (food[monkey][d] < least)
			least = food[monkey][d];


	return least;
}


/*
double GetLeast(double food[][DAYS], int monkey)

return the least amount of food eaten by "monkey"
during the week

Return Value: Least amount of food.

*/

double GetGreatest(double food[][DAYS], int monkey) {

	double greatest;

	greatest = DBL_MIN;

	for (int d = 0; d < DAYS; d++)
		if (food[monkey][d] > greatest)
			greatest = food[monkey][d];


	return greatest;
}

