#pragma once
class FBullCowGame {
public:
	void Reset();
	int GetMaxTries();
	int GetCurrentTry();

private:
	int MyCurrentTry;
	int MyMaxTries;
};

