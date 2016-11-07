
/*
Professor I jsut wanted to let you know that when we did some these in class I accidentally forgot
to submit..... So I redid it all over again, which was great preactice, I understand it well I belive,
the last problem here helped me alot because I now understand reference variables, there SO powerful! Thank you. 

*/



//Headers:

#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>

//Scope:

using namespace std;


//Prototypes:

float SphereVolume(float r);
bool IsEven(int);
char LetterGrade(float);
float Average(int, int, int, int);
void Max(int num1, int num2, int& greatest);
void isMultipleThree(int n, bool& isIt);
void Login(string &id, string &password);

//main()

int main() {

	/*
	-----------------------------
	Calculating a sphere.
	float SphereVolume(float r);
	-----------------------------
	*/


	/*
	
	float vol, radius;

	cout << "Volume Calculator...\n";
	vol = SphereVolume(radius);
	cout << "\t Volume is: " << fixed << setprecision(3) << vol << endl;
	*/


	/*
	----------------------------
	Calculating if EVEN/ODD
	bool IsEven(int);
	----------------------------
	*/


	/*
	cout << "EVEN or ODD Calculator...\n";
	int n;
	cout << "\tPlease Enter a Number: ";
	cin >> n;
	IsEven(n);
	*/


	/*
	----------------------------------------------
	Calculating if What Letter Grade you Have
	char LetterGrade(float);
	----------------------------------------------
	*/


	/*
	char letterGrade;
	float grade;
	cout << "Grade Calculator....\n"
		<< "\tEnter your Grade: ";
	cin >> grade;
	letterGrade = LetterGrade(grade);
	cout << "\n\tYour Grade is an: " << letterGrade << endl;
	*/


	/*
	----------------------------------------------
	Calculates the Average of 4 values
	float Average(int, int, int, int);
	----------------------------------------------
	*/
	

	/*
	float average;
	int value1, value2, value3, value4;
	cout << "Average Calculator...\n" <<
		"\tPlease Enter your 4 Integer Values: ";
	
	cin >> value1 >> value2 >> value3 >> value4;

	average = Average(value1, value2, value3, value4);
	
	cout << endl << "\tThe Average is: " << fixed << setprecision(2) << average << endl;
	*/


	/*
	----------------------------------------------------
	Calculates the Maximun Value Between 2 Values:
	void Max(int num1, int num2, int& greatest);
	----------------------------------------------------
	*/


	/*
	int n1, n2,max;
	cout << "Maximum Calculator....\n";
	cout << "\tPlease Enter 2 Values: ";
	cin >> n1 >> n2;
	Max(n1, n2, max);
	cout << "\nThe Max Value is: " << max << endl;
	*/


	/*
	----------------------------------------------------
	Calculates if a Vlue is Multiple of Three:

	----------------------------------------------------
	*/

	/*
	int n;
	bool answer;
	cout << "Please Enter an Integer to see if its Divsible by 3: ";
	cin >> n;
	isMultipleThree(n, answer);
	if (answer == true)
		cout << "\tIt IS divisible by 3";
	else
		cout << "It is NOT divisible by 3";
	*/


	/*
	----------------------------------------------------
	Returns the login information to the User:
	void Login(string &id, string &password);
	----------------------------------------------------
	*/

	string userID, password;
	
	Login(userID, password);
	cout << "\n\tUser: " << userID << endl
		<< "\tPassword: " << password << endl << endl;

return 0;
}

//FUNCTIONS:



float SphereVolume(float r) {

	float const PI = 3.14159;
	float volume, radius;
	volume = 4/3 * PI * pow(r, 3);

	cout << "Sphere Calc....\n";
	cout << "\tPlease Enter Radius of Sphere: ";
	cin >> radius;
	return volume;
}




bool IsEven(int n) {

	n = n % 2;

	if (n == 0) {

		cout << "\nThe number is EVEN" << endl;
	}
	else
		cout << "\nThe number is ODD" << endl;
	
	return n;
}



char LetterGrade(float grade) {

	
	char a = 'A', b = 'B', c = 'C', d = 'D', f = 'F';
	if (grade >= 90.0)
		return a;
	else if (grade >= 80.0 && grade < 90.0)
		return b;
	else if (grade >= 70.0 && grade < 80.0)
		return c;
	else if (grade >= 60.0 && grade < 70.0)
		return d;
	else if (grade >= 0.0 && grade < 60.0)
		return f;


}



float Average(int val1, int val2, int val3, int val4) {
	
	float average;

	average = (val1 + val2 + val3 + val4) / 4;
	
	return average;


}



void Max(int num1, int num2, int& greatest) {

	if (num1 > num2) {
		greatest = num1;
	}
	if (num2 > num1) {
		greatest = num2;
	}
	return;

}



void isMultipleThree(int n, bool& isIt) {
	
	n %= 3;

	if (n == 0) {
		isIt = true;
	}
	else {
		isIt = false;

	}
	return;
}



void Login(string &id, string &password) {

	cout << "User Login....\n";

	cout << "\tEnter Username: ";
	getline(cin, id);
	cout << endl;
	cout << "\tEnter Password: ";
	getline(cin, password);

	return;
}