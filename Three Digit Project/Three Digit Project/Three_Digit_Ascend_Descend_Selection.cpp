/* William Chen, Evan Graham, Brian Te
Period 4
October 5, 2017

Assignment Name : Three Digit Ascending Descending Selection
Let a user enter a three-digit number and the output will either read ascending or descending depending on the order of the characters in value.
*/

// Libraries

#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha

#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces

using namespace std;

// Functions()

void pause() {

	cout << "Press any key to continue . . .";

	while (!_kbhit());

	_getch();

	cout << '\n';
}

// MAIN

void main() {
	int number;
	for (int i = 1; i <= 30; i++) { // 30x loop
	cout << "…………………▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄" << endl;
	cout << "……………▄▄█▓▓▓▒▒▒▒▒▒▒▒▒▒▓▓▓▓█▄▄" << endl;
	cout << "…………▄▀▀▓▒░░░░░░░░░░░░░░░░▒▓▓▀▄" << endl;
	cout << "………▄▀▓▒▒░░░░░░░░░░░░░░░░░░░▒▒▓▀▄" << endl;
	cout << "……..█▓█▒░░░░░░░░░░░░░░░░░░░░░▒▓▒▓█" << endl;
	cout << "…..▌▓▀▒░░░░░░░░░░░░░░░░░░░░░░░░▒▀▓█" << endl;
	cout << "…..█▌▓▒▒░░░░░░░░░░░░░░░░░░░░░░░░░▒▓█" << endl;
	cout << "…▐█▓▒░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▓█▌" << endl;
	cout << "…█▓▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▓█" << endl;
	cout << "..█▐▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒█▓█" << endl;
	cout << "…█▓█▒░░░░░░░░░░░░░░░░░░░░░░░░░░░▒█▌▓█" << endl;
	cout << "..█▓▓█▒░░░░▒█▄▒▒░░░░░░░░░▒▒▄█▒░░░░▒█▓▓█" << endl;
	cout << "..█▓█▒░▒▒▒▒░░▀▀█▄▄░░░░░▄▄█▀▀░░▒▒▒▒░▒█▓█" << endl;
	cout << ".█▓▌▒▒▓▓▓▓▄▄▄▒▒▒▀█░░░░█▀▒▒▒▄▄▄▓▓▓▓▒▒▐▓█" << endl;
	cout << ".██▌▒▓███▓█████▓▒▐▌░░▐▌▒▓████▓████▓▒▐██" << endl;
	cout << "..██▒▒▓███▓▓▓████▓▄░░░▄▓████▓▓▓███▓▒▒██" << endl;
	cout << "..█▓▒▒▓██████████▓▒░░░▒▓██████████▓▒▒▓█" << endl;
	cout << "..█▓▒░▒▓███████▓▓▄▀░░▀▄▓▓███████▓▒░▒▓█" << endl;
	cout << "….█▓▒░▒▒▓▓▓▓▄▄▄▀▒░░░░░▒▀▄▄▄▓▓▓▓▒▒░▓█" << endl;
	cout << "……█▓▒░▒▒▒▒░░░░░░▒▒▒▒░░░░░░▒▒▒▒░▒▓█" << endl;
	cout << "………█▓▓▒▒▒░░██░░▒▓██▓▒░░██░░▒▒▒▓▓█" << endl;
	cout << "………▀██▓▓▓▒░░▀░▒▓████▓▒░▀░░▒▓▓▓██▀" << endl;
	cout << "………….░▀█▓▒▒░░░▓█▓▒▒▓█▓▒░░▒▒▓█▀░" << endl;
	cout << "…………█░░██▓▓▒░░▒▒▒░▒▒▒░░▒▓▓██░░█" << endl;
	cout << "………….█▄░░▀█▓▒░░░░░░░░░░▒▓█▀░░▄█" << endl;
	cout << "…………..█▓█░░█▓▒▒▒░░░░░▒▒▒▓█░░█▓█" << endl;
	cout << "…………….█▓█░░█▀█▓▓▓▓▓▓█▀░░█░█▓█▌" << endl;
	cout << "……………..█▓▓█░█░█░█▀▀▀█░█░▄▀░█▓█" << endl;
	cout << "……………..█▓▓█░░▀█▀█░█░█▄█▀░░█▓▓█" << endl;
	cout << "………………█▓▒▓█░░░░▀▀▀▀░░░░░█▓▓█" << endl;
	cout << "………………█▓▒▒▓█░░░░ ░░░░░░░█▓▓█" << endl;
	cout << "………………..█▓▒▓██▄█░░░▄░░▄██▓▒▓█" << endl;
	cout << "………………..█▓▒▒▓█▒█▀█▄█▀█▒█▓▒▓█" << endl;
	cout << "………………..█▓▓▒▒▓██▒▒██▒██▓▒▒▓█" << endl;
	cout << "………………….█▓▓▒▒▓▀▀███▀▀▒▒▓▓█" << endl;
	cout << "……………………▀█▓▓▓▓▒▒▒▒▓▓▓▓█▀" << endl;
	cout << "………………………..▀▀██▓▓▓▓██▀" << endl;
	cout << endl;
	cout << endl;
	cout << "You've been spooked by the spookedly skeletor! Please input a three digit number in order to save your pathetic life!" << endl; // Message displayed to spook the user
	cout << endl;
	cin >> number;
	cout << endl;
		int A = number / 100; // Shows the number in the hundreds place
		int B = (number % 100) / 10; // Shows the number in the tens place
		int C = (number % 100) % 10; //Shows the number in the ones place


		if ((A > B) && (B > C)) {
			cout << number << " is descending" << endl; // Message displayed if the numbers are descending
			cout << endl;
		}

		else if ((A < B) && (B < C)) {
			cout << number << " is ascending" << endl; // Message displayed if the numbers are ascending
			cout << endl;
		}
		else {
			cout << number << " is neither" << endl; //Message displayed if neither ascending or descending
			cout << endl;
		}
	}
	pause(); // Pause to see the displayed text
}
