#include <iostream>
#include <cmath>

using namespace std;

// Definición de la función a resolver
double funcion(double x) {
    // Puedes cambiar esta función según tus necesidades
    return x * x - 4;
}

// Método de bisección
double metodoBiseccion(double a, double b, double tolerancia) {
    double c;

    while ((b - a) >= tolerancia) {
        // Encontrar el punto medio
        c = (a + b) / 2;

        // Verificar si el punto medio es la raíz
        if (funcion(c) == 0.0) {
            break;
        }
        // Actualizar los valores de a y b
        else if (funcion(c) * funcion(a) < 0) {
            b = c;
        } else {
            a = c;
        }
    }

    return c;
}

int main() {
    // Definir el intervalo [a, b] y la tolerancia
    double a, b, tolerancia;

    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Ingrese la tolerancia: ";
    cin >> tolerancia;

    // Verificar si la raíz está en el intervalo dado
    if (funcion(a) * funcion(b) >= 0) {
        cout << "No se puede aplicar el método de bisección en este intervalo." << endl;
        return 1;
    }

    // Llamar al método de bisección
    double resultado = metodoBiseccion(a, b, tolerancia);

    // Mostrar el resultado
    cout << "La raíz aproximada es: " << resultado << endl;

    return 0;
}