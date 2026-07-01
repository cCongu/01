#include <stdio.h>

void ejercicio_3 (int numero, int *multi_pares, int *cant_pares){

    *multi_pares = 1;
    *cant_pares = 0;
    int digito;

    while(numero > 0){
        digito = numero % 10;
        if(digito % 2 == 0){
            *multi_pares *= digito;
            (*cant_pares)++;
        }
        numero /= 10;
    }
}

void main(){

    int numero, multi_pares, cant_pares;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    ejercicio_3(numero, &multi_pares, &cant_pares);
    printf("Su numero: %d, Producto pares: %d, Cantidad pares: %d",numero,multi_pares,cant_pares);

}