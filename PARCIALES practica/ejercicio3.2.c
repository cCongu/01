#include <stdio.h>
#include <stdbool.h>
#define CANTCOLS 25
#define CANTFILAS 15
typedef char tmatriz[CANTFILAS][CANTCOLS];

int buscar_cadena_filas (tmatriz matriz, int mlf, int mlc, char clave){
    
    int i, j;
    int cant_filas = 0;
    bool encontrado;

    for(i = 0; i < mlf; i++){

        j = 0;
        encontrado = false;

        while(j < mlc && !encontrado){
            
            if(matriz[i][j] == clave){
                encontrado = true;
            }
            j++;
        }
        if(encontrado){
            cant_filas++;
        }
    }
    return cant_filas;
}