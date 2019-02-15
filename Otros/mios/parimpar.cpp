#include <stdio.h>  
#include <conio.h> 
bool aux= true;
int main() 
{   
    do{
    
    int n1;
    printf("Pares e impares\n"); 
    scanf("%d",&n1);  
    if(n1%2== 0) 
      { 
      printf("Es un numero par\n"); 
      } 
     else 
      { 
      printf("Es un numero impar\n"); 
      }  
      }while(aux==true);
      getch(); 
}
