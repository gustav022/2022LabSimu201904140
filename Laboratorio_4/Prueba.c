/*
#"Autor:      gustavo"
#"Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0"
#"Compilado:  gcc -o Prueba.out Prueba.c"
#"Fecha:      05/08/22"
#"Librerias:  stdio"
#"Resumen     Programa que me sirve para hacer pruebas"
#"Entrada:    USB"
#"Salida:     USB"
*/
//Librerias
void imprimir(int datos[]);
int n = 10;
int main(){
    //Declaración del vector
    int A[n];
    int temp;
    //Declaración e incialización de variables
    int i, total=0;
    //uso de un ciclo for para poder ingresar el valor del vector
    for ( i = 0; i < n; i++)
    {   
        puts("Ingrese un número par para el vector");
        scanf("%d",&temp);   
        if (temp%2==0)
        {
            scanf("%d",&A[i]);
        }
        else
        {
            puts("El número ingresado es impar, intente de nuevo");
        }
    }
    imprimir(A);
    puts("La lista de números es:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", A[i]);
    }
        return 0;
}

//Imprimir los datos del vector que ingrese a la función
void imprimir(int datos[]){
    puts("Valor de los datos");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",datos[i]);
    }
    puts("\n");
}
