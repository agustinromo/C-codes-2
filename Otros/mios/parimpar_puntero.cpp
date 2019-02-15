#include <stdio.h>
#include <conio.h>

int n, *num=&n;
int main()
{
	scanf("%d",&n);
	if(n % 2 == 0)
	{
		printf("%d Es par y su posicion es %p\n",n,num);
	}
	else
	{
		printf("%d Es impar y su posicion es %p\n",n,num); 
	}
	getch();
}
