/*
Una librería desea llevar el control de los libros disponibles en stock utilizando un vector de estructuras.

Cada libro posee la siguiente información:

Código numérico
Título
Autor
Precio
Cantidad en stock
*/
/*
#include <stdio.h>
#include <string.h>

#define MAX_LIBROS 100

// Definición de la estructura
typedef struct {
    int codigo;
    char titulo[50];
    char autor[50];
    float precio;
    int stock;
} Libro;

// Función para cargar datos
int cargar_libros(Libro libros[], int max) {
    int i = 0;
    int codigo;

    printf("=== CARGA DE LIBROS ===\n");
    while (i < max) {
        printf("\nIngrese codigo del libro (0 para terminar): ");
        scanf("%d", &codigo);

        if (codigo == 0) 
            i;

        libros[i].codigo = codigo;

        printf("Ingrese titulo: ");
        getchar(); // limpiar buffer
        fgets(libros[i].titulo, sizeof(libros[i].titulo), stdin);
        libros[i].titulo[strcspn(libros[i].titulo, "\n")] = '\0'; // quitar salto

        printf("Ingrese autor: ");
        fgets(libros[i].autor, sizeof(libros[i].autor), stdin);
        libros[i].autor[strcspn(libros[i].autor, "\n")] = '\0';

        printf("Ingrese precio: ");
        scanf("%f", &libros[i].precio);

        printf("Ingrese cantidad en stock: ");
        scanf("%d", &libros[i].stock);

        i++;
    }
    return i; // cantidad de libros cargados
}

// Función para mostrar listado
void mostrar_libros(Libro libros[], int cantidad) {
    printf("\n=== LISTADO DE LIBROS ===\n");
    printf("%-10s %-30s %-20s %-10s %-10s\n", "Codigo", "Titulo", "Autor", "Precio", "Stock");
    printf("-------------------------------------------------------------------------------\n");

    for (int i = 0; i < cantidad; i++) {
        printf("%-10d %-30s %-20s %-10.2f %-10d\n",
               libros[i].codigo,
               libros[i].titulo,
               libros[i].autor,
               libros[i].precio,
               libros[i].stock);
    }
}

int main() {
    Libro libreria[MAX_LIBROS];
    int cantidad;

    cantidad = cargar_libros(libreria, MAX_LIBROS);
    mostrar_libros(libreria, cantidad);

    return 0;
}
*/
#include <stdio.h>
#include <string.h>

#define MAX_LIBROS 100
#define STOCK_MINIMO 5

typedef struct {
    int codigo;
    char titulo[50];
    char autor[50];
    float precio;
    int stock;
} Libro;

typedef struct {
    int codigo;
    int stock;
} Pedido;

// Cargar libros
int cargarLibros(Libro lista[], int cantidadMaxima) {
    int indice;
    int codigoIngresado;

    indice = 0;
    codigoIngresado = -1;

    while (indice < cantidadMaxima && codigoIngresado != 0) {
        printf("\nIngrese codigo (0 para terminar): ");
        scanf("%d", &codigoIngresado);

        if (codigoIngresado != 0) {
            lista[indice].codigo = codigoIngresado;

            printf("Ingrese titulo: ");
            getchar();
            fgets(lista[indice].titulo, 50, stdin);
            lista[indice].titulo[strcspn(lista[indice].titulo, "\n")] = '\0';

            printf("Ingrese autor: ");
            fgets(lista[indice].autor, 50, stdin);
            lista[indice].autor[strcspn(lista[indice].autor, "\n")] = '\0';

            printf("Ingrese precio: ");
            scanf("%f", &lista[indice].precio);

            printf("Ingrese stock: ");
            scanf("%d", &lista[indice].stock);

            indice = indice + 1;
        } else {
            codigoIngresado = 0; 
        }
    }
    return indice;
}

// Mostrar libros
void mostrarLibros(Libro lista[], int cantidad) {
    int indice;
    printf("%-10s %-30s %-20s %-10s %-10s\n", "Codigo", "Titulo", "Autor", "Precio", "Stock");
    for (indice = 0; indice < cantidad; indice = indice + 1) {
        printf("%-10d %-30s %-20s %-10.2f %-10d\n",
               lista[indice].codigo,
               lista[indice].titulo,
               lista[indice].autor,
               lista[indice].precio,
               lista[indice].stock);
    }
}

// Ordenar por título ascendente
void ordenarPorTitulo(Libro lista[], int cantidad) {
    int i, j;
    Libro auxiliar;
    for (i = 0; i < cantidad - 1; i = i + 1) {
        for (j = i + 1; j < cantidad; j = j + 1) {
            if (strcmp(lista[i].titulo, lista[j].titulo) > 0) {
                auxiliar = lista[i];
                lista[i] = lista[j];
                lista[j] = auxiliar;
            }
        }
    }
}

