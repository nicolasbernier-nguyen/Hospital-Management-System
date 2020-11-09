#include <iostream>
#include "Time.h"
using namespace std;

Time::Time(){
	hour = 0;
	minute = 0;
}

Time::~Time(){}

void Time::setTime(int h, int m) {
	hour = h;
	minute = m;
}

void Time::printTime() const {
	cout << hour << ":" << minute;
}
