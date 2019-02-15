#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>    //tolower

#define MAX 128
//prototipo de funciones.
void encriptar(char frase[MAX],int numero);
void desencriptar(char frase[MAX],int numero);
//Constantes para el tipo de cifrado
//Si quisieras hacerlo con mayúsculas deberías
//intercambiar 97 por 65 y 122 por 90
const int tipoMIN = 97;
const int tipoMAX = 122;

//Códigos ascii
//48 a 57 números 0 al 9
//65 a 90 letras mayúsculas
//97 al 122 letras minúsculas


//Procedimiento principal.
int main()
{ 
	//Variables necesarias
	int x;
	char cadena[MAX];
	//Presentación
	printf("Encriptacion/Desencriptacion:\n");
	printf("        METODO ELINV:\n");
	printf("-----------------------------\n");
	printf("introduce una cadena a ENCRIPTAR:\t");
	//Un especificador que admite texto:
	scanf("%128[^\n]", cadena);
	//Vacía el buffer del teclado
	while(getchar()!='\n');
	//Pedimos el número
	printf("\nPor favor:\n\tingresa un numero entre 4 y 25:\t");
	//Ciclo mientras no se cumple esa premisa
	while (true)
	{
		scanf("%d",&x);
		if (x <= 25 && x >= 4)
		{
			break;
		}
		else
		{
             	printf("\nEl numero no se halla en el rango establecido(4/25)\n");
             	system("PAUSE >> NULL");
             	system("cls");
              	printf("\nPor favor:\n\tvuelve a ingresar un numero entre 4 y 25:\t");                               	
          }
		//Vacía el buffer del teclado
		while(getchar()!='\n');
	};
	//Vacía el buffer del teclado
	while(getchar()!='\n');
	//Limpiamos la pantalla
     system("cls");	
	//Llamamos a la función encriptar
	encriptar(cadena, x);
	getchar();
	//Llamamos a la función desencriptar
	desencriptar(cadena, x);
	getchar();
	//Salimos
	return 0;
} 
//Función para desencriptar método Elinv
void desencriptar(char frase[MAX],int numero)
{ 
	int i=0;
	int codascii = 0;
	while(frase[i]!='\0')
	{
		//Tomamos el código ascii
		if (frase[i]>=tipoMIN && frase[i]<=tipoMAX)
		{
			if (frase[i]-numero < tipoMIN && frase[i]-numero >= (tipoMIN-numero))
			{
				codascii = tipoMAX - (tipoMIN - (frase[i]-numero));
			}
			else
			{
				codascii = frase[i]-numero;
			}
		}
		else
		{
			codascii = frase[i]-numero;
		}
		frase[i]=codascii;
		i++;
	}
	printf("Encriptacion/Desencriptacion:\n");
	printf("        METODO ELINV:\n");
	printf("-----------------------------\n");	
	printf("\nLa frase desencriptada es:\n%s\n",frase);
	printf("-----------------------------\n");	
} 
//Función para encriptar método elinv
void encriptar(char frase[MAX],int numero)
{ 
	int i=0;
	int codascii = 0;
	char letra;
	while(frase[i]!='\0')
	{
		//Convertimos a minúscula
		frase[i] = tolower(frase[i]);
		//Tomamos el código ascii
		if (frase[i]+numero > tipoMAX)
		{
			codascii = tipoMIN + ((frase[i]+numero) - tipoMAX);
		}
		else
		{
			codascii = frase[i]+numero;
		}
		frase[i]=codascii;
		i++;
	}
	printf("Encriptacion/Desencriptacion:\n");
	printf("        METODO ELINV:\n");
	printf("-----------------------------\n");	
	printf("\nLa frase encriptado es:\n%s\n",frase);
	printf("-----------------------------\n");	
} 
