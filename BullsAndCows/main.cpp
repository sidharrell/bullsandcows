#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuess();
void PlayGame();

int main() {

	PrintIntro();
	PlayGame();

	return 0;
}

void PlayGame() {
	for (int count = 1; count <= 5; count++) {
		cout << "Your guess was: " << GetGuess() << endl;
		cout << endl;
	}
}

string GetGuess() {
	// get a guess from the player
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	return Guess;
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