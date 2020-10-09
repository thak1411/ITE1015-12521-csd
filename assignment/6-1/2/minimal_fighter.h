// minimal_fighter.h
// Implement your minimal_fighter.cpp

#ifndef __MINIMAL_FIGHTER_H
#define __MINIMAL_FIGHTER_H

#include <iostream>

enum EFighterStatus {
	Invalid = 0,
	Alive,
	Dead,
};
typedef enum EFighterStatus FighterStatus;

class MinimalFighter {
private:
	int mHp, mPower;
	EFighterStatus mStatus;
public:
	MinimalFighter();
	MinimalFighter(int, int);

	int hp();
	int power();
	EFighterStatus status();
	void setHp(int);
	void hit(MinimalFighter*);
	void attack(MinimalFighter*);
	void fight(MinimalFighter*);
};

#endif
