/*





*/


#include<iostream>
#include<string>
#include<iomanip>
#include<ctime>
#include<cstdlib>
#include<fstream>


using namespace std;


//Prototypes:

void quit();
void menu();
void game();
int human(int points);
int ogre(int points);
int elf(int points);
int weaponAttack(int random);
int goblinGrunt(int points);
int harpyMonster(int monster);
int balrogMonster(int monster);



int main() {

	game();

	return 0;
}


void game() {

	int choice = 0, points = 0, random = 0;
	int weapon = 0, race = 0, highscore = 0, goblin = 1;
	int harpy = 2, balrog = 3, miss = 4, monster = 0;

	do {

		cout << setw(30) << right << "Welcome to RPG Adventures!\n" << endl;
		cout << "Please Select an Option: \n" <<
			"\t1. See Rules.\n" <<
			"\t2. PLAY Game!\n" <<
			"\t3. Quit/n" << endl;
		cin >> choice;

		switch (choice) {

		case 1:
			menu();
			break;
		case 2:

			do {
				cout << "\n\tPick your Race: \n"
					<< "\t1. Human \n"
					<< "\t2. Ogre \n"
					<< "\t3. Elf \n" << endl;

				cin >> race;

				if (race <= 0 || race > 3)
					cout << "\n\tWrong Value Try again.";

				else if (race == 1) {
					points = human(points);
					highscore += points;
				}
				else if (race == 2) {
					points = ogre(points);
					highscore += points;
				}
				else if (race == 3) {
					points = elf(points);
					highscore += points;
				}

			} while (race <= 0 || race > 3);


			do {

				cout << "\n\tPick your Weapon: \n"
					<< "\t1. Flamethrower \n"
					<< "\t2. Sword \n"
					<< "\t3. Magic Potion \n" << endl;

				cin >> weapon;

				if (weapon <= 0 || weapon > 3)
					cout << "\n\tWrong Value Try Again. ";

			} while (weapon <= 0 || weapon > 3);

			// Flamethrower Battle!

			if (weapon == 1) {
				cout << "\tYou have Entered the Training Zone!\n";
				int attack = 0;
				cout << "\n\tYou have encountered a Monster do you wish to Take out your Flamethrower?\n"
					<< "\tPress 1 to Take FLamethrower!";
				
				do {
					cin >> attack;
					if (attack == 1) {
						cout << "\tYou Have Taken your Flamethrower out of your back-pack!\n";

						if (weaponAttack(random) == goblin) {
							cout << "\n\tYou have attacked A Goblin  Grunt! \n\n";
							highscore += goblinGrunt(monster);
							cout << "\tPress 1 to Attack Again!\n"
								<< "\tPress 0 to End Game";
						}

						else if (weaponAttack(random) == harpy) {
							cout << "\n\tYou have attacked A Harpy! \n";
							highscore += harpyMonster(monster);
							cout << "\tPress 1 to Attack Again!\n"
								<< "\tPress 0 to End Game";
						}
						else if (weaponAttack(random) == balrog) {
							cout << "\n\tYou have attacked A Balrog! \n";
							highscore += balrogMonster(monster);
							cout << "\tPress 1 to Attack Again!\n"
								<< "\tPress 0 to End Game";
						}
						else if (weaponAttack(random) == miss) {
							cout << "\n\tYou missed!!\n";
							cout << "\tPress 1 to Attack Again!\n"
								<< "\tPress 0 to End Game";
						}

					}
				} while (attack != 0);
			}

		case 3:
			break;
		}

	} while (choice != 3);
	
	return;
}

void quit() {

	cout << "\n\tThank you for Playing! \n";
	exit(EXIT_SUCCESS);
	return;
}


void menu() {

	cout << "Rules: Pick your Character: \n"
		<< "\tHuman\n"
		<< "\t Ogre\n"
		<< "\t Elf\n\n";
	cout << "Next you will Pick from three Weapons: \n"
		<< "\t1. Flame Thrower \n"
		<< "\t2. Bow and Arrow \n"
		<< "\t3. Magic Potion \n" << endl;
	cout << "You will fight and gain POINTS based on which\n"
		<< "race you picked and you will accumulate points depending"
		<< " on how well you do accumulating points.\n" << endl;


	return;
}

int weaponAttack(int random) {
	srand(time(NULL));
	random = rand() % 4 + 1;
	return random;
}

//int weaponMagicPotion(int& random) {
//srand(time(NULL));
//random = rand() % 2 + 1;
//return random;
//}


int human(int points) {

	points = 100;

	return points;
}

int ogre(int points) {

	points = 200;

	return points;
}

int elf(int points) {

	points = 300;

	return points;
}

int goblinGrunt(int monster) {
	monster = 100;
	return monster;
}

int harpyMonster(int monster) {
	monster = 200;
	return monster;
}

int balrogMonster(int monster) {
	monster = 300;
	return monster;

}

int missAttack(int monster) {
	monster = 0;
	return monster;
}