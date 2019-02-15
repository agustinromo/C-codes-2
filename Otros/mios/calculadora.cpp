
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
#include <conio.h> 
float base, altura, lado, lados, radio, apotema, PI= 3.1415926, a, Q; 
float ca, co, hip;
int letrita; 
int i; 
float n1, n2; 
int tecla; 
int suma; 
int resta; 
int multiplicacion; 
int division; 
int raiz; 
bool aux= true; 
int main()  
{   
char signo,r, s, c, t, l, p; 
    do 
	{
	printf(" 1 Suma\t               a Figuras g\n 2 Resta\t       b Hipotenusa\n 3 Multiplicacion\n 4 Division\n 5 Raiz\n 6 Potencia\n 7 Logaritmo b10\n 8 Seno\n 9 Cos\n 0 Tan\n"); 
    scanf("%s", &tecla);  
    if(tecla== '5') 
      {  
       scanf("%f%c",&n1,&signo); 
       printf("%f\n", sqrt(n1)); 
       printf("----------------------------------------------------------\n"); 
      }
    if(tecla== '1') 
     {   
      scanf("%f%c%f",&n1,&signo,&n2);  
      printf("%f\n", n1+n2); 
      printf("----------------------------------------------------------\n"); 
     } 
else if(tecla== '2') 
     { 
     scanf("%f%c%f",&n1,&signo,&n2); 
     printf("%f\n", n1-n2);  
     printf("----------------------------------------------------------\n"); 
     } 
else if(tecla== '3') 
     {  
     scanf("%f%c%f",&n1,&signo,&n2);
     printf("%f\n", n1*n2); 
     printf("----------------------------------------------------------\n"); 
     } 
else if(tecla== '4') 
     { 
     scanf("%f%c%f",&n1,&signo,&n2); 
     if(n2== 0) 
       { 
       printf("Error\n"); 
       printf("----------------------------------------------------------\n"); 
       } 
    else 
       { 
       printf("%f\n", n1/n2); 
       printf("----------------------------------------------------------\n"); 
       }
     } 
else if(tecla== '6') 
     {  
     scanf("%f%c%f",&n1,&signo,&n2);
     printf("%f\n", pow(n1,n2)); 
     printf("----------------------------------------------------------\n"); 
     } 
else if(tecla== '7') 
     {  
     scanf("%f%c", &n1,&signo); 
     printf("%f\n", log (n1) / log (10));  
	 printf("----------------------------------------------------------\n");  
     } 
else if(tecla== '8') 
     {   
     scanf("%f%c", &n1,&signo); 
     printf("%f\n",sin(n1*3.1415/180)); 
     printf("----------------------------------------------------------\n"); 
     } 
else if(tecla== '9') 
     {   
     scanf("%f%c", &n1,&signo);  
     printf("%f\n",cos(n1*3.1415/180)); 
     printf("----------------------------------------------------------\n"); 
     } 
else if(tecla== '0') 
     { 
	 scanf("%f%c", &n1,&signo); 
	 if(n1== 90)
	 { 
	 printf("Error\n"); 
	 printf("----------------------------------------------------------\n"); 
	 } 
	 else 
	 {   
     printf("%f\n",tan(n1*3.1415/180)); 
     printf("----------------------------------------------------------\n"); 
	 } 
     }   
else if(tecla== 'a') 
     { 
     printf(" 1 Triangulo\n 2 Rectangulo\n 3 Circulo\n 4 Poligono R\n"); 
     scanf("%S", &tecla); 
     if (tecla== '1') 
	{ 
	printf("Vamos entonces a calcular su area y perimetro\n"); 
	printf("Base\n"); 
	scanf("%f", &base); 
	printf("Altura\n"); 
	scanf("%f", &altura); 
	printf("area= %f\n", (base*altura)/2);  
	printf("perimetro= %f\n", base+altura*2); 
	printf("----------------------------------------------------------\n"); 
	} 
else if (tecla== '2') 
    { 
    printf("Vamos entonces a calcular su area y perimetro\n"); 
    printf("Dame la base de tu rectangulo\n"); 
    scanf("%f", &base); 
    printf("Ahora dame la altura\n"); 
    scanf("%f", &altura); 
    printf("El area del rectangulo es %f\n", base*altura); 
    printf("El perimetro del rectangulo es %f\n", 2*base+2*altura); 
    printf("----------------------------------------------------------\n"); 
    } 
else if (tecla== '3') 
    { 
    printf("Vamos entonces a calcular su area y perimetro\n"); 
    printf("Dame el radio de tu circulo\n");  
    scanf("%f", &radio);
    printf("El area del circulo es %f\n", PI*radio*radio); 
    printf("El perimetro del circulo es %f\n", 2*radio*PI); 
	printf("----------------------------------------------------------\n");  
    } 
else if (tecla== '4') 
    { 
    printf("Vamos entonces a calcular su area y perimetro\n");
	printf("Dame la base de tu poligono\n"); 
	scanf("%f", &base); 
	printf("Ahora dame la apotema\n"); 
	scanf("%f", &apotema); 
	printf("El perimetro del poligono es %f\n", 5*base); 
	printf("El area del poligono es %f\n", (5*base*apotema)/2);  
	printf("----------------------------------------------------------\n"); 
 
    }  

    }

 if(tecla== 'b') 
     { 
    printf("Dame el valor del cateto adyacente\n"); 
    scanf("%f", &ca); 
    printf("Ahora dame el valor del cateto opuesto\n"); 
    scanf("%f", &co); 
    printf("Ahora vamos a calcular la hipotenusa\n");  
    printf("La hipotenusa es %f\n", hip=sqrt((co*co)+(ca*ca))); 
    printf("El Seno del triangulo es %f\n", sin(co/hip*3.1415/180)); 
    printf("El Coseno del triangulo es %f\n", cos(co/hip*3.1415/180)); 
    printf("La Tangente del triangulo es %f\n", tan(co/hip*3.1415/180)); 
	printf("----------------------------------------------------------\n"); 
     } 
  if(tecla== 'Q') 
    { 
     return 0;
    }
	}while(aux==true);
    
}

