
#include <iostream>
using namespace std;
int main (){
    cout<<"Hola gente" " todo bien? " << endl << "todo correcto " << endl << " Yo que me alegro ";
    return 0;

     // ejemlo de cout


   cout << " 2 + 2 " //ejermplo de comillas  // ejemplo de operacion matematica  << 2 + 2;

    return 0;


#include <iostream>
using namespace std;
int main (){
    int numero_entero = 70;
    double decimales = 23.78;
    char ejemplo= 'a';
    cout << numero_entero <<endl;
    cout << decimales <<endl;
    cout << ejemplo;

  return 0;



// operadores basicos

#include "iostream"
using namespace std;
int main(){
    int a = 8 , b = 2, suma  ;

    suma= a + b;
    cout << "el resultado es: " << suma;

    return 0;



// operadores de asignacion pt1
 #include "iostream"
 using namespace std;
 int main(){
     int a = 10;
     int resultado_a;
     //incrementar la variable a
     resultado_a= ++ a;
     cout << "ahora la variable es: " << resultado_a;
     return 0;



// operadores de asignacion pt2
#include "iostream"
using namespace std;
int main(){
    int a,b,edad;

    a = 8;
    b = 7;
    edad= a;

    cout << "edad es: " << edad <<endl;
    a+= b, //a= a+b
    cout << "a = " << a;
    return 0;



//DATOS DE ENTRADA Y SALIDA
#include "iostream"
using namespace std;
 int main() {
     int n1, n2, suma;
     cout << "ingrese un numero: ";
     cin >> n1;
     cout << "ingrese otro numero: ";
     cin >> n2;
     suma = n1 + n2;

     cout << "LA SUMA ES: " << suma;
     return 0;


 //EJERCICIO DE AREA DE UN TRIANGULO

#include "iostream"
using namespace std;
int main(){

double base,altura,area;
cout<<"ingrese la base del triangulo";
cin >> base;

cout<< "ingrese la altura del triangulo";
cin>> altura;

area= (base * altura)/2;

cout<<"El area del triangulo es:"<<area;
    return 0;





// Ejercicio de promedio de notas "3 notas"
#include "iostream"
using namespace std;
 int main(){
        int nota1,nota2,nota3;
        double promedio;

        cout<< "Ingrese La Nota 1: ";
        cin>> nota1;

        cout<<"ingrese la nota 2: ";
        cin>> nota2;

        cout<<"ingrese la nota 3: ";
        cin>> nota3;

        promedio = ( nota1 + nota2 + nota3)/3;

        cout << " El Promedio final " <<promedio;

     return 0;

// ejercicio de volumen de una esfera



#include "iostream"
#include "cmath"
using namespace std;
int main(){

    int radio,volumen;
    const  float PI = 3.14159;

    cout<<"intrese el radio: ";
    cin>> radio;

    volumen = (4 * PI * pow(radio,3))/3;
 cout<<"El volumen es: " <<volumen;

    return 0;



