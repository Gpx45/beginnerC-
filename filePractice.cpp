/*

	Victor Martins
	
	filePractice.cpp

	This is a practice program that will desmostrate file manipulation


	Menu driven interface system that allows users to:
	1. Create a database of students
	2. Add a student to the database
	3. Display the student database
	4.Quit

*/


//Header Files

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	
	// Variable declaration

	int option;	//Menu Option
	string stId;// Student ID
	string stName; // Student Name
	double stGPA;
	fstream myFile; // Manipulate student file

	do 
	{
		//Display Menu
		cout << "\n Student Database Management System ...\n" << endl;

		cout << "\t1. Create the student database." << endl
			<< "\t2. Add a student to the database." << endl
			<< "\t3. Display the student database" << endl
			<< "\t4. Quit " << endl
			<< "\n\tOption: ";

		cin >> option;

		//Drive the Menu Options
		switch (option) {

		case 1: // Create the student Database

			//open File
			myFile.open("students.txt", ios::out);

			if (myFile) {

				// Prompt User for Student Data
				cout << "\nPlease enter the Following Data..." << endl;
				cout << "\tStudent ID: ";
				cin >> stId;
				cout << "\tStudent Name: ";
				cin.ignore();
				getline(cin, stName);
				cout << "\tStudnt GPA: ";
				cin >> stGPA;

				//Write student data to file

				myFile << stId << endl
					<< stName << endl
					<< stGPA << endl;


				//Close the file
				myFile.close();

			}
			else {
				cout << "Error ... Could not create students.txt" << endl;
				return 5; //Input/Output Error.

			}

			break;

		case 2: // Add Student to the Database
			//Open File
			myFile.open("students.txt", ios::app);

			if (myFile) {

				// Add student to the database
				// Prompt User for Student Data
				cout << "\nPlease enter the Following Data..." << endl;
				cout << "\tStudent ID: ";
				cin >> stId;
				cout << "\tStudent Name: ";
				cin.ignore();
				getline(cin, stName);
				cout << "\tStudnt GPA: ";
				cin >> stGPA;

				//Write student data to file

				myFile << stId << endl
					<< stName << endl
					<< stGPA << endl << endl;


				//Close the file
				myFile.close();

			}
			else {
				cout << "Error ... not open students.txt" << endl;
				return 5; //Input/Output Error.

			}

			break;

		case 3: // Display database
			//Opening the file

			myFile.open("students.txt", ios::in);

			if (myFile) {

				//Display report Heading
				cout << "\nStudents Database..." << endl;

				cout << setw(20) << left << "ID"
					<< setw(30) << left << "Name"
					<< setw(10) << left << "GPA" << endl;

				//display students (one at a time)

				while (myFile >> stId) {

					myFile.ignore();
					getline(myFile, stName);
					myFile >> stGPA;

					//Display Student data

					cout << setw(20) << left << stId
					<< setw(30) << left << stName
					<< setw(10) << left << stGPA << endl;

				}

				myFile.close();

			}
			else {
				cout << "Error ... not open students.txt" << endl;
				return 5; //Input/Output Error.

			}
			break;

		case 4: // Quit

			break;

		default:
			cout << "\n\tError .. Invalid Option" << endl;
		}


	} while (option != 4);



	return 0;
}