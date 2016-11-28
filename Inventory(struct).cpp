/*

	Victor Martins

	final Practice.cpp

	Practice program for Final Exam



*/


#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>

using namespace std;

//User defiend Datatypes:

struct Inventory 
{
	int itemNumber;
	string itemName;
	int itemCount;
	double itemPrice;


};


//Global constant
const int SIZE = 50;

//Function Prototype:
void readInData(Inventory[], int&);
void createReport(Inventory[], int);
Inventory getItem();
void addItemToFile(Inventory);
float totalCost(Inventory[], int);

int main() {
	
	Inventory myInventory[SIZE];
	Inventory newItem;
	double total;
	int count;

	// Read in Data from Inventory.txt
	readInData(myInventory, count);
	
	// Display the Data that was read 
	createReport(myInventory, count);

	// Prompt the user for new item
	newItem = getItem();

	// Add new item to "Inventory.txt"
	addItemToFile(newItem);

	//Display te Total Cost of the Items
	readInData(myInventory, count);
	total = totalCost(myInventory, count);

	cout << "\nthe total cost of the Items in the Inventory is $"
		<< total << endl;

	return 0;
}

/*
void readInData(Inventory items[], int& count)

Read items from file "invenotry.exe" amd sote them the array items[].
Update count with the number of items read.


*/

void readInData(Inventory items[], int& count) 
{
	ifstream inFile;

	//open inventory.txt
	inFile.open("Inventory.txt");

	//Read item in array items[]

	count = 0;
	while (inFile >> items[count].itemNumber)
	{

		inFile >> items[count].itemName
			>> items[count].itemCount
			>> items[count].itemPrice;

		count++;
	}

	//Close file
	inFile.close();

	return;
}
/*
void createReport(Inventory items[], int count)

Displays the items (count) stored in the array items[].

return value none.


*/

void createReport(Inventory items[], int count)
{
	cout << "*******************************" <<
		"Inventory Report" 
		<< "*******************************" << endl;

	cout << setw(20) << left << "Item Number" <<
		setw(20) << left << "Item Name" <<
		setw(20) << left << "Item Count" <<
		"Item Price" << endl;

	cout << "*******************************" <<
		"****************" 
		<< "*******************************" << endl;
	//Items

	cout << fixed << setw(2);

	for (int i = 0; i < count; i++) 
	{
		cout << setw(20) << left << items[i].itemNumber
			<< setw(20) << left << items[i].itemName
			<< setw(20) << left << items[i].itemCount
			<< '$' << items[i].itemPrice << endl;
	}

	return;
}

/*
Inventory getItem()

Prompts user for an Inventory item and returns it
back to the caller.

Return Value: Inventory Items


*/

Inventory getItem() 
{

	Inventory item;

	//Prompt user for inventory item
	cout << "Please enter the following Inventory Data..." << endl;


	cout << "\tItem Number: ";
	cin >> item.itemNumber;

	cout << "\tItem Name: ";
	cin >> item.itemName;

	do
	{
		cout << "\tItem Count: ";
		cin >> item.itemCount;

		if (item.itemCount < 1)
			cout << "\tError ... Invalid Count. Try Again..." << endl;
	
	} while (item.itemCount < 1);

	do
	{
		cout << "\t Item Price: ";
		cin >> item.itemPrice;

		if (item.itemPrice < 1)
			cout << "\tError... Invalid Price. Try Again..." << endl << endl;
	
	} while (item.itemPrice < 1);

	return item;
}


/*
void addItemToFile(Inventory item)

Appends an item to iventory.txt

return value: none.


*/

void addItemToFile(Inventory item)
{
	fstream myFile;

	//Open Inventory.txt

	myFile.open("Inventory.txt", ios::app);

	//Append Item to file
	myFile << item.itemNumber << "\t"
		<< item.itemName << "\t"
		<< item.itemCount << "\t"
		<< item.itemPrice << endl;
	
	myFile.close();

	return;
}


/*
float totalCost(Inventory items[], int count)

Calculates and returns the cost of all items (count)
in the array itmes[]/

*/

float totalCost(Inventory items[], int count) 
{

	double total = 0.0;

	for (int i = 0; i < count; i++)
	{
		total += items[i].itemCount * items[i].itemPrice;

	}


	return total;
}