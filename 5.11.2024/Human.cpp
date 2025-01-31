#include "Human.h"

Human::Human()
{
	this->count++;
}

Human::Human(int id, string name, string surname, string fatherName, BirthDate date)
{
	this->id = id;
	this->name = name;
	this->surname = surname;
	this->fatherName = fatherName;
	this->date = date;
	++this->count;
}

Human::Human(Human& human)
{
	this->id = human.id;
	this->name = human.name;
	this->surname = human.surname;
	this->fatherName = human.fatherName;
	this->date = human.date;
	this->count++;
}

int Human::getId()
{
	return this->id;
}

string Human::getName()
{
	return this->name;
}

string Human::getSurname()
{
	return this->surname;
}

string Human::getFatherName()
{
	return this->fatherName;
}

BirthDate Human::getDate()
{
	return this->date;
}

void Human::setId(int)
{
	this->id = id;
}

void Human::setName(string)
{
	this->name = name;
}

void Human::setSurname(string)
{
	this->surname = surname;
}

void Human::setFatherName(string)
{
	this->fatherName = fatherName;
}

void Human::setDate(BirthDate)
{
	this->date = date;
}

void Human::countHumans()
{
	cout << "Humans: " << this->count << endl;
}

void Human::printHuman()
{
	cout << "Student " << id << ":" << endl;
	cout << "FIO: " << this->surname << " " << this->name << " " << this->fatherName << endl;
	cout << "Birthday date: " << this->date.getDay() << "." << this->date.getMonth() << "." << this->date.getYear() << endl;
}

Human::~Human()
{
	this->count--;
}
