#include <stdio.h> 
#include <conio.h> 
#include <stdlib.h>
int main() 
{     
   system("color 1e");
    int i,j,suma;
    int A[]={1,5,7,9};
    int B[]={11,15,23,45};  
    for(i=0;i<4;i++) 
    { 
       for(j=0;j<4;j++) 
       {  
          if(i==j) 
		  { 
		  printf("%d\n",suma=suma+A[i]*B[j]);   
		  } 
       }
    }
    getch ();  
}
