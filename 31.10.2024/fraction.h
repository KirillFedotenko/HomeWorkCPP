#include <iostream>
#pragma once
using namespace std;
class fraction
{
private:
	int numerator;
	int detomenator;
public:
	fraction(){}
	void inputNum(int num) {
		this->numerator = num;
	}
	void imputDet(int num) {
		this->detomenator = num;
	}
	void showArr() {
		cout << numerator << "/" << detomenator << endl;
	}

};

