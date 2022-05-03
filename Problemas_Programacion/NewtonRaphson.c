/*
#"Autor:      gustavo"
#"Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0"
#"Compilado:  gcc -o NewtonRaphson NewtonRaphson.c"
#"Fecha:      04/24/22"
#"Librerias:  stdio"
#"Resumen     Programa para aproximar raíces de un polinomio usando el método de Newton-Raphson"
#"Entrada:    USB"
#"Salida:     USB"
*/
//Librerias
#include<stdio.h>
#include<math.h>
#define Epsilon 0.0001

//Se define la función f(x) a la cual se aplicará el método de Newton-Raphson
float f(float x)
{
    return x*x*x - 3*x -5;
}
//Se define la derivada de la función (f´(x))
float differentiate(float x)
{
    return 3*x*x - 3;
}

int main()
{
    int IteracionMax,i;
    float x,x0,x1,x2;
    printf("Ingrese el número máximo de iteraciones\n");
    scanf("%d",&IteracionMax);

//......Para calcular x1 y x2............. 
   
   do
   {
//Aquí se pide al usuario que ingrese los valores de x1 y x2
        printf("Ingrese el valor de x1 y x2 (límites iniciales)");
        scanf("%f%f",&x1,&x2);
//Mientras el usuario ingrese valores que cumplan con la condición f(x1)*f(x2)>0, se continua con el programa
//Si no se cumple con la condición, se sigue pidiendo valores que sí cumplan
        if(f(x1)*f(x2)>0)
        {
           printf("Los límites ingresados son inválidos\n");
           continue;
        }
        else
        {
            printf("Las raíces se encuentran estre %f y %f\n",x1,x2);
            break;
        }
    } while(1);

//Para hallar x0, se asigna x0=x1 cuando el valor absoluto de x2 > valor absoluto de x1 y x0=x2 cuando 
//cuando el valor absoluto de x2 < valor absoluto de x1
    if(fabs(f(x1)) < fabs(f(x2)))
        x0 = x1;
    else
        x1 = x2;    

//Aplicando una aproximación sucesiva para hallar las raíces 
    for(i=1;i<=IteracionMax;i++)
    {
      x = x0 - (f(x0)/differentiate(x0));  

 //Condición que veferifica |x-x0|<Epsion
      if(fabs(x-x0)<Epsilon)
      {       
            printf("Iteraciones=%d  Raíz final=%f\n",i,x);
           return 0;
      }      
      printf("Iteraciones=%d  Raíz=%f\n",i,x); 
      x0=x;
    }
    printf("Raíz=%f  Iteracioens totales=%d",x,--i);
    return 0;
}