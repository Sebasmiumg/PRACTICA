#include <iostream>
using namespace std;
int main() {
    char letra;

    cout<<"Ingrese una letra minuscula: ";
    cin>>letra;

    if (letra == 'a' || letra=='e' || letra=='i' || letra=='o' || letra=='u' ){
        cout<<"la letra ingresada es una vocal"<<endl;
    }else{
        cout<<"la letra que ingreso es una consonante"<<endl;
    }


    return 0;
}
