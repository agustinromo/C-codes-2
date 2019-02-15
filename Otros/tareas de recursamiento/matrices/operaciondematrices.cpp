#include <stdio.h> 
#include <math.h>    
int A,B,C,x; 
int f,c; 
int i,j,k,fil,col,fi,co,suma; 
int main() 
{ 
    printf("Dimensiones de la matriz A\n"); 
    scanf("%d",&f); 
    scanf("%d",&c); 
    printf("Dimensiones de la matriz B\n"); 
    scanf("%d",&fil); 
    scanf("%d",&col); 
    int A[f][c],B[fil][col],C[fi][co],x[f][col];
    { 
    for(i=1;i<=f;i++) 
      {  
      for(j=1;j<=c;j++) 
        { 
        printf("A[%d][%d]\n",i,j); 
        scanf("%d",&A[i][j]); 
        }
      } 
    for(i=1;i<=fil;i++) 
      { 
      for(j=1;j<=col;j++) 
        { 
        printf("B[%d][%d]\n",i,j); 
        scanf("%d",&B[i][j]); 
        }
      } 
	for(i=1;i<=f;i++) 
	  { 
	  for(j=1;j<=col;j++)  
	    { 
	    C[i][j]= A[i][j]+B[i][j]; 
	    printf("La suma %d\n",C[i][j]); 
	    }
	  }    
	for(i=1;i<=f;i++) 
	  { 
	  for(j=1;j<=col;j++)  
	    { 
	    C[i][j]= A[i][j]-B[i][j]; 
	    printf("La resta %d\n",C[i][j]); 
	    }
	  }  
	for(i=1;i<=f;i++) 
           { 
           for(j=1;j<=col;j++) 
             { 
             x[i][j]=0; 
             for(k=1;k<=c;k++) 
               { 
               x[i][j]=(x[i][j]+(A[i][k]*B[k][j])); 
               }
             }
           } 
           for(i=1;i<=f;i++) 
           { 
           for(j=1;j<=co;j++) 
           { 
           printf("El producto es %d\n", x[i][j]); 
           }
           }  
     	for(i=1;i<=f;i++) 
           { 
           for(j=1;j<=col;j++) 
             { 
             x[i][j]=0; 
             for(k=1;k<=c;k++) 
               { 
               x[i][j]=(x[i][j]+(A[i][k]*pow(B[k][j],-1))); 
               }
             }
           } 
           for(i=1;i<=f;i++) 
           { 
           for(j=1;j<=co;j++) 
           { 
           printf("La division es %d\n", x[i][j]); 
           }
           } 
    }  
} 

