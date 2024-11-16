#include <iostream>
#include <string>
using namespace std;


//Я ТЕПРЕТЬ НЕ МОГУ ЭТИ СТРУКТУРЫ И ЮНИОНЫ И ВООБЩЕ ОНИ ГАВНО.
//Спасибо за внимание


//struct Car {
//	string color;
//	string model;
//	int number;
//	void fillCar() {
//		cout << "цвет машины: ";
//		cin >> color;
//		cout << "марка машины: ";
//		cin >> model;
//		do{
//			cout << "номер машины ";
//			cin >> number;
//		} while ((number / 10000) < 1 || (number / 10000) >= 10);
//	}
//	void printCar() {
//		cout << "цвет машины: " << color << endl;
//		cout << "марка машины: " << model << endl;
//		cout << "цвет машины: " << number << endl;
//	}
//
//	void changeCar() {
//		int a;
//		cout << "что хотите изменить(1 - цвет, 2 - марку, 3 - номер)";
//		cin >> a;
//		switch (a) {
//		case 1:
//			cout << "новый цвет: ";
//			cin >> color;
//			break;
//		case 2:
//			cout << "новая марка: ";
//			cin >> model;
//			break;
//		case 3:
//			do {
//				cout << "новый номер: ";
//				cin >> number;
//			} while ((number / 10000) < 1 || (number / 10000) >= 10);
//			break;
//		default:
//			changeCar();
//		}
//	}
//
//	void fillCars(Car cars[3]) {
//		for (int i = 0; i < 3; i++) {
//			cout << "выберите машину " << i + 1 << " данные: " << endl;
//			cars[i].fillCar();
//			cout << endl;
//		}
//	}
//
//	void printCars(Car cars[3]) {
//		for (int i = 0; i < 3; i++) {
//			cout << "машина " << i + 1 << " данные: " << endl;
//			cars[i].printCar();
//			cout << endl;
//		}
//	}
//
//	void printCarIndex(Car cars[3], int index) {
//		cout << "машина " << index + 1 << " данные:" << endl;
//		cars[index].printCar();
//	}
//};

//int main()
//{
//	Car cars[3];
//	cars->fillCars(cars);
//	cars->printCars(cars);
//	cars[0].changeCar();
//	cars->printCars(cars);
//	cars->printCarIndex(cars, 2);
//
//}

struct Creature {
	float speed;
	int type;
	string color;
	float birdSpeed;
	bool parnokop;
	int IQ;
	void fillCreature() {
		cout << "введите скорость: ";
		cin >> speed;
		cout << "выберите(1 - птица, 2 - млекопитающие, 3 - человек): ";
		cin >> type;
		cout << "enter color: ";
		cin >> color;
		switch (type) {
		case 1:
			cout << "cкорость мухи";
			cin >> birdSpeed;
			break;
		case 2:
			cout << "введите парнокпытноеот 0ля до 1ого: ";
			cin >> parnokop;
			break;
		case 3:
			cout << ": ";
			cin >> IQ;
			break;
		}
	}

	void printCreature() {
		cout << "скорость: " << speed << endl;
		cout << "вид: ";
		switch (type) {
		case 1:
			cout << "птица" << endl;
			cout << "скорость птицы: " << birdSpeed;
			break;
		case 2:
			cout << "животное" << endl;
			cout << "парнокопытное: ";
			if (parnokop == 0) {
				cout << "no";
			}
			else {
				cout << "yes";
			}
			break;
		case 3:
			cout << "человек" << endl;
			cout << "его IQ: " << IQ;
			break;
		}
		cout << endl << "цвет: " << color << endl;
	}

	void changeCreature() {
		int a;
		cout << "что бы вы хотели поменять(1 - скорость, 2 - цвет, 3 - вид, 4 - особенность): ";
		cin >> a;
		switch (a)
		{
		case 1:
			cout << "новая скорость: ";
			cin >> speed;
		case 2:
			cout << "новый цвет: ";
			cin >> color;
		case 3:
			cout << "выберите вид(1 - птица, 2 - животное, 3 - человек): ";
			cin >> type;
			switch (type) {
			case 1:
				cout << "новая скорость полета: ";
				cin >> birdSpeed;
				break;
			case 2:
				cout << "парнокопытное или нет(0 or 1) : ";
				cin >> parnokop;
				break;
			case 3:
				cout << "новое IQ: ";
				cin >> IQ;
				break;
			}
		case 4:
			switch (type) {
			case 1:
				cout << "новая скорость полета: ";
				cin >> birdSpeed;
				break;
			case 2:
				cout << "парнокопытное или нет(0 or 1) ";
				cin >> parnokop;
				break;
			case 3:
				cout << "новое IQ: ";
				cin >> IQ;
				break;
			}
		default:
			changeCreature();
		}
	}

	void fillCreatures(Creature creatures[3]) {
		for (int i = 0; i < 3; i++) {
			cout << "enter creature " << i + 1 << " info:" << endl;
			creatures[i].fillCreature();
			cout << endl;
		}
	}

	void printCreatures(Creature creatures[3]) {
		for (int i = 0; i < 3; i++) {
			cout << "creature " << i + 1 << " info:" << endl;
			creatures[i].printCreature();
			cout << endl;
		}
	}

	void searchCreature(Creature creatures[3], int index) {
		cout << "creature " << index + 1 << " info:" << endl;
		creatures[index].printCreature();
	}
};
int main() {
	Creature creatures[3];
	creatures->fillCreatures(creatures);
	creatures->printCreatures(creatures);
	creatures[0].changeCreature();
	creatures->printCreatures(creatures);
	creatures->searchCreature(creatures, 2);
}