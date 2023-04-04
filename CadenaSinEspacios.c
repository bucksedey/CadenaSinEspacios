/*Equipo Chilly Willy's
Dado un vector que contiene un texto de tamaño N, eliminar los espacios en blanco (compactar la frase)
*/
#include <stdio.h>
#include <string.h>
#define N 100 // Define el tamaño máximo de la cadena de texto

int main() {
    char texto[N]; // Declara una cadena de texto de tamaño N
    size_t i, j = 0; 
    size_t len; // Variable para almacenar la longitud del texto
    printf("Introduce el texto: "); 
    fgets(texto, N, stdin); // Lee el texto introducido por el usuario
    len = strlen(texto); // Calcula la longitud del texto
    for (i = 0; i < len; i++) { // Recorre cada caracter del texto
        if (texto[i] != ' ') { // Si el caracter no es un espacio en blanco
            texto[j++] = texto[i]; // Lo copia en otra posición de la misma cadena
        }
    }
    texto[j] = '\0'; // Agrega el caracter nulo al final de la cadena resultante
    printf("Texto sin espacios: %s\n", texto); // Muestra el texto resultante sin espacios en blanco
    return 0;
}