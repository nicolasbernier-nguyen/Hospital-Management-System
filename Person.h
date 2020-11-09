#ifndef Person_h
#define Person_h
#include <string>
using namespace std;

class Person
{
protected:
	string name;
public:
	Person();
	virtual ~Person();
	void setName(string);
	string getName();
	virtual int getID() const = 0;
	virtual void print() const = 0;
};

#endif /* Person_h */