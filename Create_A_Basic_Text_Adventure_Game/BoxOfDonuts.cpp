#include "BoxOfDonuts.h"

BoxOfDonuts::BoxOfDonuts() {
	count = 12;
}

void BoxOfDonuts::Description() const {

}

void BoxOfDonuts::Use() {
	if (count > 0) {
		count -= 1;
		cout << count  << " donuts are left in the box." << endl;
	}
	else {
		cout << "The box of donuts is empty" << endl;
	}
}