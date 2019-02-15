#include <stdio.h>  
#include <conio.h>
char a[1],b[1],c[1];
int mensaje();
int main()
{
	printf("Ingrese dato\n"); 
	scanf("%s%s%s",&a,&b,&c); 
	mensaje(); 
	getch();
} 
int mensaje() 
{ 
	if(a='y' && b='e' && c='s')
	{
		printf("ok\n"); 
		} 
		else
		{
			printf("Invalid\n"); 
			} 
}
