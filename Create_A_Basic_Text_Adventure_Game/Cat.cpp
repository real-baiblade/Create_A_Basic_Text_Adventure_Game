#include "Cat.h"

Cat::Cat() {
	purring = false;
}

void Cat::Description() const {

}

void Cat::Use() {
	if (purring == false) {
		cout << "You started petting the cat. The cat is now purring." << endl;
		purring = true;
	}
	purring = false;
}