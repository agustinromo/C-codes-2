#include <stdio.h> 
#include <conio.h> 
float n1,n2;
float suma(float n1,float n2);  
float resta(float n1,float n2); 
float mult(float n1,float n2);
float div(float n1,float n2); 
int main()
{ 
	scanf("%f",&n1); 
	scanf("%f",&n2);
	suma(n1,n2); 
	resta(n1,n2); 
	mult(n1,n2); 
	div(n1,n2); 
	getch();
} 
float suma(float n1,float n2)
{
	printf("%f\n",n1+n2);
} 
float resta(float n1,float n2)
{
	printf("%f\n",n1-n2); 
} 
float mult(float n1,float n2)
{
	printf("%f\n",n1*n2); 
} 
float div(float n1,float n2)
{
	printf("%f\n",n1/n2);
}
