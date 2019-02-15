#include <stdio.h> 
#include <math.h> 
int p;
float n1,r;
char var,x,y,rvar;   
int derivada; 
int derivar(int derivada);  
bool aux= true;
int main() 
{  
	do{ 
	scanf("%f%c%d",&n1,&var,&p);  
	derivar(derivada); 
    }while(aux==true); 
} 
int derivar(int derivada) 
{   
	r= n1*p;
	//printf("%d",r); 
	rvar=pow(var,p-1);  
	printf("%f%c%d\n",r,rvar,p-1);
} 

