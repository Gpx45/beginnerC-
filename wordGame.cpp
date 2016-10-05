/*
Victor Martins
wordGame.cpp
Asks many things from users, sets it all to varaibles and display a story based on what
the user has inputed to each variable of literal strings.

*/

#include<iostream>
#include<string>

using namespace std;

int main() {

	string name, city, college, profession, animal, pet;
	int age;

	cout << "Please enter your name: ";
	getline(cin, name);
	cout << "  \"     \"   " << "your age: ";
	cin >> age;
	cin.ignore();
	cout << "  \"     \"   " "a city: ";
	getline(cin, city);
	cout << "  \"     \"   "  "a college: ";
	getline(cin, college);
	cout << "  \"     \"   "  "a profession: ";
	getline(cin, profession);
	cout << "  \"     \"   "  "a type of animal : ";
	getline(cin, animal);
	cout << "  \"     \"   "  "a pet's name : ";
	getline(cin, pet); 
	cout << endl;

	cout << "There was once a person named "
		<< name << " who lived in  "
		<< city << "." << endl << "At the age of "
		<< age << ","
		<< name << " went to college at "
		<< college << "." << endl
		<< name << " graduated and to work as a "
		<< profession << "." << endl << "Then,"
		<< name << " adopted a(n) "
		<< animal << " named "
		<< pet << "." << endl <<
		"They both lived happily ever after!" << endl;

	return 0;
}