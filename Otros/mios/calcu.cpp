#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
#include <conio.h> 
float base, altura, lado, lados, radio, apotema, PI= 3.1415926, a, Q; 
float ca, co, hip;
int letrita; 
int i; 
float n1, n2,n3, A, B; 
int tecla; 
int suma; 
int resta;  
int multiplicacion; 
int division; 
int raiz; 
char signo,r, s, c, t, l, p; 
bool aux= true; 
int main()  
{   
    do{
    scanf("%f%c%f",&n1,&signo,&n2);                  
    switch(signo)  
    { 
    case '+': A= n1+n2; printf("%f",A);  
            break;                        
    case '-': A= n1-n2; printf("%f",A); 
            break;  
    case '*': A= n1*n2; printf("%f",A); 
            break; 
    case '/': A= n1/n2; if(n2==0){ 
    printf("Error\n");
    } else{ 
    printf("%f",A);
    }
            break; 
    case 'r': A= sqrt(n1); printf("%f",A); 
            break;  
    case 'p': A= pow(n1,n2); printf("%f",A); 
            break; 
    case 'l': A= log(n1)/log(10); printf("%f",A);  
            break; 
    case 's': A= sin(n1*3.1415/180); printf("%f",A); 
            break; 
    case 'c': A= cos(n1*3.1415/180); printf("%f",A); 
            break; 
    case 't': A=tan(n1*3.1415/180); if(n1==90){ 
    printf("Error\n");
    } else{ 
    printf("%f",A);  
    } 
            break;  
    default: printf("No mames\n"); 
    }   
    getch ();  
    //system ("cls");
    }while(aux==true);  
} 

