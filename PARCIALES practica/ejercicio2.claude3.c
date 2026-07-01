#include <stdio.h>
#include <stdbool.h>
#define MAX 500
typedef float tvector[MAX];

void ejercicio2 (tvector vector, int ml, float *promedio, int *indice_mayor){
    
    *indice_mayor = 0;
    float suma = 0.0;
    int i = 0, cantidad = 0;

    while (i < ml){
        
        if(vector[i] > 0){ //sacar promedio de todos los elementos mayores a cero
            suma += vector[i];
            cantidad++;
        }
        if(vector[i] > vector[*indice_mayor]){
            *indice_mayor = i;
        }
        i++;
    }
    if(cantidad > 0){
        *promedio = suma / cantidad;
    }
    else{
        *promedio = 0.0;
    }
}