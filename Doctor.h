#ifndef Doctor_h
#define Doctor_h
#include <string>
#include "Person.h"

class Doctor: public Person
{
private:
	string license;
	string specialty;
	Person** patientList;
	int indexP;
public:
	Doctor();
	virtual ~Doctor();
	void setLicense(string);
	void setSpeciality(string);
	void addPatient(Person* p);
	string getSpecialty();
	string getLicense();
	virtual int getID() const;
	virtual void print() const;
};

#endif Doctor_h