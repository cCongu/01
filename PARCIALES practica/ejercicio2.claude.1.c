#include <stdio.h>
#include <stdbool.h>
#define MAX 500
typedef float tvector[MAX];

void ejercicio2_claude (tvector vector, int ml, float *promedio, int *indice_mayor){  // indice mayor --> vector [1] y vector[2] es mayor el indice [2]

    float suma = 0.0;
    int i = 0,cantidad = 0;
    *indice_mayor = 0;

    while (i < ml){
        
        if(vector[i] > 0){
            suma += vector[i];
            cantidad += 1;
        }
        if(vector[i] > vector[*indice_mayor]){ 
            *indice_mayor = i;
        }
        i += 1;
    }
    if(cantidad > 0){
        *promedio = suma / cantidad;
    }
    else{
        *promedio = 0.0;
    }
}
