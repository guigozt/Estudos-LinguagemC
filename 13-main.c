#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int vetor[5]; // Declara o Vetor com 5 posi��es
	int p; // Declara as Posi��es
	
	for(p=0; p<5; p++){ // Loop vai se repetir enquanto P(POSI��ES) for de 0 � 5, sendo incrementado 1 unidade a mais
		
		printf("Insira um numero para a posicao [%d]: ", p); // " %d, p" Vai buscar o tipo do valor digitado na variavel P 
		scanf("%d", &vetor[p]); // Armazena o a posi��o atual do Vetor
	}
	
	printf("\nDados inseridos: ");
	
	for(p=0; p<5; p++){ // Mesma condi��o, mas agora para exibir os valores digitados conforme condi��o (na ordem)
		
		printf("[%d] ", vetor[p]); // Imprime o que o usuario digitar (diferente do SCANF, que armazena)
}

	return 0;
}
