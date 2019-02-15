#include <stdio.h> 
#include <stdlib.h> 
int parola; 
int main() 
{   
    char letrita='s'; 
    while(letrita== 's') 
    {
    printf("Tecleame esta jejeje ntc pon 1\n"); 
    scanf("%s", &parola); 
    if(parola== '1') 
    { 
       printf("Hola Mundo!!!\n"); 
    } 
    else 
    { 
       printf("Mamas verga pues\n"); 
    } 
    printf("Deseas volver a intentarlo? s para si, cualquier otra tecla para no\n"); 
    scanf("%s", &letrita); 
    } 
    return 0; 
} 

   
