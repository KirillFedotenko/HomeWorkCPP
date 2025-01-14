#pragma once
#include <iostream>
#include <string>
#include "BirthDate.h"
using namespace std;

class Human
{
private:
	
	string name;
	string surname;
	string fatherName;
	BirthDate date;
	int id;
	int count = 0;
public:
	Human();
	Human(Human&);
	Human(int, string, string, string, BirthDate);
	void setName(string);
	void setSurname(string);
	void setFatherName(string);
	void setDate(BirthDate);
	BirthDate getDate();
	string getName();
	string getSurname();
	string getFatherName();
	void setId(int);
	int getId();
	void countHumans();
	void printHuman();
	~Human();
};



