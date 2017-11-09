#include <iostream>
#include <cmath>
using namespace std;

int main () {
	double a, b, c, resultado1, resultado2, resultado1dividir, resultado2dividir;
	cout << "Introduzca tres números separados por espacios: ";
	cin >> a;
	cin >> b;
	cin >> c;
	resultado1 = -b + sqrt ((b * b) - (4 * a * c));
	resultado1dividir = resultado1  / (2 * a);

	resultado2 = -b - sqrt ((b * b) - (4 * a * c));
	resultado2dividir = resultado2  / (2 * a);

	cout << "El primer resultado es: " << resultado1dividir << endl;
	cout << "El segundo resultado es: " << resultado2dividir << endl;
}






