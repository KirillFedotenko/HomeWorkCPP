#include "Elevator.h"

Elevator::Elevator()
{
}

Elevator::Elevator(int minFloor, int maxFloor)
{
	this->maxFloor = maxFloor;
	this->minFloor = minFloor;
	this->currentFloor = minFloor;
}

int Elevator::getMaxFloor()
{
	return this->maxFloor;
}

int Elevator::getMinFloor()
{
	return this->minFloor;
}

bool Elevator::getElevatorPower()
{
	return this->ElevatorPower;
}

int Elevator::getCurrentFloor()
{
	return this->currentFloor;
}

void Elevator::setMinFloor(int)
{
	this->minFloor = minFloor;
}

void Elevator::setMaxFloor(int)
{
	this->maxFloor = maxFloor;
}

void Elevator::ElevatorOn()
{
	this->ElevatorPower = true;
}

void Elevator::ElevatorOff()
{
	this->ElevatorPower = false;
}

void Elevator::setCurrentFloor(int)
{
	if (this->ElevatorPower) {
		this->currentFloor = currentFloor;
	}
	else {
		cout << "Elevator doenst work";
	}
}

Elevator::~Elevator()
{
}
