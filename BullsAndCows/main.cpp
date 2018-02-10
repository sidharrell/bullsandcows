#include <iostream>
#include <string>

using namespace std;

void PrintIntro();

int main() {

	PrintIntro();

	// get a guess from the player
	cout << "Enter your guess: ";
	string Guess = "";
	getline (cin, Guess);

	cout << "Your guess was: " << Guess << endl;

	// repeat the guess back to them
	return 0;
}

void PrintIntro() {
	constexpr int WORD_LENGTH = 5;

	// introduce the game
	cout << "Welcome to Bulls and Cows, a fun word game.\n";
	cout << "Can you guess the " << WORD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}