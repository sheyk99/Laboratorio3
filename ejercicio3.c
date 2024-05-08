#include <stdio.h>
#include <stdlib.h> //libreria para rand
#include <time.h> //libreria para rand
#define SIZE 5 //Establece el macro para el tamano predeterminado


int crearmatriz(int tama) {

    int matrix[tama][tama], i, j;
    srand(time(NULL)); //establece rand con respecto al tiempo en el que se ejecuta el programa
    //asi los valores no se repiten

    if (tama <= 10) { //delimita el mayor tamano posible de la matriz
        printf("La matriz utilizada corresponde a:\n");
        for (i = 0; i < tama; i++) { //recorre las filas de la matriz
            for (j = 0; j < tama; j++) { //recorre las columnas de la matriz
                matrix[i][j] = rand() % 2; //asigna a cada posicion un numero aleatorio menor a 2 (0 y 1)
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

int contarmatriz(int matrix, int rango) {
    int i, j;
    int large = 1;
    for (i = 0; i < rango; i++) { 
        for (j = 0; j < rango; j++) {
            //con esto se recorre la matriz por fila y columna
            for (i == 1; i++ == 1; j++ == 1){
                //cuando llega a un 1, si el siguiente en fila y columna tambien son 1
                do {
                    large++;
                    //suma uno al contador cada vez que se encuentra una posicion entre unos
                } while (i++ == 1 && j++ == 1);
                //cada vez que el numero en diagonal sea 1
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

    int matrizfinal = crearmatriz(tama); //asigna a una variable el valor de retorno (matriz en array) de la funcion
    //para poder pasarlo como parametro a la siguiente funcion

    if (tama <= 10) { //cumple con el tamano permitido
        contarmatriz(matrizfinal, tama);
    } else { //no cumple con el tamano y utiliza el macro que es el valor default
        contarmatriz(matrizfinal, SIZE);
    }

    return 0;
}
