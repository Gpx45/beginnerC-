/*

Victor Martins
numFile

Input:
Place numbers into the random.txt file and the program will calculate the following

Processing:
It opens a buffer to a file and reads the numeric values

1. The program reads the numbers from the random.txt
2. the program will calculate the Total numbers in the file
3. the program will calculate the Sum of all the numbers
4. the program will calculate the average of all the numbers

Output:
after reading (fstream object) the values inputed into random.txt
outputs the Total amount of numbers
outputs the total sum for all the numbers
outputs the average of the toal numbers.

*/

#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>

using namespace std;

int main() {

	int choice, numbers;

	fstream rFile;// opens the buffers to the file to READ from the file NOT writting in this case though you can do it also with fstream

	do {//wont quit the program and will repeat until you want the program to stop
		cout << "\nNumeric Processor...\n" << endl;
		cout << "\n Press 1. For TOTAL, AMOUNT and AVERAGE of the numbers." //displays options to either calculate or quit the program.
			<< "\n Press 2 to Quit. ";

		cin >> choice;

		switch (choice) {//in case you press one the program will execute the following

		case 1:

			rFile.open("random.txt", ios::in);

			if (rFile) {
				double average;
				int count = 0;
				int sum = 0;
				while (rFile >> numbers) {//while the buffer is reading the data on the file

					count += 1;//it counts the amount of times it loops based on the amount of numbers
					sum += numbers;//adds each numbers and adds it to the variable sum
				}

				average = sum / count;//takes the average of all the numbers
				cout << "\tNumber of Items: " << count << endl;//displays the amount of numbers in the file
				cout << "\tSum of all the Numbers: " << sum << endl;//displays the sum of all the numbers
				cout << "\tAverage of the Numbers: " << fixed << setprecision(3) << average << endl;//displays the average of all the numbers.
				rFile.close();// Closes file
			}
			else {
				cout << "\n\tError Random.txt could not Open";//in case the file cannot be read it will give 
				return 5;
			}

			break;

		case 2://case 2 the program will leave and quit
			break;
		}

	} while (choice != 2);// this the condition that will continue until the 2nd option will be executed.



	return 0;
}