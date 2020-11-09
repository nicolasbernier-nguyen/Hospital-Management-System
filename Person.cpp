#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

Person::Person() {
	name = "";
}

Person::~Person() {};

void Person::setName(string n) {
	name = n;
}

string Person::getName() { return name; }
