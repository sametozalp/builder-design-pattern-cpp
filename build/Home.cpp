#include "Home.h"

Home::Builder::Builder(string city, string district) {

	if (city == "" || district == "")
		throw invalid_argument("city or district cannot be null");

	home = new Home();
	home->city = city;
	home->district = district;
}

Home::Builder& Home::Builder::setRoomCount(int v) {
	home->roomCount = v;
	return *this;
}

Home::Builder& Home::Builder::setBathroomCount(int v) {
	home->bathroomCount = v;
	return *this;
}

Home::Builder& Home::Builder::setToiletCount(int v) {
	home->toiletCount = v;
	return *this;
}

Home::Builder& Home::Builder::setIsParking(bool v) {
	home->isParking = v;
	return *this;
}

Home::Builder& Home::Builder::setIsDublex(bool v) {
	home->isDublex = v;
	return *this;
}

Home* Home::Builder::build() {
	return home;
}

string Home::toString() const {
	string s = "City: " + city;
	s += "\nDistrict: " + district;
	s += "\nRoomCount: " + to_string(roomCount);
	s += "\nBathroomCount: " + to_string(bathroomCount);
	s += "\nToiletCount: " + to_string(toiletCount);
	s += "\nIsParking: " + string(isParking ? "Yes" : "No");
	s += "\nIsDublex: " + string(isDublex ? "Yes" : "No");
	return s;
}