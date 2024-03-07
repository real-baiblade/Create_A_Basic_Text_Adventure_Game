#include "Cat.h"

Cat::Cat() {
	purring = false;
}

void Cat::Description() const {
	cout << "Walking around the room is a medium sized tabby coloured cat. It is circling the room around you." << endl;
}

void Cat::Use() {
	if (purring == false) {
		cout << "You started petting the cat. The cat is now purring." << endl;
		purring = true;
	}
	purring = false;
}