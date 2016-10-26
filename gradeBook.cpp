

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

	fstream gFile;
	int choice, grades;
	string gb,students;
	do {
		cout << "Student Grade Book Info Program....\n";
		cout << "\tPlease Select an Option: (1 or 2) \n" << endl
			<< "\t1. Review Grades"
			<< "\n\t2. Quit"
			<< "\n\tChoose: ";
		cin >> choice;

		switch (choice) {

		case 1: 
			cout << "\n\tPlease Enter the Name of the File you wish to View the Grades for: " << endl;
			cout << "\n\tAvailable Grade Books: gradeBook\n" <<
			"\tType in the Grade Book you would like to view. ";
			cin.ignore();
			getline(cin, gb);
			
			if (gb == "gradeBook") {

				gFile.open("gradeBook.txt", ios::in);

				if (gFile) {

					cout << "\t" << setw(20) << left << "Student"
						<< setw(30) << left << "Grade";
						
					int counter = 0;
					int highest = 0;
					while (gFile >> students) {

						getline(gFile, students);
						gFile >> grades;

						if (grades >= highest) {
							highest = grades;
						}
						counter++;
					}
					cout << students;
					cout << highest;
					cout << endl;
				}
				else {
					cout << "\tError... Could open gradeBook.txt ";
					return 5;
				}
			
			}
			else {
				cout << "\n\tError there is no such entry in the system.\n" << endl;
			
			}

		case 2:
			break;
		}

	} while (choice != 2);


	return 0;
}