#pragma once
#include <iostream> 

using namespace std;

class Time
{
private:
	int hours;
	int minutes; 
	int seconds; 
public:
	Time();
	Time(int, int, int);
	
	void SetHours(int h) { this->hours = h; };
	void SetMinutes(int m) { this->minutes = m; };
	void SetSeconds(int s) { this->seconds = s; };

	int GetHours() const { return hours; };
	int GetMinutes() const { return minutes; };
	int GetSeconds() const { return seconds; };
	
	void DisplayTime(Time t1); 
};

