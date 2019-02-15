#include <stdio.h> 
#include <conio.h> 
int main() 
{ 
    int n1; 
    char nomb[30];
    printf("Cual es tu nombre?\n"); 
    scanf("%s", &nomb); 
    printf("Ahora dime en que año ingresaste la universidad\n"); 
    scanf("%d", &n1); 
    if(n1==2012) 
     { 
      printf("Muy bien %s tu matricula es UP120081\n",nomb); 
     } 
    else if(n1==2013) 
     { 
      printf("Muy bien %s tu matricula es UP130396\n",nomb); 
     } 
    else 
     { 
      printf("Lo siento %s no hay datos de ti\n",nomb); 
     }
     getch();
}
