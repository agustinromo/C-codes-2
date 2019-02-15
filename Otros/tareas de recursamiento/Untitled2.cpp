#include <stdio.h> 
#include <conio.h> 
int main() 
{  
int dia; 
char tecla= '8';  
while(tecla='8') 
{ 
    printf("Dame los dias en numero\n"); 
    scanf("%s",&dia); 
    switch(dia) 
    { 
    case '1': printf("Domingo\n"); 
              break;  
    case '2': printf("Lunes\n"); 
              break; 
    case '3': printf("Martes\n"); 
              break; 
    case '4': printf("Miercoles\n"); 
              break; 
	case '5': printf("Jueves\n"); 
              break;  
    case '6': printf("Viernes\n"); 
              break;  
    case '7': printf("Sabado\n"); 
              break; 
    case '8': printf(":3\n"); 
              return 0;
    default : printf("Numero invalido\n"); 
    } 
}
    getch(); 
}
