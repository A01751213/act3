#include <iostream>
#include "MyMathLib.h"
#include "Operaciones.h"
#include "Factorial.h"

int main() {
    std::cout << "Operaciones Aritméticas:\n";
    std::cout << "Suma(5, 3) = " << sumar(5, 3) << '\n';
    std::cout << "Resta(5, 3) = " << restar(5, 3) << '\n';
    std::cout << "Multiplicación(5, 3) = " << multiplicar(5, 3) << '\n';
    std::cout << "División(6, 2) = " << dividir(6, 2) << '\n';

    std::cout << "\nOperaciones Combinatorias:\n";
    std::cout << "Factorial(5) = " << factorial(5) << '\n';
    std::cout << "Combinación(5, 2) = " << combinacion(5, 2) << '\n';

    std::cout << "\nRaíz cuadrada:\n";
    std::cout << "Sqrt(9) = " << mySqrt(9) << '\n';

    return 0;
}
