/*
Victor Martins


interest.cpp

Calculate the interest,
insert the pricinpa; and interest
displays principal, interest and amount in savings

*/

#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>

using namespace std;

int main() {

	float principal, compound;
	float interest;

	cout << "Compound Interest Calculator ...\n" << endl;
	cout << "Please Enter the Principal Amount: ";
	cin >> principal;
	cout << "   \"     \"   " << "interest rate: ";
	cin >> interest;
	cout << "   \"     \"   " << "the number of times interest will be compounded: : ";
	cin >> compound;
	cout << endl;
	cout << "Interest Rate: " << setw(20) << right << interest << "%\n";
	cout << "Times Compounded: " << setw(17) << right << compound << endl;
	cout << "Principal: " << setw(17) << right << fixed << setprecision(2) << "$ " << principal << endl;
	cout << "Interest: " << setw(20) << right << fixed << setprecision(2) << "$ " << (interest / 100) * principal << endl;
	float amount;
	int t = 4;
	float x = interest / 4;
	amount = principal * (1 + (pow(x, t)));
	cout << "Amount in Savings: " << setw(9) << "$ " << amount << endl;


	return 0;
}
