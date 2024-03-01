#include <iostream>
using namespace std;
int main() {
    int producto = 1;
    int i = 1;

    while (i <= 10) {
        producto *= i;
        i++;
    }

    cout << "El producto de los primeros 10 numeros naturales es: " << producto <<endl;

    return 0;
}

//10.	Desarrolla un programa que calcule el producto de los primeros 10 números naturales, hazlo de forma sencilla y nada compleja y haz esto en c++ con el bucle while