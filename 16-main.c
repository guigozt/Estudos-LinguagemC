#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Inclui a biblioteca de String
#include <locale.h> //Inclui a biblioteca de acentos

#define N 20 //Constante declarando N=20 (posi��es)

int main(){
	setlocale(LC_ALL,"Portuguese"); // Inclui os acentos de acordo a l�ngua portuguesa
	
	char origem[N] = {"Ol� Mundo!"}; // STRING ORIGEM com tamanho de N, com o conte�do j� declarado
	char destino[N] = {"Sem conte�do"}; // STRING DESTINO com tamanho de N, sem conte�do
	
	printf("Antes do SCRCPY: \n");
	puts(origem); //Vai imprimir o conte�do anterior de Origem
	puts(destino); // Vai imprimir o conte�do anterior de Destino (Lixo de mem�ria)
	
	strcpy(destino,origem); // Usado para alterar o conte�do de uma STRING ( STRING destino vai receber o conteudo da STRING origem)
	
	printf("\nDepois do STRCPY \n");
	puts(origem); // Vai imprimir o valor atual de Origem
	puts(destino); // Vai imprimir o novo valor atual de Destino
}
