#include <iostream>
#include <string>
#include "Home.h"

using namespace std;

int main() {

	Home* home = Home::Builder("Ankara", "Cankaya")
		.setRoomCount(3)
		.setBathroomCount(2)
		.setToiletCount(1)
		.setIsParking(true)
		.setIsDublex(false)
		.build();

	cout << home->toString() << endl;

	delete home;

}