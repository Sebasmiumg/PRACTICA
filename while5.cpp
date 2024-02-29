#include "iostream"
using namespace std;

int main(){

    int sum = 0;
    int num;

    while(sum <= 100) {
        cout << "Ingresa un numero: ";
        cin >> num;
        sum += num;
    }

    cout << "La suma de los numeros ingresados es mayor a 100.\n";

    return 0;
}

//5.	Escribe un programa que solicite al usuario ingresar números hasta que la suma de los números ingresados sea mayor a 100.

