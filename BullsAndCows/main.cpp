#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuess();
void PlayGame();
bool AskToPlayAgain();

int main() {
	PrintIntro();
	PlayGame();
	AskToPlayAgain();
	return 0;
}

void PlayGame() {
	for (int count = 1; count <= 5; count++) {
		cout << "Your guess was: " << GetGuess() << endl;
		cout << endl;
	}
}

bool AskToPlayAgain() {
	cout << "Do you want to play again? ";
	string Response = "";
	getline(cin, Response);

	return (Response[0] == 'y') || (Response[0] == 'Y');
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