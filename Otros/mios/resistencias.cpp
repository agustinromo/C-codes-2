#include <stdio.h>
#include <conio.h>  
struct color1{
	int negro; 
	int cafe; 
	int rojo; 
	int naranja; 
	int amarillo; 
	int verde; 
	int azul; 
	int violeta; 
	int gris; 
	int blanco; 
	char color[30];
}; 
struct color2{ 
	int negro; 
	int cafe; 
	int rojo; 
	int naranja; 
	int amarillo; 
	int verde; 
	int azul; 
	int violeta; 
	int gris; 
	int blanco; 
	char color[30]; 
}; 
struct color3{ 
	int negro; 
	int cafe; 
	int rojo; 
	int naranja; 
	int amarillo; 
	int verde; 
	int azul; 
	int violeta; 
	int gris; 
	int blanco; 
	char color[30];
};
int main() 
{
	struct color1 c1; 
	c1.negro=0; 
	c1.cafe=1; 
	c1.rojo=2; 
	c1.naranja=3; 
	c1.amarillo=4; 
	c1.verde=5; 
	c1.azul=6; 
	c1.violeta=7; 
	c1.gris=8; 
	c1.blanco=9;  
	struct color2 c2; 
	c2.negro=0; 
	c2.cafe=1; 
	c2.rojo=2; 
	c2.naranja=3; 
	c2.amarillo=4; 
	c2.verde=5; 
	c2.azul=6; 
	c2.violeta=7; 
	c2.gris=8; 
	c2.blanco=9; 
	struct color3 c3; 
	c3.negro=1; 
	c3.cafe=10; 
	c3.rojo=100; 
	c3.naranja=1000; 
	c3.amarillo=10000; 
	c3.verde=100000; 
	c3.azul=1000000; 
	c3.violeta=10000000; 
	c3.gris=100000000; 
	c3.blanco=1000000000; 
	printf("%d ohms\n",((c1.rojo*10)+c2.violeta)*c3.cafe); 
	getch ();
}
