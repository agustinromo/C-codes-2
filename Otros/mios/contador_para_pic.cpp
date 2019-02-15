#include <stdio.h>  
#include <conio.h>
#define LIMITE 8 
int main() 
{
	int contador,termino=1; 
	int suma; 
	suma=0; 
	contador=0; 
	while(contador/2<LIMITE)
	{
		printf("%d",termino);
		contador +=1; 
		if(termino%3==0)
		suma += termino; 
		termino =++contador+termino; 
		}
		printf("%d\n",suma); 
		getch();
}
