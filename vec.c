#include <stdio.h>
#include "arreglos.h"
#include "lecturas.h"

int main() {
int VEC[100];
int N;
printf("--> * Bienvenido * <--\n");
printf("---------------------------------------------------\n");
N = leerEnteroPositivo("Ingrese el tamano del arreglo: ");
printf("---------------------------------------------------\n");
ingresarNumeros(VEC, N);
calcularmostrar(VEC, N);
printf("\n  Gracias por su atencion" );
return 0;
}

