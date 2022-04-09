#include "Time.h"


Time::Time() {
	SetHours(0);
	SetMinutes(0);
	SetSeconds(0);
};

Time::Time(int h, int m, int s)
{
	SetHours(h);
	SetMinutes(m);
	SetSeconds(s);
};

void Time::DisplayTime(Time t1)
{
	cout << "hours: " << t1.GetHours() << " minutes: " << t1.GetMinutes() << " seconds: " << t1.GetSeconds() << endl;
}