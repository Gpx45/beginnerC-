/*

	Victor Martins
	sum.cpp
	
	Calsculates the sum from 1 to a number entered by the user.

	Input: Positive integer (number)

	Processing: 1.Promp user for a positive interger 
				2.Calculate the sum from 1 to number
				3.Display result

	Output:The sum of the integer values from 1 to number


*/

#include<iostream>
#include<iomanip>


using namespace std;

int main() {
	int counter, sum, number;
	
	
	cout << "\nSum of Numbers App:";

	do {
		cout << "\nPlease Enter a Number: ";
		cin >> number;
		
		if (number <= 0)
			cout << "\n\tError invalid number! Try again. " << endl;

	} while (number < 1);

	sum = 0; // initialize the accumulator.
	counter = 1; // initialize counter

	while (counter <= number) {
	
		sum += counter; // Update Accumulator
		counter++;
	}

	// Display Result
	cout << "\n The sum of the numbers from 1 to the " << number << " is " << sum << endl;

	return 0;
}