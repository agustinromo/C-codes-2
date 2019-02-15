#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
    int matrizA[3][2]={{0}},i,j,col,fil; 
    for(i=0;i<3;i++) 
    { 
        for(j=0;j<2;j++) 
        { 
           scanf("%d", &matrizA[i][j]); 
        }
    } 
    for(i=0;i<3;i++) 
    {   
        printf("\n\t");
        for(j=0;j<2;j++) 
        { 
          printf("%6d",matrizA[i][j]); 
        }
    } 
    int matrizB[2][3]={{0}}; 
    for(i=0;i<2;i++) 
    { 
        for(j=0;j<3;j++) 
        { 
           scanf("%d", &matrizB[i][j]); 
        }
    } 
    for(i=0;i<2;i++) 
    {   
        printf("\n\t");
        for(j=0;j<3;j++) 
        { 
          printf("%6d",matrizB[i][j]); 
        }
    } 
    printf("\n"); 
    system("PAUSE");
}
