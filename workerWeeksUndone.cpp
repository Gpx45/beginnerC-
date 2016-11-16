#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

const string names[] = { "Bob", "Cobert", "Rob" };
const string weeks[] = { "Week 1", "Week 2", "Week 3", "Week 4" };
const int WEEKS = 4;
const int NAMES = 3;


void getNames(int[][WEEKS], int);
int sumTotal(int pickup[][WEEKS]);

int main() {
	int sum;
	int pickup[NAMES][WEEKS];
	
	for(int n = 0; n < NAMES; n++)
		getNames(pickup, n);

	sum = sumTotal(pickup);
	cout << "Total value is : " << sum << endl;
	
	return 0;
}

void getNames(int pickup[][WEEKS], int name) {
	int sumPerPerson = 0;

	
		for (int i = 0; i < WEEKS; i++) {
			do{
				cout << "Please insert the days in the week you worked: " << names[name] << ": ";
			cin >> pickup[name][i];

			if (pickup[name][i] < 0)
				cout << "\n\tError try again.";

		sumPerPerson += pickup[name][i];
		
		}while (pickup[name][i] < 0);
}
		
	
	cout << endl;

	return;
}

int sumTotal(int pickup[][WEEKS]) {
	int sum = 0;

	for (int p = 0; p < NAMES; p++)
	{
		for (int q = 0; q < WEEKS; q++)
		{
			sum += pickup[p][q];
		}
	}



	return sum;
}