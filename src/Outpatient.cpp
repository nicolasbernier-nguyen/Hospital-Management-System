#include <iostream>
#include "Outpatient.h"
#include "Person.h"
#include "Doctor.h"
#include "Date.h"
#include "Time.h"
using namespace std;

Outpatient::Outpatient() {
	id++;
	appointmentDate = new Date;
	appointmentTime = new Time;
	assignedDoctor = new Doctor;
	hospitalCharge = 100.00;
}

Outpatient::~Outpatient() {
	delete appointmentDate;
	delete appointmentTime;
	delete assignedDoctor;
}

int Outpatient::id = 1000;

void Outpatient::setAppointment(int m, int d, int y, int h, int min) {
	appointmentDate->setDate(m, d, y);
	appointmentTime->setTime(h, min);
}

void Outpatient::setDoctor(Doctor* d) {
	assignedDoctor = d;
}

int Outpatient::getID() const { return id; }

void Outpatient::print() const {
	cout << "Patient name and id: " << name << " (" << id << ")" << endl;
	cout << "Appointment  with Dr. " << assignedDoctor->getName();
	cout << " on ";
	appointmentDate->printDate();
	cout << " at ";
	appointmentTime->printTime();
	cout << endl << "Fees: $" << hospitalCharge << endl << endl;
}
