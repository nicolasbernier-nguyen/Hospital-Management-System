#ifndef Time_h
#define Time_h

class Time
{
private:
	int hour;
	int minute;
public:
	Time();
	~Time();
	void setTime(int, int);
	void printTime() const;
};

#endif /* Time_h */