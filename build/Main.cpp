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
		Builder(string city, string district) {

			if (city == "" || district == "")
				throw invalid_argument("city or district cannot be null");

			home = new Home();
			home->city = city;
			home->district = district;

		}

		Builder& setRoomCount(int v) {
			home->roomCount = v;
			return *this;
		}

		Builder& setBathroomCount(int v) {
			home->bathroomCount = v;
			return *this;
		}

		Builder& setToiletCount(int v) {
			home->toiletCount = v;
			return *this;
		}

		Builder& setIsParking(bool v) {
			home->isParking = v;
			return *this;
		}

		Builder& setIsDublex(bool v) {
			home->isDublex = v;
			return *this;
		}

		Home* build() {
			return home;
		}
	};

	string toString() const {
		string s = "City: " + city;
		s += "\nDistrict: " + district;
		s += "\nRoomCount: " + to_string(roomCount);
		s += "\nBathroomCount: " + to_string(bathroomCount);
		s += "\nToiletCount: " + to_string(toiletCount);
		s += "\nIsParking: " + string(isParking ? "Yes" : "No");
		s += "\nIsDublex: " + string(isDublex ? "Yes" : "No");
		return s;
	}
};

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