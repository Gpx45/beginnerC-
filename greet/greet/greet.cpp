/*
Victor Martins

hello.cpp

Prompt the user for his/her name and display a greeting message
*/

#include <iostream>
#include <string>

using namespace std;
int main() {
	// variable declaration

	string sayHello;
	//Pormpt user name
	// insertion operator "<<" to insert items into display
	// extraction operator ">>" to extract items from a input (keyboard)
	cout << "Please Enter Name: ";
	cin >> sayHello;

	//Display Greeting
	cout << "Hello " << sayHello << "!" << endl;

	return 0;


}
