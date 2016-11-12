#include<iostream>
#include<string>

//Prototypes:
void getJars(string[], int[] );


using namespace std;

int main() {


	const int NUM = 5;
	string sauce[NUM];
	int jars[NUM];

	getJars(sauce, jars);


	return 0;
}

void getJars(string salsa[],int jars[]) {
	string salsa[] = { "Mild, Medium, Sweet, Hot, Zesty" };
	const int NUM = 5;

	cout << "/t Please Insert How Many Jars you " <<
		"Sold this Month: ";

	for (int index = 0; index < NUM; index++) {
		cout << "How Many Jars Sold for " <<
			salsa[index] << ": ";
		cin >> jars[index];

	}
	


	return;
}