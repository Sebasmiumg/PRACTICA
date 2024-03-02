#include <iostream>
using namespace std;

int main() {
    int cantidad, numero, suma = 0, contador = 0;

    cout << "Ingrese la cantidad de numeros a ingresar: ";
    cin >> cantidad;

    while (contador < cantidad) {
        cout << "Ingrese un numero: ";
        cin >> numero;
        suma += numero;
        contador++;
    }

    double media = static_cast<double>(suma) / cantidad;
    cout << "La media de los numeros ingresados es: " << media << endl;

    return 0;
}


//7.	Haz un programa que calcule la media de una serie de números ingresados por el usuario.