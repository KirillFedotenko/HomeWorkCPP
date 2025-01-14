#include <iostream>
#include <string>
#pragma once
using namespace std;

class BirthDate
{
private:
	int dateDay;
	int dateMonth;
	int dateYear;
public:
	BirthDate();
	BirthDate(int, int, int);
	int getDay();
	int getMonth();
	int getYear();
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	~BirthDate();
};