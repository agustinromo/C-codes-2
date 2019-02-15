#include <stdio.h>  
#include <conio.h>
int n1,in; 
bool aux=3;
int main()
{
	
	do{
		printf("Ingresa 1\n");
		scanf("%d",n1); 
		if(n1==1)
		{
			printf("MUY BIEN :333"); 
			//getch(); 
			} 
		else 
		{
			printf("vuelve a intentarlo\n"); 
			scanf("%d",n1);
			}
		}while(aux==3);
		//printf("na we ya te la pelaste, fueron mas de tres intentos"); 
		getch();
}
