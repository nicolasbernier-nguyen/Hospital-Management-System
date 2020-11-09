#include <iostream>
#include "Date.h"
using namespace std;

Date::Date() {
	month = 0;
	day = 0;
	year = 0;
}

Date::~Date(){}

void Date::setDate(int m, int d, int y) {
	month = m;
	day = d;
	year = y;
}

void Date::printDate() const {
	cout << month << "/" << day << "/" << year;
}
