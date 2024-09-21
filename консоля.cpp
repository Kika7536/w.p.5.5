#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");


	cout << "Задание 5. Числа Фибоначчи." << endl;
	cout << "-----------------------------------" << endl << endl;

	int number, preprelast = 1, prelast = 1, last = 0, i = 0;


	while (true) {
		cout << "Введите номер последовательности: ";
		cin >> number;

		if (number == 1 || number == 2) {
			last = 1;
		
		}
		else if (number < 1) {
			cout << "Ошибка. Номера последовательности начинаются с одного и идут по возрастанию." << endl;
		}
		else {
			while (i + 2 < number ) {

				last = preprelast + prelast;
				if (last < prelast) {
					cout << "Ошибка. Попробуйте ввести число меньше. " << endl;
					preprelast = 1;
					prelast = 1;
					i = 0;
					break;
				}
				preprelast = prelast;
				prelast = last;
				i++;

			}
		}

		if (last < prelast) {
			continue;
		}
			cout << "Данному номеру последовательности соответсвует число: " << last << endl;
			preprelast = 1;
			prelast = 1;
			i = 0;
		
	}
	
}