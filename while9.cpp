//9.	Escribe un programa que imprima los primeros 10 números naturales y su respectivo cuadrado.
#include <iostream>
using namespace std;

int main() {
    int i = 1;

    while (i <= 10) {
        cout << "Numero: " << i << ", Cuadrado: " << i * i << endl;
        i++;
    }

    return 0;
}
