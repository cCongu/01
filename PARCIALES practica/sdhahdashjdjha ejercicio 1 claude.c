#include <stdio.h>

void ejercicio1 (int numero, int *menor_impar, int *cantidad_digi_iguales, int *digitos_encontrados){
    *menor_impar = -1;
    *cantidad_digi_iguales = 0;
    *digitos_encontrados = numero %10;
    int digito;

    while(numero > 0){
        digito = numero % 10;
        if(digito %2 != 0){
            if(*menor_impar == -1 || digito < *menor_impar){
                *menor_impar = digito;
            }
        }
        if(digito == *digitos_encontrados){
            (*cantidad_digi_iguales)++;
        }
        numero /= 10;
    }
}
void main(){
    int numero, menor,cant_digi,digitos_encontrados;
    printf("Ingresar cadena: ");
    scanf("%d", &numero);

    ejercicio1(numero, &menor, &cant_digi, &digitos_encontrados);
    printf("Cadena: %d, Menor impar: %d, Cantidad digitos iguales: hay %d (%d)",numero,menor,cant_digi,digitos_encontrados);
}