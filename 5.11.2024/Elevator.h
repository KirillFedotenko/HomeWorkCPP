#include <iostream>
#include <string>
#pragma once
using namespace std;
class Elevator
{
private:
	int maxFloor;
	int minFloor;
	bool ElevatorPower = false;
	int currentFloor;
public:
	Elevator();
	Elevator(int, int);
	int getMaxFloor();
	int getMinFloor();
	bool getElevatorPower();
	int getCurrentFloor();
	void setMinFloor(int);
	void setMaxFloor(int);
	void ElevatorOn();
	void ElevatorOff();
	void setCurrentFloor(int);
	~Elevator();
};

