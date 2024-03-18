#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	//задание 1

	//
	//int num1 = 100, num2 = 999, c = 0;
	//while (num1 <= num2) {
	//	if (num1 % 10 == num1 / 10 % 10) c++;
	//	if (num1 % 10 == num1 / 10 % 10 / 10) c++;
	//	if (num1 / 10 % 10 / 10 == num1 / 10 % 10) c++;
	//	num1++;
	//}
	//cout << c;
	//

	// //задание 1

	//
	//int num1 = 100, num2 = 999, c = 0;
	//while (num1 <= num2) {
	//	if (num1 % 10 != num1 / 10 % 10 && num1 % 10 != num1 / 10 % 10 / 10 && num1 / 10 % 10 / 10 != num1 / 10 % 10) c++;
	//	num1++;
	//}
	//cout << c;
	//

	// //задание 3

	//
	//int num, b = 0, n = 1;
	//cout << "введите значение: ";
	//cin >> num;
	//while (num != 0) {
	//	int a = (num % 10);
	//	if ((a == 3) || (a== 6)) {

	//	}
	//	else {
	//		b += a * n;
	//		n = n * 10;
	//	}
	//	num = num / 10;
	//}
	//cout << b << endl;
	//

	// //задание 4

	//
	//int num;
	//cout << "введите число: ";
	//cin >> num;
	//for (int i = 1; i < num; i++) {
	//	if (num % (i * i) == 0)
	//		cout << i << "; ";
	//}
	//cout << endl;
	//for (int i = 1; i < num; i++) {
	//	if (num % (i * i * i) == 0)
	//		cout << i << "; ";
	//}
	//

	// //задание 5

	//
	//int num, sum = 0;
	//cout << "введите число: ";
	//cin >> num;
	//int b = num;
	//while (num > 0) {
	//	sum += (num % 10);
	//	num = num / 10;
	//}
	//if ((sum * sum * sum) == (b * b))
	//	cout << "равен";
	//else cout << "не равен";
	//

	// //задание 6

	//
	//int a = 1,num;
	//cout << "введите число: ";
	//cin >> num;
	//while (a <= num) {
	//	if (num % a == 0) cout << a << "; ";
	//	a++;
	//}
	
	//задание последнее

	
	int num1, num2, a = 1;
	cout << "введите первое число: ";
	cin >> num1;
	cout << "введите второе число: ";
	cin >> num2;
	if (num1 < num2) swap(num1, num2);
	while (a <= num2){
		if (num1 % a == 0 && num2 % a == 0) cout << a << "; ";
		a++;
	}
	
}