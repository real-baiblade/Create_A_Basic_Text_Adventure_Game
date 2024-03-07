#include "Lamp.h"

Lamp::Lamp() {
	turnedOn = false;
}

void Lamp::Description() const {

}

void Lamp::Use() {
	if (turnedOn == true) {
		turnedOn = false;
		cout << "You turned the lamp off." << endl;
	}
	else {
		turnedOn = true;
		cout << "You turned the lamp on." << endl;
	}
}