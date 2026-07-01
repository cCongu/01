#include <stdio.h>

void busqueda_num(int numero, int *cant_pares, int *menor){
    *cant_pares = 0;
    *menor = -1;
    int digito;

    while (numero > 0){
        digito = numero % 10;
        if(digito % 2 == 0){
            
            if (*menor == -1 || digito < *menor){
                *menor = digito;
            }
            (*cant_pares)++;
        }
        numero /= 10;
    }
}

void main(){
    int numero, cant_pares, menor;

    printf("Ingrese una cadena de numeros: ");
    scanf("%d", &numero);

    busqueda_num(numero, &cant_pares, &menor);

    printf("CADENA: %d, CANTIDAD PARES: %d, MENOR: %d", numero, cant_pares, menor);
}