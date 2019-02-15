#include <stdio.h> 
#include <stdlib.h> 
#define MAX 128
char p[MAX]; 
int ingles; 
int espanol;  
int seleccion(int ingles, int espanol);  
int main() 
{   
    printf("Traductor de palabras\n");
    scanf("%s", &p);  
    seleccion(ingles,espanol);  
    return 0;
}  
int seleccion(int ingles, int espanol) 
//http://es.wikihow.com/comparar-dos-cadenas-en-programaci%C3%B3n-C 