// Ordenar por stock descendente
void ordenarPorStock(Libro lista[], int cantidad) {
    int i, j;
    Libro auxiliar;
    for (i = 0; i < cantidad - 1; i = i + 1) {
        for (j = i + 1; j < cantidad; j = j + 1) {
            if (lista[i].stock < lista[j].stock) {
                auxiliar = lista[i];
                lista[i] = lista[j];
                lista[j] = auxiliar;
            }
        }
    }
}

// Ordenar por código ascendente
void ordenarPorCodigo(Libro lista[], int cantidad) {
    int i, j;
    Libro auxiliar;
    for (i = 0; i < cantidad - 1; i = i + 1) {
        for (j = i + 1; j < cantidad; j = j + 1) {
            if (lista[i].codigo > lista[j].codigo) {
                auxiliar = lista[i];
                lista[i] = lista[j];
                lista[j] = auxiliar;
            }
        }
    }
}


int buscarPorCodigo(Libro lista[], int cantidad, int codigoBuscado, int *posicion) {
    int inicio, fin, medio;
    int encontrado;

    inicio = 0;
    fin = cantidad - 1;
    encontrado = 0;

    while (inicio <= fin && encontrado == 0) {
        medio = (inicio + fin) / 2;
        if (lista[medio].codigo == codigoBuscado) {
            *posicion = medio;
            encontrado = 1;
        } else if (codigoBuscado < lista[medio].codigo) {
            fin = medio - 1;
        } else {
            inicio = medio + 1;
        }
    }
    return encontrado; 
}

// Informe: libro más caro
int posicionLibroMasCaro(Libro lista[], int cantidad) {
    int indice;
    int posicion;
    posicion = 0;
    for (indice = 1; indice < cantidad; indice = indice + 1) {
        if (lista[indice].precio > lista[posicion].precio) {
            posicion = indice;
        }
    }
    return posicion;
}

// Informe: stock bajo
void mostrarLibrosStockBajo(Libro lista[], int cantidad) {
    int indice;
    for (indice = 0; indice < cantidad; indice = indice + 1) {
        if (lista[indice].stock < STOCK_MINIMO) {
            printf("%d - %s - Stock: %d\n",
                   lista[indice].codigo,
                   lista[indice].titulo,
                   lista[indice].stock);
        }
    }
}

// Informe: valor total inventario
float calcularValorInventario(Libro lista[], int cantidad) {
    int indice;
    float total;

    total = 0;

    for (indice = 0; indice < cantidad; indice = indice + 1) {
        total = total + (lista[indice].precio * lista[indice].stock);
    }

    return total;
}

int main() {
    Libro libreria[MAX_LIBROS];
    Pedido pedidos[MAX_LIBROS];
    int cantidadLibros;
    int codigoBuscado;
    int posicionEncontrada;
    int encontrado;
    int posicionCaro;
    float valorInventario;
    int cantidadPedidos;

    cantidadLibros = cargarLibros(libreria, MAX_LIBROS);

    printf("\n=== LISTADO COMPLETO ===\n");
    mostrarLibros(libreria, cantidadLibros);

    ordenarPorTitulo(libreria, cantidadLibros);
    printf("\n=== ORDENADO POR TITULO ===\n");
    mostrarLibros(libreria, cantidadLibros);

    ordenarPorStock(libreria, cantidadLibros);
    printf("\n=== ORDENADO POR STOCK ===\n");
    mostrarLibros(libreria, cantidadLibros);

    ordenarPorCodigo(libreria, cantidadLibros);
    printf("\n=== ORDENADO POR CODIGO ===\n");
    mostrarLibros(libreria, cantidadLibros);

    printf("\nIngrese codigo a buscar: ");
    scanf("%d", &codigoBuscado);
    encontrado = buscarPorCodigo(libreria, cantidadLibros, codigoBuscado, &posicionEncontrada);
    if (encontrado == 1) {
        printf("Libro encontrado: %s\n", libreria[posicionEncontrada].titulo);
    } else {
        printf("No se encontro el libro.\n");
    }

    posicionCaro = posicionLibroMasCaro(libreria, cantidadLibros);
    printf("\nLibro mas caro: %s\n", libreria[posicionCaro].titulo);

    printf("\n=== LIBROS CON STOCK BAJO ===\n");
    mostrarLibrosStockBajo(libreria, cantidadLibros);

    valorInventario = calcularValorInventario(libreria, cantidadLibros);
    printf("\nValor total inventario: %.2f\n", valorInventario);

    cantidadPedidos = generarPedidos(libreria, cantidadLibros, pedidos, MAX_LIBROS);
    printf("\n=== TABLA DE PEDIDOS (stock < %d) ===\n", STOCK_MINIMO);
    mostrarPedidos(pedidos, cantidadPedidos);

    return 0;
}