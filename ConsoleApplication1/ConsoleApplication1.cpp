#include <iostream>

int sumaRecursiva(int n) {
    if (n <= 9)
        return n;
    else
        return sumaRecursiva(n / 10) + n % 10;
}

int main() {
    int numero;
    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

    int resultado = sumaRecursiva(numero);

    std::cout << "La suma de los digitos de " << numero << " es: " << resultado << std::endl;

    return 0;
}
