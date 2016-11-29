#include<iostream>
#include<string>
#include<iomanip>
#include <fstream>

using namespace std;



struct SuperHeroes {

	int GameID;
	string heroeName;
	string company;
	string difficulty;

};

//Prototypes:
void readDisplayHeroes(SuperHeroes[], int&);
void createList(SuperHeroes[], int);

//Globals
const int SIZE = 100;

int main(){
	SuperHeroes list[SIZE];
	int counter;

	readDisplayHeroes(list, counter);
	createList(list, counter);
}

void readDisplayHeroes(SuperHeroes list[],int& counter) {

	ifstream readFile;

	readFile.open("heroesList.txt");

	counter = 0;
	while (readFile >> list[counter].GameID) {

		readFile 
			>> list[counter].heroeName
			>> list[counter].company
			>> list[counter].difficulty;

		counter++;
	}

	readFile.close();
}

void createList(SuperHeroes list[], int counter) {

	for (int i = 0; i < counter; i++) {

		cout << setw(20) << left << list[i].GameID << "\t"
			<< setw(20) << left << list[i].heroeName << "\t"
			<< setw(20) << left << list[i].company << "\t"
			<< setw(20) << left << list[i].difficulty << endl;
	}

}