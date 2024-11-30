#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "24-poligonos.h" // Conecta a biblioteca criada

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int calc;
	
	printf("Digite [1] para calcular o Perimetro do Triangulo \n");
	printf("\nDigite [2] para calcular o Perimetro do Ret�ngulo \n");
	printf("\nDigite [3] para calcular o Perimetro do Circulo \n");
	printf("\nDigite [4] para calcular a �rea do Triangulo \n");
	printf("\nDigite [5] para calcular a �rea do Ret�ngulo \n");
	printf("\nDigite [6] para calcular a �rea do Circulo \n");
	printf("\nOp��o desejada: ");
	scanf("%d", &calc);
	
	if(calc==0 || calc>6){
		
		printf("\nOp��o Inv�lida");
	
	}else{
		
		switch(calc){
			
			case 1:
				
				printf("\nResultado: %.2f \n", calcPerimetroTriangulo(10,10,5)); //Imprime o resultado, buscando o escopo da fun��o (com valores definidos)
				break;
				
			case 2:
				
				printf("\nResultado: %.2f \n", calcPerimetroRetangulo(8,12));
				break;
				
			case 3:
				
				printf("\nResultado: %.2f \n", calcPerimetroCirculo (6.5));
				break;
				
			case 4:
				
				printf("\nResultado: %.2f \n", calcAreaTriangulo (50,7.5));
				break;
				
			case 5:
				
				printf("\nResultado: %.2f \n", calcAreaRetangulo (80,5));
				break;
				
			case 6:
				
				printf("\nResultado: %.2f \n", calcAreaCirculo (2));
				break;
				
				
		}
	}
	
	return 0;
}
