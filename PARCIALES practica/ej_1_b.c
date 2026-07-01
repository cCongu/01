
#include <stdio.h>

void ejercicio1 (int numero, int *mayor, int *suma_impares){
    *mayor = 0;
    *suma_impares = 0;
    int digito;

    while(numero > 0){
        digito = numero % 10;
        if(digito % 2 != 0){
            if(digito > *mayor){
                *mayor = digito;
            }
            *suma_impares += digito;
        }
        numero /= 10;
    }
}

void main(){
    int numero, mayor, suma_impares;

    printf("Ingrese una cadena de numeros: ");
    scanf("%d", &numero);

    ejercicio1(numero, &mayor, &suma_impares);
    printf("Cadena: %d.\n",numero);
    printf("mayor digito impar: %d. \n",mayor);
    printf("Suma impares: %d \n",suma_impares);
}