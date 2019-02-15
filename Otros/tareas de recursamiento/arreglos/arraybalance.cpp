#include <stdio.h> 
#include <conio.h> 
int main() 
{ 
    double balance[5]= {1000.0, 2.0,3.4,17.0,50.0};  
	double *p; 
	int i; 
	p= balance; 
	printf("Valores del arreglo usando punteros\n"); 
	for (i=0; i<5; i++) 
	{ 
	  printf(" *( p + %d ) : %f\n",i,( p + i )); 
	}  
	printf("Valores del arreglo usando balances como direccion\n"); 
	for (i=0; i<5; i++) 
	{ 
	  printf(" *( balance + %d ) : %f\n",i,( balance + i ));
	} 
	getch();
}
