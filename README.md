# Método de Bisección

![Método de Bisección](https://th.bing.com/th/id/OIG.l81fnNlmwDgG9SDpSCZI?w=1024&h=1024&rs=1&pid=ImgDetMain)

## Descripción

Este es un programa que implementa el método de bisección en C++.  El método de bisección es un método numérico que se basa en el teorema del valor intermedio, que dice que si una función continua cambia de signo en un intervalo, entonces tiene al menos una raíz en ese intervalo. El método consiste en ir dividiendo el intervalo en dos partes iguales y elegir el subintervalo donde la función cambia de signo, hasta obtener una aproximación de la raíz con el grado de precisión deseado. El método de bisección tiene la ventaja de ser simple y garantizar la convergencia, pero tiene la desventaja de ser lento y requerir que la función sea continua y cambie de signo en el intervalo inicial.

De acuerdo a su nombre I=2, sección= partes, lo que indica que el intervalo inicial se divide en 2 partes iguales y se retienen la mitad donde f cambia de signo, a este subintérvalo se repite el proceso hasta llegar al criterio de paro

## Agradecimientos

Agradezco a **Luis Armando** por la inspiración y colaboración en el desarrollo de este proyecto. Sin duda el desarrollo de este proyecto me impulso mas a agarrarle el gusto a la programación y al aprender nuevos métodos, sin duda alguna eh aprendido mucho sobre el profesor y en este agradecimiento, agradezco el empeño y essfuerzo que transmite en cada clase. 

## Desarrolladores

- **ABRAHAM ISAAC ORTIZ LOPEZ**
- **ROLANDO CAMPOS LORETO**

## "**Instrucciones de Ejecución:**"

## Para compilar y ejecutar el programa:

1. **Compilación:**

Esto compilará el código y ejecutará el programa, solicitando al usuario los parámetros necesarios para encontrar la raíz aproximada de la ecuación proporcionada.

## Contacto
Si quieres contribuir al código, por favor contacta a:

ABRAHAM ISAAC ORTIZ LOPEZ a través del correo electrónico: a22310276@ceti.mx
ROLANDO CAMPOS LORETO a través del correo electrónico: a22310190@ceti.mx

## Dependencias
Para instalar plant uml, se necesita el siguiente comando:

sudo apt-get update
sudo apt install graphviz

## Frase
"Mas vale prevenir que lamentar"

## Seudocodigo
funcion(x):
    return x^2 - 4

metodoBiseccion(a, b, tolerancia, iteraciones):
    c = 0.0
    
    imprimir("Iteración\t a\t\t b\t\t c\t\t f(c)\t\t Error Relativo")
    
    para i en rango(iteraciones + 1):
        c = (a + b) / 2
        
        f_c = funcion(c)
        
        errorRelativo = abs((c - a) / c)
        
        imprimir(i, "\t\t ", a, "\t\t ", b, "\t\t ", c, "\t\t ", f_c, end="")
        
        si i > 0:
            imprimir("\t\t ", errorRelativo)
        
        imprimir("\n")
        
        si f_c == 0 o abs(b - a) < tolerancia:
            romper
        sino si funcion(a) * f_c < 0:
            b = c
        sino:
            a = c
    
    devolver c

principal():
    a = 0.0
    b = 0.0
    tolerancia = 0.0
    iteraciones = 0
    
    # Obtener el valor de a y b dentro del intervalo [-3, 3]
    para x en rango(-3, 4, 0.1):
        y = funcion(x)
        si y < 0:
            a = x
        sino si y > 0:
            b = x
            romper
    
    # Ingresa el número de iteraciones (mínimo 0, máximo 10)
    imprimir("Ingrese el número de iteraciones (0-10): ")
    leer(iteraciones)
    
    # Ingresa el número de decimales que deseas usar
    imprimir("Ingrese el número de decimales: ")
    leer(decimales)
    
    # Configura la precisión de salida
    imprimir("Tabla de valores obtenidos:")
    imprimir("x\t\t y\t\t a\t\t b")
    para x en rango(3, -4, -0.1):
        y = funcion(x)
        imprimir(x, "\t\t ", y, "\t\t ", a, "\t\t ", b)
    
    angulo_en_grados = 45.0
    
    # Convertir de grados a radianes
    angulo_en_radianes = angulo_en_grados * pi / 180.0
    
    raiz = metodoBiseccion(a, b, tolerancia, iteraciones)
    
    imprimir("La raíz aproximada es: ", raiz)

## Sugerencias
Si tienes alguna sugerencia o mejora para este proyecto, no dudes en contactarnos a través del correo electrónico para discutirlo y colaborar.

¡Gracias por revisar este proyecto!

![Diagrama de flujo](https://th.bing.com/th/id/OIG.TGMvrTf7oAtNs7P.B9Tg?pid=ImgGn) 