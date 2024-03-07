#include "Lamp.h"

Lamp::Lamp() {
	turnedOn = false;
}

void Lamp::Description() const {
	if (turnedOn == true) {
		cout << "The room contains a small desk lamp. It sits in the corner of the room on a small table. The light is currently off." << endl;
	}
	else {
		cout << "The room contains a small desk lamp. It sits in the corner of the room on a small table. The light is currently on, and it illuminates the room." << endl;
	}
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