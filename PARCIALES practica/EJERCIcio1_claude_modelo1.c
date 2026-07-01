#include <stdio.h>

void ejercicio_1(int numero, int *menor_impar, int *cant_digitos_iguales, int *digito_encontrado){
    *menor_impar = -1;
    *cant_digitos_iguales = 0;
    int digito; 
    *digito_encontrado = numero % 10;

    while (numero > 0){
        digito = numero % 10;
        if(digito % 2 != 0){
            if(*menor_impar == -1 || digito < *menor_impar){
                *menor_impar = digito;
            }
        }
        if(digito == *digito_encontrado){
            (*cant_digitos_iguales)++;
        }
        numero /= 10;
    }
}

void main(){
    int numero, menor_impar, cant_digitos_iguales, digito_encontrado;

    printf("Ingresar una cadena de numeros: ");
    scanf("%d", &numero);

    ejercicio_1(numero, &menor_impar, &cant_digitos_iguales,&digito_encontrado);
    printf("Cadena: %d, Menor impar: %d, Cantidad digitos iguales: hay %d (%d) ",numero,menor_impar,cant_digitos_iguales, digito_encontrado);
}