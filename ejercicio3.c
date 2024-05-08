#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5


int crearmatriz(int tama) {

    int matrix[tama][tama], i, j;
    srand(time(NULL));

    if (tama <= 10) {
        printf("La matriz utilizada corresponde a:\n");
        for (i = 0; i < tama; i++) {
            for (j = 0; j < tama; j++) {
                matrix[i][j] = rand() % 2;
                printf("%d", matrix[i][j]);
        }
        printf("\n");
        
        }
    return matrix[i][j];   

    } else { 
        printf("La matriz utilizada corresponde a:\n");
        for (i = 0; i < SIZE; i++) {
            for (j = 0; j < SIZE; j++) {
                matrix[i][j] = rand() % 2;
                printf("%d", matrix[i][j]);
        }
        printf("\n");
        }
    return matrix[i][j];  
    }

}

int contarmatriz(int matrix, int tama) {
    int i, j;
    int large = 1;
    if (tama <= 10) {
        for (i = 0; i < tama; i++) {
            for (j = 0; j < tama; j++) {
                for (i == 1; i++ == 1; j++ == 1){
                    do {
                        large++;
                    } while (i++ == 1 && j++ == 1);
                }
            }
        }
    } else {
        for (i = 0; i < SIZE; i++) {
            for (j = 0; j < SIZE; j++) {
                for (i == 1; i++ == 1; j++ == 1){
                    do {
                        large++;
                    } while (i++ == 1 && j++ == 1);
                }
            }
        }

    }

    printf("El tamaño del cuadrado más grande de unos es: %dx%d\n", large, large);
    return 0;
}

int main() {
    
    int tama;

    printf("Ingrese el numero de filas de la matriz nxn:\n");
    scanf("%d", &tama);

    int matrizfinal = crearmatriz(tama);

    contarmatriz(matrizfinal, tama);

    return 0;
}
