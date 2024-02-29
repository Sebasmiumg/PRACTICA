#include <iostream>

int main() {
    int count = 0;
    double num, sum = 0.0;

    std::cout << "Ingresa números :\n";
    std::cout <<"(ingresa -1 para terminar) \n";

    while(std::cin >> num && num != -1) {
        sum += num;
        count++;
    }

    if(count != 0) {
        std::cout << "La media de los números ingresados es " << sum / count << "\n";
    } else {
        std::cout << "No se ingresaron números.\n";
    }

    return 0;
}

//7.	Haz un programa que calcule la media de una serie de números ingresados por el usuario.