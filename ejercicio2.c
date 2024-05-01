#include <stdio.h>

int factorial (int n) {
    int i = 1;
    do {
        i = i * n;
        //el error estaba en poner int antes del n, pues utilizaba una nueva variable n y no la que se ingresaba como parametro en la funcion
        n = n - 1;
    } while (n > 1);
    return i;
}

int main (int argc, char *argv[]) {
//recibe el numero que ingresa el usuario para calcular
    int x;
    printf("Ingrese el numero del que desea saber el factorial: \n");
    scanf("%d", &x);
//asigna a una variable el resultado que devuelve la funcion con el numero ingresado como parametro
    int facx = factorial (x);
    printf("El resultado de %d! es: %d\n", x, facx);
    return 0;
}