#include "iostream"
using namespace std;

int main(){
    int numero;
    cout<<"Ingrese un numero: ";
    cin>>numero;

    while (numero != 0) {
        cout << "Numero ingresado: " << numero << endl;

        cout << "Ingrese otro numero (0 para terminar): ";
        cin >> numero;
    }

    cout << "El programa ha terminado." << endl;

    return 0;
}
//8.	Crea un programa que pida al usuario ingresar números hasta que el número ingresado sea igual a 0.