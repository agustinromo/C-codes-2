#include <stdio.h>
#include <conio.h>

int n = 3, *p_n = &n; //cada variable con su respectivo puntero
float n2 = 5, *p_n2 = &n2;
char n3 = 'a', *p_n3 = &n3; 
int main()
{
		printf("data of n is: %d\n",*p_n); //Indicamos las posiciones de las variables en memoria, usando sus respectivos 
		printf("data of n2 is: %f\n",*p_n2); //punteros
		printf("data of n3 is: %c\n",*p_n3); 
	    getch();
}
