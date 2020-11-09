#ifndef Outpatient_h
#define Outpatient_h
#include "Person.h"
#include "Doctor.h"
#include "Date.h"
#include "Time.h"

class Outpatient : public Person {
private:
	static int id;
	double hospitalCharge;
	Date* appointmentDate;
	Time* appointmentTime;
	Doctor* assignedDoctor;
public:
	Outpatient();
	virtual ~Outpatient();
	void setAppointment(int, int, int, int, int);
	void setDoctor(Doctor*);
	virtual int getID() const;
	virtual void print() const;
};

#endif /* Outpatient_h */