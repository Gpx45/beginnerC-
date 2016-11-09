/*

Victor Martins

numArray.cpp

Read Values from a file into an Array and return the lowest, highest
the total and the average of the numbers.

Input: The file with number values.


Processing: 
1. Prompt User for name of File.
2. Read File Content into an Array
3. Determine & Display
	- Lowest Value in the Array.
	- Highest Value in the Array.
	- Total of the Values in the Array.
	- Average of the Values in the Array.


Output:The lowest, Highest, Total, Average.



*/

//Header Files

#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<climits>

using namespace std;


//Protypes:
void ReadValues(int[], int&);
int GetLowest(int[], int);
int GetHighest(int[], int);
int CalcTotal(int[], int);
double CalcAverage(int, int);

int main(){

	//constants & Variables
	const int SIZE = 50;
	int values[SIZE];
	int count;
	int lowest, highest, total;
	double average;


	cout << "Number Analysis App..." << endl;


	// Prompt a user for a file & Read contents in to arrays values.
	ReadValues(values, count);

	//Determine & Display lowest value.
	lowest = GetLowest(values, count);

	cout << "\t the Lowest value is: " << lowest;

	//Determine & Display highest value.
	highest = GetHighest(values, count);

	cout << "\n\t the Highest value is: " << highest;


	//Determine & Display the total values in the array.
	total = CalcTotal(values, count);

	cout << "\n\t The Total of the Values is: " << total;


	//Determine & Display the Average
	average = CalcAverage(total, count);

	cout << "\n\t The Average is: " << fixed <<
		setprecision(3) << average;

	cout << endl;


	return 0;
}

/*void ReadValues(int arr[],int& count)

Prompts the user for the name of the file, reads its value into arr
and returns through the count elements
*/

void ReadValues(int arr[],int& count) {

	string filename;
	ifstream inFile;

	// Prompt User for File Name.
	cout << "\n\tPlease Enter the Name of the File: ";
	cin >> filename;


	// Open file

	inFile.open(filename);

	if (!inFile) {
		cout << "\n\tFatal Error... Could Not Open File." << endl;
		exit(EXIT_FAILURE);
	}


	//Read Values into the Array.
	count = 0;
	while (inFile >> arr[count++])
		;

	count--;		//Interprets end of file as a value.
	//Close the File
	inFile.close();

	return;
}

/*
int GetLowest(int arr[], int count)

Determines and reutrn the lowest value in the arr[]
considering count elements


Return Values: Lowest Value in the Array.

*/



int GetLowest(int arr[], int count) {

	int lowest = INT_MAX;

	// Get the lowest value.

	for (int i = 0; i < count; i++)
		if (arr[i] < lowest)
			lowest = arr[i];

	return lowest;

}


/*
int GetHighest(int arr[], int count)

Determines and reutrn the lowest value in the arr[]
considering count elements


Return Values: Lowest Value in the Array.

*/

int GetHighest(int arr[], int count) {

	int highest = INT_MIN;

	//Get thge Highest Value.

	for (int i = 0; i < count; i++)
		if (arr[i] > highest)
			highest = arr[i];

	return highest;

}

/*
Determines the Total from all the values in the array,


*/

int CalcTotal(int arr[], int count) {

	int total = 0;

	for (int i = 0; i < count; i++)
		total += arr[i];

	return total;
}

/*

Determines the Average from all the values in the array 
and assigns it the average then returns the average
value.


*/



double CalcAverage(int total, int count) {

	double average;

	average = static_cast<double> (total) / count;


	return average;
}