#include <stdio.h>
#include <stdbool.h>
#define MAX 100
typedef int t_vector[MAX];

/*
void v_orden_ascendente (t_vector vector, int *ml, int numero, bool *logro_ordenarlo){

    int i = *ml -1;

    if(*ml >= MAX){
        *logro_ordenarlo = false;
    }
    else{
    /recorre el vector hacia atras desplazando los elementos mayores
        while(i >= 0 && vector[i] > numero){  // ---> i >= 0, i solo va a tener indices apartir del 0 sino no existe, vector[i] > numero ordena de menor a mayor 
            vector[i + 1] = vector[i]; // ---> como lo leo hacia atras tengo que asignar [i + 1] 
            i--;
        }
        vector[i + 1] = numero; //agrega un numero se asigna una nueva posicion ---> {1,2,4,6} agrego {5} ---> {1,2,4,5,6}
        (*ml)++; // incrementa el maximo logico apartir de los numeros ingresados
        *logro_ordenarlo = true;
    }
}
*/

////////////////////////////
void ejercicio_2 (t_vector vector, int *ml, int numero, bool *ordenado_asc){

    int i = ml - 1;

    if(*ml >= MAX){
        *ordenado_asc = false;
    }
    else{
        while(i >= 0 && vector[i] > numero){
            vector[i + 1] = vector[i];
            i--;
        }
        vector[i + 1] = numero;
        (*ml)++;
        *ordenado_asc = true;
    }
}