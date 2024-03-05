#include "Room.h"
#include "String.h"
#include <iostream>
using namespace std;

Room::Room(String description, Item* item) {
	Room::description = description;
	Room::item = item;
}

Room::~Room() {

}

void Room::Description() const {
	cout << description.CStr() << endl;
}
