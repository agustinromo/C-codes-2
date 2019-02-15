#include <stdio.h>
#include <conio.h>

int n = 40;
int *num;
int main()
{
	num = &n;
	printf("%d\n",n);
	//printf("%d",*num);
	printf("direction of n is: %p",num); 
	getch();
}
