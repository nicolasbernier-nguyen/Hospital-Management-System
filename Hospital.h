#ifndef Hospital_h
#define Hospital_h
#include "Inpatient.h"
#include "Outpatient.h"
#include "Doctor.h"
#include "Bed.h"

class Hospital
{
private:
	Doctor* doctorList[100];
	Inpatient* inpatientList[500];
	Bed* bedList[500];
	int indexD;
	int indexP;
	int indexB;
public:
	Hospital();
	~Hospital();
	void addDoctor(Doctor*);
	void addInpatient(Inpatient*);
	void addBed(Bed*);
	void searchDoctor(string);
	void searchInpatient(int);
	void searchBed(int);
	void print() const;
};

#endif /* Hospital_h */