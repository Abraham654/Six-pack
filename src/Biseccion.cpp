
#include <iostream>
#include <cmath>
#include <iomanip>

double funcion(double x) {
    return 8 * x - 2;
}

double metodoBiseccion(double a, double b, double tolerancia, int iteraciones) {
    double c;
    
    std::cout << "Iteración\t a\t\t b\t\t c\t\t f(c)\t\t Error Relativo" << std::endl;
    
    for (int i = 1; i <= iteraciones; i++) {
        c = (a + b) / 2;
        
        double errorRelativo = std::abs((c - a) / c);
        
        std::cout << i << "\t\t " << a << "\t\t " << b << "\t\t " << c << "\t\t " << funcion(c) << "\t\t " << errorRelativo << std::endl;
        
        if (std::abs(funcion(c)) < tolerancia) {
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
    int iteraciones;
    
    // Ingresa los valores iniciales del intervalo [a, b]
    std::cout << "Ingrese el valor de a: ";
    std::cin >> a;
    
    std::cout << "Ingrese el valor de b: ";
    std::cin >> b;
    
    // Ingresa el número de iteraciones (mínimo 0, máximo 10)
    std::cout << "Ingrese el número de iteraciones (0-10): ";
    std::cin >> iteraciones;
    
    // Ingresa el número de decimales que deseas usar
    int decimales;
    std::cout << "Ingrese el número de decimales: ";
    std::cin >> decimales;
    
    // Configura la precisión de salida
    std::cout << std::fixed << std::setprecision(decimales);
    
    // Ingresa la tolerancia
    std::cout << "Ingrese la tolerancia: ";
    std::cin >> tolerancia;
    
    double raiz = metodoBiseccion(a, b, tolerancia, iteraciones);
    
    std::cout << "La raíz aproximada es: " << raiz << std::endl;
    
    return 0;
}
