#include <iostream>
#include <cmath>
#include <iomanip>

double funcion(double x) {
    return std::pow(x,2)-cos(x); // Ejemplo de función cuadrática: x^2 - 4
}

double metodoBiseccion(double a, double b, double tolerancia, int iteraciones) {
    double c;
    
    std::cout << "Iteración\t a\t\t b\t\t c\t\t f(c)\t\t Error Relativo" << std::endl;
    
    for (int i = 0; i <= iteraciones; i++) {
        c = (a + b) / 2;
        
        double f_c = funcion(c); // Evaluamos la función en el valor de c
        
        double errorRelativo = std::abs((c - a) / c);
        
        std::cout << i << "\t\t " << a << "\t\t " << b << "\t\t " << c << "\t\t " << f_c;
        
        if (i > 0) {
            std::cout << "\t\t " << errorRelativo;
        }
        
        std::cout << std::endl;
        
        if (f_c == 0 || std::abs(b - a) < tolerancia) {
            break;
        } else if (funcion(a) * f_c < 0) {
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
    
    // Obtener el valor de a y b dentro del intervalo [-3, 3]
    for (double x = -3; x <= 3; x += 0.1) {
        double y = funcion(x);
        if (y < 0) {
            a = x;
        } else if (y > 0) {
            b = x;
            break;
        }
    }
    
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
    
    // Imprimir la tabla de valores de x, y, a y b obtenidos
    std::cout << "Tabla de valores obtenidos:" << std::endl;
    std::cout << "x\t\t y\t\t a\t\t b" << std::endl;
    for (double x = 3; x >= -3; x -= 0.1) {
        double y = funcion(x);
        std::cout << x << "\t\t " << y;
        if (x == -3) {
            std::cout << "\t\t " << a << "\t\t " << b;
        } else {
            std::cout << "\t\t " << a << "\t\t " << b;
        }
        std::cout << std::endl;
    }
    
    double angulo_en_grados = 45.0;
    
    // Convertir de grados a radianes
    double angulo_en_radianes = angulo_en_grados * M_PI / 180.0; // M_PI es una constante que representa pi
    
    return 0;
}
