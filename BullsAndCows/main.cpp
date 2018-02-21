#include <iostream>
#include <string>
#include "FBullCowGame.h"

void PrintIntro();
std::string GetGuess();
void PlayGame();
bool AskToPlayAgain();

int main() {
	PrintIntro();

	do {
		PlayGame();
	} while (AskToPlayAgain());
	
	return 0;
}

void PlayGame() {
	FBullCowGame BCGame;

	std::cout << "Your guess was: " << GetGuess() << std::endl;

	// TODO summarize game
}

bool AskToPlayAgain() {
	std::cout << "Do you want to play again? (y/n): ";
	std::string Response = "";
	std::getline(std::cin, Response);

	return (Response[0] == 'y') || (Response[0] == 'Y');
}

std::string GetGuess() {
	// get a guess from the player
	std::cout << "Enter your guess: ";
	std::string Guess = "";
	std::getline(std::cin, Guess);
	return Guess;
}

void PrintIntro() {
	constexpr int WORD_LENGTH = 5;

	// introduce the game
	std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
	std::cout << "Can you guess the " << WORD_LENGTH;
	std::cout << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;
	return;
}