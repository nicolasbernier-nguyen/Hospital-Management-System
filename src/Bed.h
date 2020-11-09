#ifndef Bed_h
#define Bed_h
#include "Inpatient.h"

class Bed
{
private:
	static int bedNumber;
	Inpatient* Occupant;
public:
	Bed();
	~Bed();
	int getBedNumber() const;
	void setOccupant(Inpatient*);
	bool isBedOccupied();
	void print() const;
};

#endif /* Bed_h */