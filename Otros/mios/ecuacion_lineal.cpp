#include <stdio.h> 
#include <conio.h>
float n1,n2,n3,n4,n5,n6; 
char var1,var2,var3,var4,signo,signo1,igual; 
int main()
{
	scanf("%f%c%c%f%c%c%f",&n1,&var1,&signo,&n2,&var2,&igual,&n3); //ecuacion 1 
	scanf("%f%c%c%f%c%c%f",&n4,&var3,&signo1,&n5,&var4,&igual,&n6); //ecuacion 2
	if(signo== '+' && signo1== '-') 
	{
		//printf("%c%c(%f-%f%c)/%f\n",var1,igual,n3,n2,var2,n1); //despejamos ec 1 
		//printf("%f((%f-%f%c)/%f)-%f%c%c%f\n",n4,n3,n2,var2,n1,n5,var4,igual,n6); //sust ec 1 en ec 2 
		//printf("((%f-%f%c)/%f)-%f%c%c%f\n",n4*n3,n4*n2,var2,n1,n5,var4,igual,n6); //quitamos la mult de n4 
		//printf("((%f-%f%c)/%f%c%f+%f%c)\n",n4*n3,n4*n2,var2,n1,igual,n6,n5,var4); 
		//printf("%f-%f%c%c%f+%f%c\n",n4*n3,n4*n2,var2,igual,n1*n6,n1*n5,var4); 
		//printf("%f-%f%c%f%c+%f%c\n",n4*n3,n6,igual,n1*n5,var4,n4*n2,var2); 
		//printf("%f%c%f%c\n",(n4*n3)-n6,igual,(n1*n5)+(n4*n2),var4); 
		printf("%c%c%f\n",var4,igual,((n4*n3)-n6*n1)/((n1*n5)+(n4*n2))); //definimos la segunda variable 
		printf("%c%c%f\n",var1,igual,(n3-n2*((n4*n3)-n6*n1)/((n1*n5)+(n4*n2)))/n1);  //definimos la primera variable 
	} 
	else if(signo== '-' && signo1== '+') //Lo mismo con diferente sentencia de signos
	{
		//printf("%c%c(%f+%f%c)/%f\n",var1,igual,n3,n2,var2,n1); 
		//printf("%f((%f+%f%c)/%f)+%f%c%c%f\n",n4,n3,n2,var2,n1,n5,var4,igual,n6); 
		//printf("((%f+%f%c)/%f)+%f%c%c%f\n",n4*n3,n4*n2,var2,n1,n5,var4,igual,n6); //quitamos la mult de n4 
		//printf("((%f+%f%c)/%f%c%f-%f%c)\n",n4*n3,n4*n2,var2,n1,igual,n6,n5,var4); 
		//printf("%f+%f%c%c%f-%f%c\n",n4*n3,n4*n2,var2,igual,n1*n6,n1*n5,var4); 
		//printf("-%f+%f%c%f%c+%f%c\n",n4*n3,n6,igual,n1*n5,var4,n4*n2,var2); 
		//printf("%f%c%f%c\n",(-n4*n3)+n6,igual,(n1*n5)+(n4*n2),var4); 
		printf("%c%c%f\n",var4,igual,((-n4*n3)+n6*n1)/((n1*n5)+(n4*n2))); 
		printf("%c%c%f\n",var1,igual,(n3+n2*((-n4*n3)+n6*n1)/((n1*n5)+(n4*n2)))/n1);
	} 
	else if(signo== '+' && signo1== '+') 
	{
		//printf("%c%c(%f-%f%c)/%f\n",var1,igual,n3,n2,var2,n1); //despejamos ec 1  
		//printf("%f((%f-%f%c)/%f)+%f%c%c%f\n",n4,n3,n2,var2,n1,n5,var4,igual,n6); //sust ec 1 en ec 2  
		//printf("((%f-%f%c)/%f)+%f%c%c%f\n",n4*n3,n4*n2,var2,n1,n5,var4,igual,n6); //quitamos la mult de n4 
		//printf("((%f-%f%c)/%f%c%f-%f%c)\n",n4*n3,n4*n2,var2,n1,igual,n6,n5,var4);  
		//printf("%f-%f%c%c%f-%f%c\n",n4*n3,n4*n2,var2,igual,n1*n6,n1*n5,var4); 
		//printf("-%f+%f%c%f%c-%f%c\n",n4*n3,n6*n1,igual,n1*n5,var4,n4*n2,var2); 
		//printf("%f%c%f%c\n",(-n4*n3)+n6*n1,igual,(n1*n5)-(n4*n2),var4); 
		printf("%c%c%f\n",var4,igual,((-n4*n3)+n6*n1)/((n1*n5)-(n4*n2))); 
		printf("%c%c%f\n",var1,igual,(n3-n2*((-n4*n3)+n6*n1)/((n1*n5)-(n4*n2)))/n1);
	} 
	else if(signo== '-' && signo1== '-') 
	{
		printf("%c%c%f\n",var4,igual,((n4*n3)-n6*n1)/((n1*n5)-(n4*n2))); 
		printf("%c%c%f\n",var1,igual,(n3-n2*((-n4*n3)+n6*n1)/((n1*n5)-(n4*n2)))/n1);
	} 
	else 
	{
		printf("Error\n"); 
		return 0;
	}
	getch (); 
}
