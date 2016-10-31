/*

	Victor Martins
	
	lowestScore.cpp

	Calculates the average of a group of 5 test scores, 
	weres the lowest score in the group is dropped.

	Input: 5 test scores

	Processing: 1. To prompt user for 5 scores
				2. detirmine lowest score
				3. Calcualte the average of 4 highest scores
				4. display the result.

	Output: Average og the 4 highest scores.


*/

#include<iostream>
#include<iomanip>

using namespace std;
// Function Prototype: 
void getScore(int n, int& score);
void calcAverage(int s1, int s2, int s3, int s4, int s5);
int findLowest(int s1, int s2, int s3, int s4, int s5);

int main() {

	int s1, s2, s3, s4, s5;

	cout << "\n Average of 4 Highest Scores App...." <<
		endl;

	// Prompt user for 5 scores.

	getScore(1, s1);
	getScore(2, s2);
	getScore(3, s3);
	getScore(4, s4);
	getScore(5, s5);

	// Calculate and Display the Average of the 
	//four Highest Scores
	calcAverage(s1, s2, s3, s4, s5);



	return 0;
}


/*

	void getScore(int i, int& score)

	Prompt user for the value of score "n", (0-100) and return it through
	the reference parameter "score".

	Return Value: None


*/
void getScore(int n, int& score) {

	do {

		cout << "\n Please Enter Score " << n << " (0 - 100): ";
		cin >> score;


		if (score < 0 || score > 100) {
			cout << "\tError... Invalid Score.";

		}
	} while (score < 0 || score > 100);


	return;
}


/*
void calcAverage(int s1, int s2, int s3, int s4, int s5)

calculate and Display the average of the four highest scores (s1-s5)


*/
void calcAverage(int s1, int s2, int s3, int s4, int s5) {

	int lowest;
	double average;

	//Detirmine the lowest Score.
	lowest = findLowest(s1, s2, s3, s4, s5);


	//calculate & Display average
	
	average = (s1 + s2 + s3 + s4 + s5 - lowest) / 4.0;

	cout << "\nThe average of the four highest score is:" <<
		fixed << setprecision(3) << average << endl;

	return;
}

/*
int findLowest(int s1, int s2, int s3, int s4, int s5)

Determine the lwo3est of five score(s1-s5) and return it
to the caller.


*/


int findLowest(int s1, int s2, int s3, int s4, int s5) {

	int lowest;


	//Detirmine the lowest score.

	lowest = s1;
	if (s2 < lowest) {
		lowest = s2;
	}
	if (s3 < lowest) {
		lowest = s3;
	}
	if (s4 < lowest) {
		lowest = s4;
	}
	if (s5 < lowest) {
		lowest = s5;
	}

	return lowest;
}

