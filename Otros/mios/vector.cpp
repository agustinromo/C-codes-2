#include <stdio.h> 
#include <stdlib.h>  
#include <math.h>
int main() 
{ 
	float vectorA[3],vectorB[3],vectorC[3]; 
	int i; 
	float r,total=0;
	printf("Ingresa los valores del vector A\n"); 
	for(i=0;i<3;i++)
	{ 
		scanf("%f",&vectorA[i]);
	}  
	printf("\t");
	for(i=0;i<3;i++) 
	{ 
		printf("\n%f\n",vectorA[i]); 
	} 
	printf("\nAhora ingresa los valores del vector B\n"); 
	for(i=0;i<3;i++)
	{ 
		scanf("%f",&vectorB[i]);
	}  
	printf("\t");
	for(i=0;i<3;i++) 
	{ 
		printf("\n%f\n",vectorB[i]); 
	} 
	for(i=0;i<3;i++) 
	{  
		vectorC[i]=vectorA[i]+vectorB[i]; 
		printf("Vector resultante\n%f\n",vectorC[i]);
	}  
	float c[i];
	for(i=0;i<3;i++) 
	    { 
		  c[i]=(pow(vectorC[i],2)); 
		  printf("\n%f\n",c[i]);
		} 
	for(i=0;i<3;i++) 
	{ 
		total += c[i];  
	} 
		printf("\n%f\n",total); 

		r=sqrt(total); 
	    printf("La magnitud del vector C es: %f\n",r); 
	    printf("\n");
		system("PAUSE"); 
}   
// r=sqrt(pow(vectorC[i],2)); 
//r=sqrt(pow(total,2))
 //total += vectorC[i];
	 



