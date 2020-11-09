#include <iostream>
#include "Bed.h"
#include "Inpatient.h"

Bed::Bed() {
	bedNumber++;
	Occupant = nullptr;
}

Bed::~Bed() {
	delete Occupant;
}

int Bed::bedNumber = 0;

int Bed::getBedNumber() const { return bedNumber; }

void Bed::setOccupant(Inpatient* p) {
	Occupant = p;
}

bool Bed::isBedOccupied() {
	if (Occupant != nullptr)
		return true;
	else
		return false;
}

void Bed::print() const {
	if (Occupant != nullptr)
		cout << "Bed #" << bedNumber << " is occupied." << endl;
	else
		cout << "Bed #" << bedNumber << " is vacant." << endl;
}
