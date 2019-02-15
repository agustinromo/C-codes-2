#include <stdio.h> 
#include <conio.h>   
int main()   
{    
	int i, j; 
    int conja[10]= {1,2,3,4,5,6,7,8,9,10}; 
    int conjb[7]= {2,3,5,7,11,13,17};  
    for(i=0; i<10; i++) 
    printf("%d\t", conja[i]); 
	for(j=0; j<8; j++) 
	printf("%d\t", conjb[j]); 
	printf("La interseccion:\n"); 
	for(i=0; i<10; i++) 
	for(j=0; j<8; j++) 
	if(conja[i]==conjb[j]) 
	{ 
	  printf("%d\t", conja[i]);
	}
	getch();   
}
