#pragma once
class FBullCowGame {
public:
	FBullCowGame();
	void Reset();
	int GetMaxTries() const;
	int GetCurrentTry() const;

private:
	int MyCurrentTry;
	int MyMaxTries;
};

