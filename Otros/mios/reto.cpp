#include <stdio.h> 
#include <math.h> 
#include <conio.h>  
float n1,n2; 
int signo,signo1; 
int cuadrante1(float n1,float n2); 
int cuadrante2(float n1,float n2);  
int cuadrante3(float n1,float n2); 
int cuadrante4(float n1,float n2);
int main()
{
	scanf("%c%f",&signo,&n1);  
	scanf("%c%f",&signo1,&n2); 
	if(signo=='+' && signo1=='+')
	{
		cuadrante1(n1,n2); 
		}  
	else if(signo=='-' && signo1=='+') 
	{
		cuadrante2(n1,n2);
		} 
	else if(signo=='-' && signo1=='-')
	{
		cuadrante3(n1,n2);
		} 
	else if(signo=='+' && signo1=='-') 
	{
		cuadrante4(n1,n2);
		} 
	getch (); 
} 
int cuadrante1(float n1,float n2) 
{
	switch(signo && signo1)  
	{
		case '+'&&'+': printf("%f\n%f\n",sqrt((n1*n1)+(n2*n2)),atan(n2/n1)); 
		               break; 
		default : printf("Error\n"); 
 	} 
} 
int cuadrante2(float n1,float n2)
{
	switch(signo && signo1)
	{
		case '-'&&'+': printf("%f\n%f\n",sqrt((n1*n1)+(n2*n2)),(atan(n2/n1))+90);  
		               break; 
		default : printf("Error\n");
	}
} 
int cuadrante3(float n1,float n2)
{
	switch(signo && signo1)
	{
		case '-'&&'-': printf("%f\n%f\n",sqrt((n1*n1)+(n2*n2)),(atan(n2/n1))+180);  
		               break; 
		default : printf("Error\n");
	}
} 
int cuadrante4(float n1,float n2)
{
	switch(signo && signo1)
	{
		case '+'&&'-': printf("%f\n%f\n",sqrt((n1*n1)+(n2*n2)),(atan(n2/n1))+270);  
		               break; 
		default : printf("Error\n");
	}
} 
