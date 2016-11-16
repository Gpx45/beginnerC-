/*

Victor Martins

movies.cpp

Mantains data about a movies

Iput: data about a movie including:
	title
	director
	year relased
	running time (minutes)

Processing: 
1. Prompt user for information two moveis
2. Display a report

Output: 
A report showing information about 2 movies.


*/

//Header Files
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

// user defined data types.

struct movieData {

	string title;	//Movie title
	string director; //Movie director
	int year;	// Year released
	int time;	//running time in (minutes)
};

// Function Prototypes:

movieData GetMovie();
void DisplayMovie(movieData movie);

int main() {

	//Variable Declarations
	movieData movie1, movie2;

	cout << "\nMovie Record Keeper App..." << endl;

	//
	movie1 = GetMovie();
	movie2 = GetMovie();

	// Displays the information of the movies

	cout << "\nList of Movies...." << endl;
	DisplayMovie(movie1);
	DisplayMovie(movie2);



	

	return 0;
}

/*
movieData GetMovie()

Prompt user for information about a movie 
and returns it

return value: movie


*/


movieData GetMovie() {

	movieData movie;

	//Prompt user for for movie info

	cout << "\n Please enter the following information:" << endl;
	cout << "\n Please enter " << endl << "\tMovie Title: ";
	getline(cin, movie.title);

	cout << "\tDirector: ";
	getline(cin, movie.director);
	
	do {
		
		cout << "\tYear Released: ";
		cin >> movie.year;

		if (movie.year < 0) {
			cout << "Error Invalid Year. Try Again." << endl;
		}

	} while (movie.year < 0);


	do {

		cout << "\tRunning Time(in minutes): ";
		cin >> movie.time;

		if (movie.time <= 0) {
			cout << "Error Invalid Running Time. Try Again." << endl;
		}

	} while (movie.time <= 0);
	
	cin.ignore();	// Clean input stream.

	return movie;
}

/*
void DisplayMovie(movieData movie)

Display informatio about the movie

does not return anything.


*/


void DisplayMovie(movieData movie) {

	cout << setw(35) << left << "\nMovie Title: " << movie.title << endl
		<< setw(35) << left << "Director:" << movie.director << endl
		<< setw(35) << left << "Year Released:" << movie.year << endl
		<< setw(35) << left << "Running Time:" << movie.time << endl;


	return;
}