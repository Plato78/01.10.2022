#include <iostream>
using namespace std;
int main() {
	//If7.Даны два числа.Вывести порядковый номер меньшего из них.
	/*int a, b;
	cin >> a >> b;
	if (a < b) {
		cout << 1 << endl;
	}
	else if (b < a) {
		cout << 2 << endl;
	}
	else if (a == b) {
		cout << " " << endl;
	}*/
	//If8◦.Даны два числа.Вывести вначале большее, а затем меньшее из них.
	//int a , b;
	//cin >> a >> b;
	//if (a > b) {
	//	cout << a << " " << b << endl;
	//}
	//else if (b > a) {
	//	cout << b << " " << a << endl;
	//}
	//else if (a == b) {
	//	cout << "=" << endl;
	//}
	//If9
	/*double a, b, t;
	cin >> a >> b >> t;
	if (a > b) {
		 double t = a;
		a = b;
		b = t;
	}
	cout << a << " " << b << endl;*/
	/*f10.Даны две переменные целого типа : A и B.Если их значения не равны,
		то присвоить каждой переменной сумму этих значений, а если равны,
		то присвоить переменным нулевые значения.Вывести новые значения
		переменных A и B.*/
	//int a, b;
	//cin >> a >> b;
	//if (a != b) {
	//	a = a + b;
	//	b = a;
	//	//a = b = a + b;
	//}
	//else {
	//	a = b = 0;
	//}
	//cout << a << " " << b << endl;
	//If12◦.Даны три числа.Найти наименьшее из них.
	/*int a, b, c;
	cin a >> b >> c;
	if (a < b && a < c) {
		cout << a << endl;
	}
	if (b < a && b < c) {
		cout << b << endl;
	}
	if (c < a && c < b) {
		cout << c << endl;
	}*/
	/*If24.Для данного вещественного x найти значение следующей функции f,
		принимающей вещественные значения :
	f(x) = 2·sin(x), если x > 0,6 − x, если x ≤ 0.*/
# include <cmath>
	/*double x, f;
	cin >> x;
	if (x > 0) {
		f = 2 * sin(x);
		cout << f << endl;
	}
	else if (x <= 0) {
		f = 6 - x;
		cout << f << endl;
	}*/
	//If25.Для данного целого x найти значение следующей функции f, принимающей значения целого типа :
	//f(x) = 2·x, если x < −2 или x > 2,
	//	−3·x, в противном случае.
	/*int x, f;
	cin >> x;
	if (x < -2 || x > 2) {
		f = 2 * x;
		cout << f << endl;
	}
	else {
		f = -3 * x;
		cout << f << endl;
	}*/
	//If26◦
	double x, f;
	cin >> x;
	if (-x) {
		f = x * x;
		cout << f << endl;
	}
	else if (0 < x && x < 2) {
		f = x * x;
		cout << f << endl;
	}
	else if (x >= 2) {
		f = 4;
		cout << f << endl;
	}
}