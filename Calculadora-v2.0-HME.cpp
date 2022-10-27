#include <iostream>
using namespace std;
int main () {

	// Reserva de espacio en memoria principal
	double numero1 = 0, numero2 = 0;

	// Bienvenida cordial a mi calculadora
	cout << "Bienvenido a mi cauladora, por favor siga las instrucciones: " << endl;

	// Interacción con el usuario
	cout << "Introduce aquí un número, parguela: ";
	cin >> numero1;
	cout << "Introduce aquí un número, parguelón: ";
	cin >> numero2;

	// Resultado de las diferentes operaciones
	cout << "El tremendo resultado de la suma es: "<<(numero1 + numero2)<< endl;
	cout << "El tremendo resultado de la resta es: "<<(numero1 - numero2)<< endl;
	cout << "El tremendo resultado de la multiplicación es: "<<(numero1 * numero2)<< endl;
	cout << "El tremendo resultado de la division es: "<<(numero1 / numero2)<< endl;
}
