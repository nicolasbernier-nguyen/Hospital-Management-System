#include <iostream>
#include <iomanip>
#include "Hospital.h"
#include "Inpatient.h"
#include "Outpatient.h"
#include "Doctor.h"
#include "Bed.h"
using namespace std;

Hospital::Hospital() : doctorList(), inpatientList(), bedList() {
	indexD = 0;
	indexP = 0;
	indexB = 0;
}

Hospital::~Hospital() {
	delete [] doctorList;
	delete [] inpatientList;
	delete [] bedList;
}

void Hospital::addDoctor(Doctor* d) {
	if (indexD >= 100) {
		cout << "No available space for new doctor. " << endl;
	}
	else {
		doctorList[indexD] = d;
		indexD++;
	}
}

void Hospital::addInpatient(Inpatient* p) {
	if (indexP >= 500) {
		cout << "No available beds for new patient." << endl;
	}
	else {
		inpatientList[indexP] = p;
		indexP++;
	}
}

void Hospital::addBed(Bed* b) {
	if (indexB >= 500) {
		cout << "No available beds." << endl;
	}
	else {
		bedList[indexB] = b;
		indexB++;
	}
}

void Hospital::searchDoctor(string l) {
	for (int i(0); i < 100; i++) {
		if (doctorList[i]->getLicense() == l) {
			doctorList[i]->print();
			break;
		}	
	}
}

void Hospital::searchInpatient(int id) {
	for (int i(0); i < 500; i++) {
		if (inpatientList[i]->getID() == id) {
			inpatientList[i]->print();
			break;
		}
	}
}

void Hospital::searchBed(int number) {
	for (int i(0); i < 500; i++) {
		if (bedList[i]->getBedNumber() == number) {
			bedList[i]->print();
			break;
		}
	}
}

void Hospital::print() const {
	cout << "List of hired doctors:" << endl;
	for (int i(0); i < 100; i++) {
		if (doctorList[i] != nullptr) {
			cout << "Dr. " << doctorList[i]->getName() << ", " << doctorList[i]->getSpecialty() << "  (" << doctorList[i]->getLicense() << ")" << endl;
		}
		else {
			break;
		}
	}
	cout << endl;

	cout << "List of inpatients:" << endl;
	for (int i(0); i < 500; i++) {
		if (inpatientList[i] != nullptr) {
			cout << inpatientList[i]->getName() << " (" << setfill('0') << setw(3) << inpatientList[i]->getID() << ")" << endl;
		}
		else {
			break;
		}
	}
	cout << endl;

	cout << "List of beds:" << endl;
	for (int i(0); i < 500; i++) {
		if (bedList[i] != nullptr) {
			cout << "Bed #" << bedList[i]->getBedNumber() << " (Status: ";
			if (bedList[i]->isBedOccupied())
				cout << "Occupied)" << endl;
			else
				cout << "Vacant)" << endl;
		}
		else {
			break;
		}
	}
	cout << endl;
}

