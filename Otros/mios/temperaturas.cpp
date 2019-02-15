#include <stdio.h> 
#include <stdlib.h> 
int main()
{
	float A[7],B[7]; 
	int i,dia; 
	float total; 
	printf("Ingrese las temperaturas de la semana\n"); 
	for(i=0;i<7;i++) 
	{
		scanf("%f",&A[i]);  
	}  
	for(i=0;i<7;i++)
	{
		total += A[i]; 
	} 
	printf("El promedio es %f°C\n",(total)/7); 
	printf("La diferencia de cada temperatura con respecto al promedio es de:\n");
	for(i=0;i<7;i++) 
	{
		B[i]=A[i]-((total)/7); 
		printf("%f\n",B[i]);  
	} 
	float menor,mayor; 
	menor = A[0]; 
	mayor = A[0];
	for(i=0;i<7;i++)
	{
		if(A[i]< menor){
	    menor=A[i];
		} 
	    if(A[i]>mayor){
		mayor=A[i];
		}
	}
	printf("La menor registrada fue de %f y la mayor de %f\n",menor,mayor);
	system("PAUSE");
}  
