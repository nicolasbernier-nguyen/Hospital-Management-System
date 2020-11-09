#ifndef Inpatient_h
#define Inpatient_h
#include "Person.h"
#include "Doctor.h"
#include "Date.h"

class Inpatient: public Person
{
private:
	static int id;
	double dailyCharge;
	Date* admissionDate;
	Date* dischargeDate;
	Doctor* assignedDoctor;
	int bedNumber;
	double fee;
public:
	Inpatient();
	virtual~Inpatient();
	void setAdmission(int, int, int);
	void setDischarge(int, int, int);
	void calculateCharge(int, int, int, int, int, int);
	void setDoctor(Doctor*);
	void setBedNumber(int);
	virtual int getID() const;
	virtual void print() const;
};

#endif Inpatient_h /* Inpatient_h */