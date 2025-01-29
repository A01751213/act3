#ifndef FACTORIAL_H
#define FACTORIAL_H

#include <stdexcept>

long long factorial(int n) {
    if (n < 0) throw std::runtime_error("Argumento negativo");
    return (n == 0 || n == 1) ? 1 : n * factorial(n - 1);
}

long long combinacion(int n, int r) {
    if (r < 0 || r > n) throw std::runtime_error("Combinación inválida");
    return factorial(n) / (factorial(r) * factorial(n - r));
}

#endif