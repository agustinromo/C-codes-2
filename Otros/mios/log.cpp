#include "stdio.h"
#include "math.h"
int main() 
{ 
    float a,b,log10;
    scanf("%f",&a); 
    
	b = fabs (a); 

	log10 = log (b) / log (10); 
	printf ("log en base 10 de (%lf) = %lf\n",b,log10);
} 
