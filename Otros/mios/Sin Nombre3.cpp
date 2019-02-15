#include <stdio.h> 
#include <conio.h>  
int main()
{
	int i; 
	float R=0; 
	int vec[3]={0,1,2}; 
	float A[3],B[3],C[3]; 
	float A1,A2,A3,B1,B2,B3,C1,C2,C3; 
	printf("Ingresa los valores del vector A\n");
	for(i=0;i<3;i++)
	{
		printf("%d=",vec[i]); 
		scanf("%f",&A[i]); 
		} 
		for(i=0;i<3;i++)
		{
			printf("%f\n",A[i]); 
			} 
	printf("Ingresa los valores del vector B\n");
	for(i=0;i<3;i++)
	{
		printf("%d=",vec[i]); 
		scanf("%f",&B[i]); 
		} 
		for(i=0;i<3;i++)
		{
			printf("%f\n",B[i]); 
			} 
		for(i=0;i<3;i++) 
		{
			if(vec[i]/1==0)
			A1=A[i]; 
			else if(vec[i]/1==1)
			{
				B2=B[i];
				}
			} 
				printf("\t%f",A1*B2);
		getch();
}
