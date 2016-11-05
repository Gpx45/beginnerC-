/*
Victor Martins
coinToss.cpp
Simulate the tossing of a con as many times as indicated by the user.
Input: Number of times the coin will be tossed.
Proccessing: 1.Prompt user for number of times the coin will be tossed
2. from 1 to n:
Simulate and display generate a randiom number (1 or 2)
If 1 => display Heads
2 => displays Tails
Output: Simulation of Coin toses
*/

//Headers

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

// Function prototypes
int getTosses();
void coinToss();

int main() {

	int number; // Number of times the coin will be tossed.

				// Seed the random function.
	srand(time(NULL));

	cout << "\n Coin Toss Simulator..." << endl;
	//Prompt user for number of times the coin will be tossed

	number = getTosses();

	// Simulate coing toss "number" times

	for (int i = 0; i < number; i++)
		coinToss();


	return 0;
}

int getTosses() {

	int tosses;

	// Prompt user for number of tosses
	do {

		cout << "\n How many Times will the Coin be tossed? ";
		cin >> tosses;

		if (tosses < 0)	// sends an error message if user inserts a value less than 0  or less
			cout << "\tError .. Invalid value;";

	} while (tosses < 0);

	return tosses;
}

void coinToss() {

	int toss;

	//Simulate the tossing of a coin

	toss = rand() % 2 + 1;

	//Display result
	if (toss == 1)
		cout << "\t Heads\n";
	else
		cout << "\t Tails\n";

	return;
}