
#include <cmath>

class ConvertidorGradosRadianes {
public:
    static double convertir(double angulo_en_grados) {
        return angulo_en_grados * M_PI / 180.0;
    }
};

double angulo_en_grados = 45.0;
