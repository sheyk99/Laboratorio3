#include <stdio.h>

//se define la funcion que va a calcular los numeros
int triangulares(int i) { //la funcion recibe el parametro inicial en i
    int x; 
    for (i = 1; i <= 100; i++){ //utiliza los indices del 1 al 100 de uno en uno
    x = (i*(i+1))/2; // x es la formula general para el calculo de los numeros
    printf("%d,", x);
   }
}

int main() {

    int i; //se establece i para luego pasarlo como parametro a la funcion
    
    triangulares(i); //se llama la funcion con el parametro i que es el contador

    return 0;
}