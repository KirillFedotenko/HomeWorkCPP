#include "BirthDate.h"

BirthDate::BirthDate()
{
}

BirthDate::BirthDate(int day, int month , int year)
{
	this->dateDay = day;
	this->dateMonth = month;
	this->dateYear = year;
}

int BirthDate::getDay()
{
	return this->dateDay;
}

int BirthDate::getMonth()
{
	return this->dateMonth;
}

int BirthDate::getYear()
{
	return this->dateYear;
}

void BirthDate::setDay(int)
{
	this->dateDay = day;
}

void BirthDate::setMonth(int)
{
	this->dateMonth = month;
}

void BirthDate::setYear(int)
{
	this->dateYear = year;
}

BirthDate::~BirthDate()
{
}
