/*

Victor Martins

grossPay.cpp

Program is going to calculate an employees weekly pay based on the hours worked 
and the hourly rate

Input: Hours worked and weekly pay

Processing: 1. Prompt user for hours and rate
			2. Calculate pay:
				pay = hour * pay
			3. Display result

Output Weekly pay
*/


#include <iostream>
#include <string>
using namespace std;
int main() {

	// variable declarations 
	// hours, rate, pay
	double hours, rate, pay;

	cout << "HowMany Hours Did You Work? ";
	cin >> hours;

	cout << "how Much Do You Get Paid Per Hour? ";
	cin >> rate;

	pay = hours * rate;

	cout << "Your Payday Will Be $ " << pay << endl;




	return 0;
}