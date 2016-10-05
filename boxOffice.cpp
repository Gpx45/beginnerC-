/*
Victor Martins
boxOffice.cpp
this will calculate the movie ticket box offices earnings and dsiplay it on the screen.
1.Ask how many kids and adults
2.ask movie name
3.dispaly gross proft for box office
4.display net Box office profit
5.amount paid to distributor
6. all must be aligned.
*/

#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>

using namespace std;

int adultTick, childTick;
const int aPrice = 14;
const int cPrice = 10;
float rate() {
	const double RATE = .20;
	return RATE;
}

int main() {

	cout << "Box Office Earnings Calculator ....\n" << endl;
	cout << "Please Enter the Name of the Movie: ";
	string movie_name;

	getline(cin, movie_name);


	cout << endl << "   \"     \"   " << "adult tickets sold: ";
	cin >> adultTick;

	cout << "   \"     \"   " << "child tickets sold: ";
	cin >> childTick;

	double grossTotal = (aPrice * adultTick) + (cPrice * childTick);

	cout << endl << setw(10) << left << "Movie Title: " << setw(20) << right << " \"" << movie_name << "\" " << endl;
	cout << setw(10) << left << "Adult Tickets Sold: " << setw(17) << right << adultTick << endl;
	cout << setw(10) << left << "Child Tickets Sold: " << setw(17) << right << childTick << endl;
	cout << setw(10) << left << "Gross Box Office Profit: " << setw(9) << right << "$ " << fixed << setprecision(2) << grossTotal << endl;
	cout << setw(10) << left << "Net Box Office Profit: " << setw(11) << right << "$ " << (grossTotal * rate()) << endl;
	double netBProfit = (grossTotal * rate());
	cout << setw(10) << left << "Amount Paid to Distributor: " << setw(6) << right << "$ " << grossTotal - netBProfit << endl;



}
