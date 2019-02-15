#include <stdio.h> 
#include <conio.h>
int main()
{ 
	int n,i;
	int total=0,mayor,otro;   
	printf("Ingresa la cantidad de elementos del arreglo\n"); 
	scanf("%d",&n); 
	int var[n];
	if(n>20)
	{
		printf("Esa cantidad no es valida\n"); 
		return 0; 
	} 
	else
	{
		printf("Ingresa los valores del arreglo\n"); 
		for(i=0;i<n;i++)
		{
			scanf("%d",&var[i]);
		}
	} 
	mayor= var[0];
	for(i=0;i<n;i++)
	{
		if(var[i]%2==0)
		{
			mayor=var[i];
		}
	} 
	otro= var[0];
	for(i=0;i<n;i++) 
	{
		if(var[i]%2!=0)
		{
			otro=var[i];
		}
	} 
	for(i=0;i<n;i++)
	{
		total+= var[i]; 
	}
	printf("%d/%d/%d\n",mayor,otro,total);
	getch();
}
