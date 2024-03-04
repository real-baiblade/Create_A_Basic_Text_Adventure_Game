#include "Player.h"
#include <iostream>
using namespace std;

Player::Player() {

}

Player::~Player() {

}

bool Player::FindSpell(String spell) {
	int start = 0;
	int end = 9;
	while (start <= end) {
		int middle = (start + end) / 2;
		if (spell.operator<(spells[middle])) {
			end = middle - 1;
		}
		else if (spell.operator>(spells[middle])) {
			start = middle + 1;
		}
		else {
			cout << "You know this spell" << endl;
			return true;
		}
	}
	cout << "You do not know this spell" << endl;
	return false;
}