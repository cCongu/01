#include <stdio.h>

void ejercicio1 (int numero, int *mayor_impar, int *suma_impares){
    *mayor_impar = -1;
    *suma_impares = 0;
    int digitos;

    while (numero > 0){
        digitos = numero % 10;
        if(digitos % 2 != 0){
            if(digitos > *mayor_impar){
                *mayor_impar = digitos;
            }
            *suma_impares += digitos;
        }
        numero /= 10;
    }
}

void main(){
    int numero, mayor_impar, suma_impares;
    printf("Ingrese una cadena: ");
    scanf("%d", &numero);

    ejercicio1(numero, &mayor_impar, &suma_impares);
    printf("Cadena: %d, Mayor impar: %d, Suma impares: %d",numero,mayor_impar,suma_impares);
}