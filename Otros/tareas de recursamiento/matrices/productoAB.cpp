#include <stdio.h> 
#include <conio.h> 
bool aux= true; 
int main() 
{   
    do
	{
    int f, c, fi, co, i, j, k; 
    printf("Programa calculador del producto de 2 matrices A&B\n"); 
    printf("A\n"); 
    scanf("%d",&f); 
    scanf("%d",&c); 
    printf("B\n"); 
    scanf("%d",&fi); 
    scanf("%d",&co); 
    int a[f][c],b[fi][co],x[f][co]; 
    { 
    for(i=1;i<=f;i++) 
      { 
      for(j=1;j<=c;j++) 
        { 
        printf("Elemento a[%d][%d]\n",i,j);
        scanf("%d",&a[i][j]); 
        }
      } 
      for(i=1;i<=fi;i++) 
        {  
        for(j=1;j<=co;j++) 
          { 
          printf("Elemento b[%d][%d]\n",i,j); 
          scanf("%d",&b[i][j]); 
          }
        } 
        for(i=1;i<=f;i++) 
           { 
           for(j=1;j<=co;j++) 
             { 
             x[i][j]=0; 
             for(k=1;k<=c;k++) 
               { 
               x[i][j]=(x[i][j]+(a[i][k]*b[k][j])); 
               }
             }
           } 
           printf("Producto A*B=Matriz C\n"); 
           for(i=1;i<=f;i++) 
           { 
           for(j=1;j<=co;j++) 
           { 
           printf("\t%d\n", x[i][j]); 
           }
           } 
           }
		   
    } 
    while(aux==true);
    getch(); 
}
