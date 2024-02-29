#include <iostream>
using namespace std;
int main() {
    int numero;
    cout<<"Por favor, ingrese un numero: ";
    cin>>numero;

    int a = 0, b = 1;
    while(a<=numero){

        cout<<a<<endl;
        int temp = a;
        a= b;
        b= temp +b;
    }


    return 0;
}













//4.	Haz un programa que genere la secuencia de Fibonacci hasta un número ingresado por el usuario.