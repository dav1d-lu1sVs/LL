#include <stdio.h>
#include "lecturas.h"
#include "arreglos.h"


int main() {
    int M, N;
    int matriz[50][50];
    int transpuesta[50][50];
    printf("--> * Bienvenido * <--\n");
    M = leerEnteroPositivo("\nIngrese cantidad de filas: ");
    N = leerEnteroPositivo("Ingrese cantidad de columnas: ");

    printf("\n");
    printf("Ingrese los datos de la siguiente forma\n");
    printf("********************\n");
    printf("[filas | columnas]\n");
    printf("********************\n");
   
    thematrix(matriz, M, N); 
    printf("\n");
    printf("+++++++++++++++++++++++++++++++\n");
    printf("Su matriz original\n");
    imprimirm(matriz, M, N); 

    printf("\n");
    printf("+++++++++++++++++++++++++++++++\n");
    printf("Su matriz transpuesta\n");
    trans(matriz, transpuesta, M, N); 
    imprimirm(transpuesta, N, M); 
    printf("Fin \n");
    return 0;
}


