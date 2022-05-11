/*
#"Autor:      gustavo"
#"Compilador: gcc (Ubuntu 9.4.0-1ubuntu1~20.04) 9.4.0"
#"Compilado:  gcc -o Problema4.out Problema4.c"
#"Fecha:      05/09/22"
#"Librerias:  stdio"
#"Resumen     Programa de operaciones con matrices"
#"Entrada:    USB"
#"Salida:     USB"
*/
//Librerias
#include <stdio.h>
#include <math.h>

//Se declaran las variables
int matA[3][3], matB[3][3], cte;
//Se declaran las variables de control y conteo.
int i, j, k;
//Se prototipan las funciones
void imprimirMat(int A[3][3]);
void llenarMat();
void cA();
void suma();
void resta();
void multi();
int detA();
void transB();
void invA();
void Gauss(int A[3][3]);

//Función principal
int main(){
  puts("\n ----------Operaciones con Matrices de 3X3---------- ");
  //Se llenan las matrices con los elementos ingresados
  printf("--------------------------------------------------------\n");
  llenarMat(); 
  printf("--------------------------------------------------------\n");
  //Se multiplica la matriz por una constante
  cA(); 
  printf("--------------------------------------------------------\n");
  //Suma de las matrices ingresadas
  suma(); 
  printf("--------------------------------------------------------\n");
  //Resta de las matrices ingresadas
  resta(); 
  printf("--------------------------------------------------------\n");
  //Multiplicación de las matrices ingresadas
  multi();
  printf("--------------------------------------------------------\n");
  //Determinante de la matriz A
  printf("\nEl determinante de A es: \n%d\n", detA()); 
  printf("--------------------------------------------------------\n");
  //Traspuesta de la matriz B
  transB();
  printf("--------------------------------------------------------\n");
  //Se determina si A tiene inversa
  if (detA() != 0){ 
    puts("\nLa inversa de A es:");
    //Inversa de A
    invA(); 
  }else{
    puts("\nLa matriz A matriz no es invertible");
  }
  printf("--------------------------------------------------------\n");
  //Reducción de Gauss de A
  puts("\nLa reducción de Gauss para A será:");
  Gauss(matA);
  printf("--------------------------------------------------------\n");
  //Reducción de Gauss de B
  puts("\nLa reducción de Gauss-Jordan para B será:");
  Gauss(matB);
  return 0;
}

//Función que muestra las matrices con elementos enteros
void imprimirMat(int A[3][3]){
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d ", A[i][j]);
      if (j == 2){puts("\n");}
    }
  }
}

//Función que muestra las matrices con elementos flotantes
void imprimirMatf(float A[3][3]){
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%.2f ", A[i][j]);
      if (j == 2){puts("\n");} 
    }
  }
} 

//Función para ingresar los elementos a las matrices
void llenarMat(){
  //Se llena la matriz A
  puts("\nIngrese los elementos para A (#fila,#columna): ");
  for ( i = 0; i < 3; i++){
    for ( j = 0; j < 3; j++){
      printf("Ingrese a_%d,%d y presione enter: ",i+1,j+1);
      scanf("%d",&matA[i][j]);
    }
  }
  //Se llena la matriz B
  puts("\nIngrese los elementos para B (#fila,#columna): ");
  for ( i = 0; i < 3; i++){
    for ( j = 0; j < 3; j++){
      printf("Ingrese b_%d,%d y presione enter: ",i+1,j+1);
      scanf("%d",&matB[i][j]);
    }
  }
  //Muestra las matrices ingresadas
  puts("\nLa matriz A es: ");
  imprimirMat(matA);
  puts("\nLa matriz B es: ");
  imprimirMat(matB);
  // Llena la constante
  puts("\nIngrese el valor de la constante: ");
  scanf("%d",&cte);
}

