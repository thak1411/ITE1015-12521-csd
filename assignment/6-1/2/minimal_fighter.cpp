#include "minimal_fighter.h"

MinimalFighter::MinimalFighter() {
	this->mHp = this->mPower = 0;
	this->mStatus = Invalid;
}
MinimalFighter::MinimalFighter(int mHp, int mPower) {
	this->mHp = mHp;
	this->mPower = mPower;
	if (mHp <= 0) this->mStatus = Dead;
	else this->mStatus = Alive;
}
int MinimalFighter::hp() {
	return this->mHp;
}
int MinimalFighter::power() {
	return this->mPower;
}
EFighterStatus MinimalFighter::status() {
	return this->mStatus;
}
void MinimalFighter::setHp(int mHp) {
	this->mHp = mHp;
	if (mHp <= 0) this->mStatus = Dead;
}
void MinimalFighter::hit(MinimalFighter* enemy) {
	this->setHp(this->mHp - enemy->power());
	enemy->setHp(enemy->hp() - this->mPower);
}
void MinimalFighter::attack(MinimalFighter* enemy) {
	enemy->setHp(enemy->hp() - this->mPower);
	this->mPower = 0;
}
void MinimalFighter::fight(MinimalFighter* enemy) {
	for (; this->mStatus == Alive && enemy->status() == Alive; ) {
		this->hit(enemy);
	}
}
