#include<iostream>
#include<string>

using namespace std;

int main() {

	int books;  //# of books to read
	int months;	//# of months spent reading
	double perMonth;	//average of books per month

	cout << "How many books do you plan to read: ";
	cin >> books;
	cout << "How many months will itm take you to read them: ";
	cin >> months;
	perMonth = static_cast<double>(books)/ months;
	cout << "Thats is :" << perMonth << " books per month. \n";

	return 0;
}