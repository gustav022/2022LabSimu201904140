/*
#"Autor:      gustavo"
#"Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0"
#"Compilado:  gcc -o Newt-Raph.out -lm Newt-Raph.c -lm"
#"Fecha:      04/25/22"
#"Librerias:  stdio, math"
#"Resumen     Programa que realiza el método matemático de Newton Raphson para calcular las raíces de una función no lineal"
#"Entrada:    USB"
#"Salida:     USB"
*/
//Librerias
#include <stdio.h>
#include <math.h>
//Se define la función f(x) a la que se desea hallar sus raíces
#define f(x) exp(x) + x
//También se define la derivada de la función f´(x)=g(x)
#define g(x) exp(x) + 1

//Se declaran todas las variables que se usarán en el programa
int main() {
    double x;
    float x0, x1, f0, f1, g0, e;
    int Itr = 1, N;
//Se pide al usuario que ingrese una estimación inicial, el error que desea tener en el método así como
//el número de iteraciones que desea implementar
    printf("Ingrese la estimación inicial:\n");
    scanf("%f",&x0);
    printf("Ingrese el error tolerable:\n");
    scanf("%f",&e);
    printf("Ingrese la máxima iteración:\n");
    scanf("%d",&N);
//---------------Empieza la implementación del método de Newton-Raphson--------------
//Este comando se utiliza para que los valores aparezcan en forma de tabla (para así darle un mejor aspecto visual)
    printf("\nStep\t\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
    do
    {
        f0 = f(x0);
        g0 = g(x0);
//Si g0 = 0, se prsentan errores matemáticos, por lo que se finaliza el programa inmediatamente. Si g0 es distinto
//de 0, se continua con el proceso de Newton-Raphson
        if(g0 == 0.0)
        {
            printf("Error matemático");
            break;
        }
//Se calcula x1
        x1 = x0 - f0/g0;
        printf("%d\t\t%f\t%f\t%f\t%f\n",Itr,x0,f0,x1,f1);
		x0 = x1;
//Contador que se detiene cuando se llega al número de iteraciones N solicitado por el usuario
        Itr = Itr+1;
//Si el número de iteraciones es mayor que N, se imprime "No es convergente"
        if(Itr > N)
        {
            printf("No es convergente");
            break;
        }
        f1 = f(x1);
//Si |f(x1)| > e entonces se deja x0 = x1 y se repite el ciclo hasta hallar el número que se acomode al error 
//sugerio por el usuario para que sea la raíz de la función
    } while (fabs(f1)>e);
//Se toma como raíz la última x1 que resulta del ciclo anterior y se muestra en la pantalla
     printf("\nLa raíz es: %f\n", x1);
return 0;
}

