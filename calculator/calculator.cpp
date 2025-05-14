#include <iostream>
#include <string>
using namespace std;

void Calculator() {
	setlocale(LC_ALL, "RU");

	int a;
	int b;
	int func;

	cout << "Вас приветствует калькулятор" << endl;
	cout << "Пожалуйста выберите функцию" << endl;
	cout << "1.Сложение \n 2.Вычитание \n 3.Умножение \n 4.Деление: ";
	cin >> func;
	if (func == 1) {
		cout << "Сложение" << endl;
		cout << "Введите 1-ое число: ";
		cin >> a;
		cout << "Введите 2-ое число: ";
		cin >> b;
		int c = (a + b);
		cout << "Ваш результат: " << c;
	}
	if (func == 2) {
		cout << "Вычитание" << endl;
		cout << "Введите 1-ое число: ";
		cin >> a;
		cout << "Введите 2-ое число: ";
		cin >> b;
		int c = (a - b);
		cout << "Ваш результат: " << c;
	}
	if (func == 3) {
		cout << "Умножение" << endl;
		cout << "Введите 1-ое число: ";
		cin >> a;
		cout << "Введите 2-ое число: ";
		cin >> b;
		int c = (a * b);
		cout << "Ваш результат: " << c;
	}
	if (func == 4) {
		cout << "Деление" << endl;
		cout << "Введите 1-ое число: ";
		cin >> a;
		cout << "Введите 2-ое число: ";
		cin >> b;
		int c = (a / b);
		cout << "Ваш результат: " << c;
	}
}
int main() {
	Calculator();
}
