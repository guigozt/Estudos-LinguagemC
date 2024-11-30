#include <stdio.h>
#include <stdlib.h>

void imprime1 (int vet[], int n){ //Declara a fun��o "imprime1", chama o vetor "vet" com tamanho n
int i; //Posi��es

for(i=0; i<n; i++){ //Loop para percorrer as posi��es do vetor
	printf("%d ", vet[i]); //Imprime cada posi�o de acordo com cada loop
}}

void imprime2 (int vet[5]){ //Fun��o "imprime2" chama o vetor "vet" com tamanho 5
int i; //Posi��es

for(i=0; i<5; i++){ //Loop 
	printf("%d ", vet[i]); //Imprime
}}

void imprime3 (int *vet, int n){ //Fun��o "imprime3"
int i; // Posi��es

for(i=0; i<n; i++){ //Loop
	printf("%d ", vet[i]); //Imprime
}}

int main(int argc, char *argv[]) {
	
	int vet[5] = {1, 2, 3, 4, 5}; // Declara o vetor "vet" com tamanho 5; valores definidos
	
	puts ("Primeiro Imprime:");
	imprime1 (vet,5); // Busca no valor de fun��o "imprime1" referente ao vet de tamanho 5
	
	puts ("\nSegundo Imprime:");
	imprime2 (vet); //BUsca o valor da fun��o "imprime2" referente ao "vet" - o tamanho j� foi definido na fun��o
	
	puts ("\nTerceiro Imprime:");
	imprime3 (vet,5); //Busca no valor de fun��o "imprime1" referente ao vet de tamanho 5
	
	return 0;
	
}
