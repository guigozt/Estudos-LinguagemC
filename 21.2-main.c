#include <stdio.h>
#include <stdlib.h>

float maior(float num1, float num2); //Prot�tipo da fun��o (serve para auxiliar a fun��o)

int main(int argc, char *argv[]) {
	
	float x,y,m; // Variaveis
	
	printf("Digite dois numeros que ao final sera definido o maior entre eles \n");
	
	printf("\nInsira o primeiro numero: ");
	scanf("%f", &x);
	
	printf("\nInsira o primeiro numero: ");
	scanf("%f", &y);
	
	m = maior(x,y); // Varivael m recebe "maior"(nome da fun��o) 
	
	printf("\nResultado: %.2f", m);
	
	return 0;
}

float maior(float num1, float num2){ //Declaro a fun��o maior, com par�metros da opera��o
	
	if(num1>num2)
    	return num1;
	
    else
      return num2;
}
