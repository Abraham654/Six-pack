#include <iostream>
#include <cmath>

double funcion(double x) {
    // Aquí debes definir la función que deseas encontrar la raíz
    // Por ejemplo, si quieres encontrar la raíz de f(x) = x^2 - 4:
    return x * x - 4;
}

double metodoBiseccion(double a, double b, double tolerancia) {
    double c;
    
    while (std::abs(b - a) > tolerancia) {
        c = (a + b) / 2;
        
        if (funcion(c) == 0) {
            break;
        } else if (funcion(a) * funcion(c) < 0) {
            b = c;
        } else {
            a = c;
        }
    }
    
    return c;
}

int main() {
    double a, b, tolerancia;
    
    // Ingresa los valores iniciales del intervalo [a, b] y la tolerancia
    std::cout << "Ingrese el valor de a: ";
    std::cin >> a;
    
    std::cout << "Ingrese el valor de b: ";
    std::cin >> b;
    
    std::cout << "Ingrese la tolerancia: ";
    std::cin >> tolerancia;
    
    double raiz = metodoBiseccion(a, b, tolerancia);
    
    std::cout << "La raíz aproximada es: " << raiz << std::endl;
    
    return 0;
}
