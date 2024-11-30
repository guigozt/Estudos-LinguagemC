#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Inclui a biblioteca de String
#include <locale.h> //Inclui a biblioteca de acentos

#define N 50 //Constante declarando N=50 (posi��es)

int main(){
	setlocale(LC_ALL,"Portuguese"); // Inclui os acentos de acordo a l�ngua portuguesa
	
	char S1[N] = {"L�gica de"}; //Inicializaa STRING S1 com o conte�do 
	char S2[N] = {"Programa��o"}; //Inicializaa STRING S2 com o conte�do
	
	printf("Antes do STRCAT: \n");
	printf("\nstr1: %s", S1); //STR1 e STR2 (serve somente para indicar a string) %S vai buscar o conte�do, em rela��o a S1
	printf("\nstr2: %s \n", S2); // %S vai buscar o conte�do, em rela��o a S2
	
	strcat(S1,S2); // Vai juntar as STRINGS
	
	printf("\nDepois do STRCAT: \n");
	puts(S1); // O valor unido � armazenado em S1

	
}
