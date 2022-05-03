/*
#"Autor:      gustavo"
#"Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0"
#"Compilado:  "
#"Fecha:      03/28/22"
#"Librerias:  stdio"
#"Resumen     El programa recibirá n número de alturas y termina de obtener datos al ingresarse una altura negativa. Por último, este programa devuelve el valor del promedio máximo y mínimo de los datos"
#"Entrada:    USB"
#"Salida:     USB"
*/
//Librerias
#include <stdio.h>

//Declaración e inicialización de variables:
int x=0, n=0, max=0, min=0;
float med=0;

int main(){
//Se leen los datos ingresados
    puts("Bienvenido. Ingrese valores enteros de alturas y para terminar ingrese un valor negativo");
    puts("Ingrese una altura: ");
    scanf("%d", &x);
//Se almacena el valor de altura en min y max
    max=x;
    min=x;
//Se valida que la altura sea mayor a 0
    while (x>=0)
    {
//Se acumulan los datos de conteo y media para su uso final
        n++;
        med+=x;
//Se valúa si el valor ingresado es mayor al valor máximo de ese instante
        if (x>max)
        {
            max=x;
        }
//Se valúa si el valor ingresado es menor al valor mínimo de ese instante
        if (x<min)
        {
            x=min;
        }
//Se leen los nuevos valores ingresados
        puts("Ingrese otra altura: ");
        scanf("%d", &x);
    }
//Se verifica que el valor de n sea mayor a 0
    if (n==0)
    {
        puts("No ingresó alturas válidas");
    }
    else
    {
//Se imprimen la media, el valor máximo y mínimo
        printf("De los valores ingresados: La media es: %f, \n El valor máximo es: %d, \n El valor mínimo es: %d \n", med/n, max, min);
    }
    

    return 0;
}
