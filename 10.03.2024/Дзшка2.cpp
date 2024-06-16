#include <iostream>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "rus");

	// task 1

	/*
	int num1, num2, num3, num4;
	cout << "введите 1ое число: ";
	cin >> num1;
	cout << "введите 2ое число: ";
	cin >> num2;
	cout << "введите 3ье число: ";
	cin >> num3;
	cout << "введите 4ое число: ";
	cin >> num4;
	if (num1 > num2 && num1 > num3 && num1 > num4)
		cout << "Большее число: " << num1;
	if (num2 > num1 && num2 > num3 && num2 > num4)
		cout << "Большее число: " << num2;
	if (num3 > num1 && num3 > num2 && num3 > num4)
		cout << "Большее число: " << num3;
	if (num4 > num2 && num4 > num3 && num4 > num1)
		cout << "Большее число: " << num4;
	*/

	// task 2

	/*
	int a, b, n;
	cout << "минимальный диапозон: ";
	cin >> a;
	cout << "максимальный диапозон: ";
	cin >> b;
	cout << "сколько раз выведется число: ";
	cin >> n;
	if (a < b) swap(a, b);
	for (int i = 0, count = a; i < n; i++) {
		cout << count++ << "; ";
		if (count < b) count = a;
	}
	*/


	// task 3

	/*
	double max;
	cout << "input max: ";
	cin >> max;
	for (double i = 0; i <= max; i += 0.25) {
		cout << i << "; ";
	}
	*/

	// task 4

	/*
	double num = 0, summ = 0, count = 0;
	cout << "Введите число: ";
	do {
		cin >> num;
		summ += num;
		count++;
	} while (num != 0);
	cout << "Срб.ар =  " << summ / (count-1);
	*/

	// task 5

	/*
	string str;
	do {
		cout << "Введите символ: ";
		cin >> str;
		if (str.size() > 1)
			cout << "ERROR";
	} while (str.size() > 1);
	char sym = str[0];
	if (sym > 64 && sym < 91 || sym > 96 && sym < 123)
		cout << "Это англ. символ";
	else cout << "это что то другое";
	*/

	// task 6

	/*
	int lb1, hb1, lb2, hb2;
	cout << "1ый минимальный диапозон: ";
	cin >> lb1;
	cout << "1ый максимальный диапозон: ";
	cin >> hb1;
	cout << "1ый минимальный диапозон: ";
	cout << "2ой : ";
	cin >> lb2;
	cout << "2ой максимальный диапозон: ";
	cin >> hb2;
	if (lb1 > hb1) swap(lb1, hb1);
	if (lb2 > hb2) swap(lb2, hb2);
	if (lb1 > lb2) swap(lb1, lb2);
	if (hb1 > hb2) swap(hb1, hb2);
	for (int i = lb1; i < lb2 && i<=hb1; i++) cout << i << "; ";
	for (int i = lb2; i <= hb2; i++) {
		if (i > hb1)
			cout << i << "; ";
	}
	*/

	// task 7

	
	int a, b, n, count = 0;
	cout << "минимальный диапозон: ";
	cin >> a;
	cout << "максимальный диапозон: ";
	cin >> b;
	cout << "Введите число: ";
	cin >> n;
	if (a > b) swap(a, b);
	while (a <= b) {
		if (a % n == 0) count++;
		a++;
	}
	cout << count;
	
}