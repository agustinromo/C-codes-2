#include <stdio.h> 
#include <conio.h> 
int main()
{
	int i,n1; 
	int total=0; 
	int mayor,otro;
	int var[10]={0,1,2,3,4,5,6,7,8,9}; 
	int arr[10];
	for(i=0;i<=9;i++)
	{ 
	 printf("%d=",var[i]); 
	 scanf("%d",&arr[i]); 
	} 
	for(i=0;i<=9;i++){
		if(var[i]%2==0) 
		{
			total += arr[i]; 
		} 
	}   
	mayor = arr[0];
	for(i=0;i<=9;i++)
	{
		if(var[i]%2!=0)
		{
			
		if(arr[i]>mayor)
			{
				mayor=arr[i];  
			}
	    } 
	} 
	otro = arr[0]; 
	for(i=0;i<=9;i++)
	{
		if(arr[i]%2==0)
		{
			if(arr[i]>otro)
			{
				otro=var[i]; 
				}
			}
		} 
	printf("%d/%d/%d\n",total,mayor,otro);
	getch();
}
