#ifndef OPERACIONES_H
#define OPERACIONES_H

double sumar(double a, double b) { return a + b; }
double restar(double a, double b) { return a - b; }
double multiplicar(double a, double b) { return a * b; }
double dividir(double a, double b) {
    if (b == 0) throw std::runtime_error("División por cero");
    return a / b;
}

#endif