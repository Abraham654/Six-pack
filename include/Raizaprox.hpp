
#ifndef RAIZAPROX_HPP
#define RAIZAPROX_HPP
#include <iostream>

class Raizaprox {
public:
    Raizaprox(double valorRaiz) : valorRaiz_(valorRaiz) {}

    void imprimirValorRaiz() {
        std::cout << "La raíz aproximada es: " << valorRaiz_ << std::endl;
    }

private:
    double valorRaiz_;
};

#endif
