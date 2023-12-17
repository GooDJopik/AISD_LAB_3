#include <iostream>
#include <string>
#include <vector>
class Telephone {
private:
	std::string _brand;
	int _year_release;
public:
	Telephone() : _brand(""), _year_release(0) { }
	Telephone(std::string brand, int year_release) : _brand(brand), _year_release(year_release) { }
	Telephone(const Telephone& other) {
		_brand = other._brand;
		_year_release = other._year_release;
	}
	Telephone& operator=(const Telephone& other) {
		_brand = other._brand;
		_year_release = other._year_release;
		return *this;
	}

	std::string get_brand() const {
		return _brand;
	}
	int get_year_release() const {
		return _year_release;
	}


	bool operator==(const Telephone& other) const {
		return ((_brand == other._brand) && (_year_release == other._year_release));
	}
	bool operator<(const Telephone& other) const {
		return ((_brand < other._brand) || ((_brand == other._brand) && (_year_release < other._year_release)));
	}
	bool operator>(const Telephone& other) const {
		return ((_brand > other._brand) || ((_brand == other._brand) && (_year_release > other._year_release)));
	}
	bool operator<=(const Telephone& other) const {
		return ((_brand <= other._brand) || ((_brand == other._brand) && (_year_release <= other._year_release)));
	}
	bool operator>=(const Telephone& other) const {
		return ((_brand >= other._brand) || ((_brand == other._brand) && (_year_release >= other._year_release)));
	}


};

std::ostream& operator<<(std::ostream& os, const Telephone& telephone) {
	os << telephone.get_brand() << ", " << telephone.get_year_release();
	return os;
}

std::ostream& operator<<(std::ostream& os, std::vector<Telephone>& list) {
	for (const Telephone& telephone : list) {
		os << telephone << std::endl;
	}
	os << std::endl;
	return os;
}