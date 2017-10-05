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
	cout << "You've been spooked by the spookedly skeletor! Please input a three digit number in order to save your pathetic life!" << endl;
	cout << endl;
	cin >> number;
	cout << endl;
	int A = number / 100;
	int B = (number % 100) / 10;
	int C = (number % 100) % 10;


	if ((A > B) && (B > C)) {
		cout << "Descending to Hell!" << endl;
		cout << endl;
}
	
	else if ((A < B) && (B < C)) {
		cout << "Ascending to Heaven!" << endl;
		cout << endl;
	}
	else {
		cout << "No judgement" << endl;
		cout << endl;
	}
	pause(); // pauses to see the displayed text
}  