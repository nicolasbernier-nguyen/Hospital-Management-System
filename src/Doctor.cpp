#include <iostream>
#include <string>
#include <iomanip>
#include "Doctor.h"
#include "Person.h"

using namespace std;

Doctor::Doctor() {
	license = "";
	specialty = "";
	patientList = new Person*[10]; //A given doctor can have up to 10 patients simultaniously
	indexP = 0;
}

Doctor::~Doctor() {
	delete patientList;
}

void Doctor::setLicense(string l) {
	license = l;
}

void Doctor::setSpeciality(string s) {
	specialty = s;
}

void Doctor::addPatient(Person* p) {
	if (indexP >= 10) {
		cout << "Doctor is unavailable" << endl;
	}
	else {
		patientList[indexP++] = p;
	}
}

string Doctor::getSpecialty() { return specialty; }

string Doctor::getLicense() { return license; }

int Doctor::getID() const { return 0; }

void Doctor::print() const {
	cout << endl <<"Dr. " << name << ", " << specialty << "	License #: " << license << endl;
	cout << "List of treated patients:" << endl;
	for (int i(0); i < 10; i++) {
		cout << patientList[i]->getName() << "(" << setfill('0') << setw(3) << patientList[i]->getID() << ")" << endl;
		break;
	}
	cout << endl;
}
