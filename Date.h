#ifndef Date_h
#define Date_h

class Date
{
private:
	int month;
	int day;
	int year;
public:
	Date();
	~Date();
	void setDate(int, int, int);
	void printDate() const;
};

#endif /* Date_h */