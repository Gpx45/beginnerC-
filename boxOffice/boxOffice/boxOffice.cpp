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
	

	cout << endl << "   \"   \"   "<< "adult tickets sold: " ;
	cin >> adultTick;

	cout << "   \"   \"   " << "child tickets sold: ";
	cin >> childTick;
	
	cout << endl << setw(10) << left << "Movie Title: " << setw(20)<< right <<" \" "<< movie_name <<" \" "<< endl;
	cout << setw(10) << left << "Adult Tickets Sold:" << setw(20) << right << adultTick << endl;
	cout << setw(10) << left << "Child Tickets Sold:" << setw(20) << right << childTick << endl;
	
	
	
	
	
	
	
	
	return 0;
}