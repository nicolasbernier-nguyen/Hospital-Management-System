#include <iostream>
#include <iomanip>
#include "Inpatient.h"
#include "Person.h"
#include "Doctor.h"
#include "Date.h"
using namespace std;

Inpatient::Inpatient() {
	id++;
	admissionDate = new Date;
	dischargeDate = new Date;
	assignedDoctor = new Doctor;
	dailyCharge = 80.20;
	fee = 0;
}

Inpatient::~Inpatient() {
	delete admissionDate;
	delete dischargeDate;
	delete assignedDoctor;
}

int Inpatient::id = 0;

void Inpatient::setAdmission(int m, int d, int y) {
	admissionDate->setDate(m, d, y);
}

void Inpatient::setDischarge(int m, int d, int y) {
	dischargeDate->setDate(m, d, y);
}

void Inpatient::calculateCharge(int m1, int d1, int y1, int m2, int d2, int y2) {
	fee = (((y2 * 365 + m2 * 30 + d2) - (y1 * 365 + m1 * 30 + d1)) * dailyCharge);
}

void Inpatient::setDoctor(Doctor* d) {
	assignedDoctor = d;
}

void Inpatient::setBedNumber(int n) {
	bedNumber = n;
}

int Inpatient::getID() const { return id; }

void Inpatient::print() const {
	cout << "Patient name and id: " << name << " (" << setfill('0') << setw(3) << id << ")" << endl;
	cout << "Assigned doctor: Dr. " << assignedDoctor->getName() << endl;
	cout << "Assigned Bed: Bed #" << bedNumber << endl;
	cout << "Date admitted: ";
	admissionDate->printDate();
	cout << endl << "Date discharged: ";
	dischargeDate->printDate();
	cout << endl << "Hospital Fees: $" << fee << endl << endl;
}
