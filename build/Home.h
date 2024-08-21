#pragma once
#include <iostream>
#include <string>

using namespace std;

class Home {
private:
	string city;
	string district;

	int roomCount = 0;
	int bathroomCount = 0;
	int toiletCount = 0;

	bool isParking = false;
	bool isDublex = false;

	Home() {}


public:
	static class Builder {
	private:
		Home* home;

	public:
		Builder(string city, string district);

		Builder& setRoomCount(int v);

		Builder& setBathroomCount(int v);

		Builder& setToiletCount(int v);
		Builder& setIsParking(bool v);

		Builder& setIsDublex(bool v);

		Home* build();
	};

	string toString() const;
};

