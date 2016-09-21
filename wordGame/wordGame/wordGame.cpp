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

	string name, city, college, profession, animal, petName;
	int age;

	cout << "Please input your Name ";
	getline(cin, name);
	cout << "Please give me your Age: ";
	cin >> age;
	cin.ignore();
	cout << "Please input the City you were born in : ";
	getline(cin, city);
	cout << "Please input the College you went to: ";
	getline(cin, college);
	cout << "Please input your Profession: ";
	getline(cin, profession);
	cout << "Please input the KIND of PET Animal you have: ";
	getline(cin, animal);
	cout << "What is your Pets name: ";
	getline(cin, petName);
	
	cout << "Your name is " << name << " you are " << age << " years old " << " You were born in " <<
		city << " and you went to " << college << ", you work as a " << profession << " your pet animal " << petName << " is an " << animal << " and theres much love there." << endl;
	return 0;
}