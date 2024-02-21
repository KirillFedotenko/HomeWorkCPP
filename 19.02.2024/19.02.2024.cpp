#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    ////задание 1ое
    //int num;
    //cout << "введите целое шестизначное число:";
    //cin >> num;
    //if (num < 100000 or num > 999999) {
    //    cout << "Ошибка" << endl;
    //}
    //int a = num % 1000000 / 100000;
    //int b = num % 100000 / 10000;
    //int c = num % 10000 / 1000;
    //int d = num % 1000 / 100;
    //int e = num % 100 / 10;
    //int f = num % 10;
    //if (a + b + c == d + e + f) {
    //    cout << "число счатливое";
    //}
    //else
    //    cout << "число не счатливое";

    // задание 2ое

    //int num;
    //cout << "введите четырехзначное число: ";
    //cin >> num;
    //if (num < 1000 or num > 9999) {
    //    cout << "Ошибка" << endl;
    //}
    //int a = num % 10000 / 1000;
    //int b = num % 1000 / 100;
    //int c = num % 100 / 10;
    //int d = num % 10;
    //cout << (b * 1000) + (a * 100) + (d * 10) + c;
//
//    // задание 3ье
//
    //int num1, num2, num3, num4, num5, num6, num7, max;
    //cin >> num1;
    //cin >> num2;
    //cin >> num3;
    //cin >> num4;
    //cin >> num5;
    //cin >> num6;
    //cin >> num7;
    //if (num1 > num2) {
    //    max = num1;
    //}
    //else 
    //    max = num2;
    //if (num3 > max)
    //    max = num3;
    //if (num4 > max)
    //    max = num4;
    //if (num5 > max)
    //    max = num5;
    //if (num6 > max)
    //    max = num6;
    //if (num7 > max)
    //    max = num7;
    //cout << "Большее число = " << max;
//
//    //задание последнее

    int растояние1, растояние2, вес;
    cin >> растояние1;
    cin >> растояние2;
    cin >> вес;
    int топливо;
    if (вес <= 500) {
        топливо = 1;
    }
    else if (вес <= 1000) {
        топливо = 4;
    }
    else if (вес <= 1500) {
        топливо = 7;
    }
    else if (вес <= 2000) {
        топливо = 9;
    }
    else if (вес > 2000) {
        cout << "самолет столько не потянет" << endl;
    }
    int требуется1 = растояние1 * топливо;
    int требуется2 = растояние2 * топливо;

    if (требуется1 > 300 or требуется2 > 300) {
        cout << "пролететь такое растоянеие невозможно" << endl;
    }
    int требуется3 = требуется1 - (300 - требуется2);
    if (требуется3 < 0) {
        cout << "заправка не требуется";
    }
    else
        cout << "нужно дозаправить " << требуется3 << "литров топлива";
}