//Función que multiplica la constante ingresada con la matriz A
void cA(){
  int cteA[3][3];
  for ( i = 0; i < 3; i++){
    for ( j = 0; j < 3; j++){
      //Se multiplica cada entrada por la constante
      cteA[i][j]=cte*matA[i][j]; 
    }
  }
  //Se muestran los resultados
  printf("\nSea c = %d, la matriz %dA es: \n",cte,cte);
  imprimirMat(cteA);
}

//Función que suma la matriz A con B
void suma(){
  int suma[3][3];
  puts("\nLa suma de A y B es: ");
  for ( i = 0; i < 3; i++){
    for ( j = 0; j < 3; j++){
      suma[i][j] = matA[i][j] + matB[i][j];
    }
  }
  imprimirMat(suma);
}

//Función que resta la matriz A con B
void resta(){
  int resta[3][3];
  puts("\nLa resta de A y B es: ");
  for ( i = 0; i < 3; i++){
    for ( j = 0; j < 3; j++){
      resta[i][j] = matA[i][j] - matB[i][j];
    }
  }
  imprimirMat(resta);
}

//Función que multiplica la matriz A con B
void multi(){
  int C[3][3];
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      int sum = 0;
      for (k = 0; k < 3; k++) {
        sum += matA[i][k]*matB[k][j];
      }
      C[i][j] = sum;
    }
  }
  printf("El producto de las matrices es:\n");
  imprimirMat(C);
}

//Función que encuentra el determinante de la matriz A
int detA(){
  int det = (matA[0][0]*matA[1][1]*matA[2][2]+matA[0][1]*matA[1][2]*matA[2][0]+matA[1][0]*matA[2][1]*matA[0][2])-matA[0][2]*matA[1][1]*matA[2][0]-matA[0][1]*matA[1][0]*matA[2][2]-matA[1][2]*matA[2][1]*matA[0][0];
  return det;
}

//Función que encuentra la transpuesta de la matriz B
void transB(){
  int transB[3][3];
  puts("\nLa transpuesta de B es: ");
  for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
      transB[i][j] = matB[j][i];
    }
  }
  imprimirMat(transB);
}

//Función que encuentra la matriz inversa de la matriz A
void invA(){
  int adjA[3][3];
  float inv[i][j];
  adjA[0][0] = +matA[1][1]*matA[2][2] - matA[2][1]*matA[1][2];
  adjA[1][0] = -matA[1][0]*matA[2][2] + matA[2][0]*matA[1][2];
  adjA[2][0] = +matA[1][0]*matA[2][1] - matA[2][0]*matA[1][1];
  adjA[0][1] = -matA[0][1]*matA[2][2] + matA[2][1]*matA[0][2];
  adjA[1][1] = +matA[0][0]*matA[2][2] - matA[2][0]*matA[0][2];
  adjA[2][1] = -matA[0][0]*matA[2][1] + matA[2][0]*matA[0][1];
  adjA[0][2] = +matA[0][1]*matA[1][2] - matA[1][1]*matA[0][2];
  adjA[1][2] = -matA[0][0]*matA[1][2] + matA[1][0]*matA[0][2];
  adjA[2][2] = +matA[0][0]*matA[1][1] - matA[1][0]*matA[0][1];
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      inv[i][j]=adjA[i][j]*pow(detA(),-1);
    }
  }
  imprimirMatf(inv);
}

void Gauss(int A[3][3]){
  float aux, R[3][3];
  //Se tomó en cuenta el método convencional para hallar el resultado final
  for (i = 0; i < 3; i++){
    for (j = 0; j < 3; j++){
      //Se define la variable g=matA[i][j]/matA[j][i] y tambien se entrará a un bucle
      if (i != j){
        aux = A[i][j]/A[j][i];
        /* Se empieza en k=0. Se verificara si k<4. Sí es verdadero, se empieza a definir cada elemento de
        R[i][k] = A[i][k] - aux*(A[i][j])
        y por último se aumentará k de uno en uno. */
        for (k = 0; k<4; k++){
          R[i][k] = A[i][k] - aux*(A[i][j]);
        }
      }
    }
  }
  imprimirMatf(R);
}