#include <iostream>

int main() {
    // Inicializar la variable para la suma
    int suma = 0;
    int numero;


    std::cout << "Por favor, ingrese números positivos." << std::endl;
    std::cout << "Ingrese un número negativo para detenerse." << std::endl;

    while (true) { //este es un bucle infinito que se detiene manualmente
        std::cout << "Ingrese un número: ";
        std::cin >> numero;

        // Verificar si el número es negativo
        if (numero < 0) {
            break; // Romper el ciclo si el número es negativo
        }

        // Sumar el número a la variable suma
        suma += numero;
    }

    // Imprimir la suma de los números positivos
    std::cout << "La suma de los números positivos ingresados es: " << suma << std::endl;

    return 0;
}

//3.	Desarrolla un programa que pida al usuario ingresar números positivos y los sume,
// deteniéndose cuando ingresa un número negativo.