#include "FBullCowGame.h"

FBullCowGame::FBullCowGame() {
	Reset();
	return;
}

void FBullCowGame::Reset() {
	constexpr int MAX_TRIES = 8;
	MyMaxTries = MAX_TRIES;

	MyCurrentTry = 1;

	return;
}

int FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }



