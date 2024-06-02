#include <stdio.h>
#include "arreglos.h"

void ingresarNumeros(int cal[], int N) {
for (int i = 0; i < N; i++) {
printf("o ");
scanf("%d", &cal[i]);
}
}

void calcularmostrar(int cal[], int N) {
int mas = 0, menos = 0, nulo = 0;
for (int i = 0; i < N; i++) {
  if (cal[i] > 0) {
  mas++;
} else if (cal[i] < 0) {
  menos++;
} else {
  nulo++;
}

}
printf("\n **************************************************");
printf("\n Existen:");
printf("\n (%d) Positivos.", mas);
printf("\n (%d) Negativos. ", menos);
printf("\n (%d) Nulos.", nulo);
printf("\n **************************************************");
}


void thematrix(int cal[][50], int N, int M) {
    for (int i = 0; i < M; i++) {
        printf(" --------------\n"); 
        for (int j = 0; j < N; j++) {
            printf(" o [%d , %d]: ", i + 1, j + 1);
            scanf("%d", &cal[i][j]);
        }
    }
}

void imprimirm(int cal[][50], int N, int M) {
    for (int i = 0; i < M; i++) { 
        for (int j = 0; j < N; j++) { 
            printf(" %d |", cal[i][j]);
        }
        printf("\n");
    }
}

void trans(int cal[][50], int trans[][50], int N, int M) {
    for (int i = 0; i < M; i++) { 
        for (int j = 0; j < N; j++) {
            trans[j][i] = cal[i][j];
        }
    }
}
