#include "iostream"
using namespace std;

int main (){

        int num;
        cout << "Ingresa un numero: ";
        cin >> num;

        int i = 0;
        while(i <= num) {
            if(i % 2 == 0) {
                cout << i << "\n";
            }
            i++;
    }
    return 0;
}

//6.	Desarrolla un programa que pida al usuario ingresar un número y luego imprima todos los números pares hasta ese número.