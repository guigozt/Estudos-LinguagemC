#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	            //   P0  P1  P2  P3  P4 = 5
	int vetor [5] = {10, 20, 30, 40, 50}; // Declara um vetor com 5 POSI��ES
	int p; // Declara as POSI��ES do vetor
	float va = 0; // Declara o VALOR das posi��es
	
	
	for(p=0; p<5; p++){ //O loop ir� se repetir enquanto P(posi��es do vetor) for igual a 0 e menor que 5, assim incrementando 1 unidade a mais a cada loop, para que as posi��es mudem EX: de 0 ->1
  
        va+=vetor[p]; // VA vai somar o seu conteudo com o VETOR da posi��o atual e atribuir para si mesmo (PARA O PR�XIMO LOOP)
}
    printf("Resultado: %.2f", va/5); // No final, o valor total do VA vai ser dividido por 5 (m�dia)
		
	return 0;
}

/* O que aconteceu?

Loop 1 = P0:
       VA + VETOR[P];  P++
       0  +  10 ;       0 + 1 = 1 
       VA = 10
       
Loop 2 = P1:
       VA + VETOR[P];  P++
       10  +  20 ;      1 + 1 = 2 
       VA = 30
       
Loop 3 = P2:
       VA + VETOR[P];  P++
       30  +  30 ;      2 + 1 = 3 
       VA = 60
       
Loop 4 = P3:
       VA + VETOR[P];  P++
       60 +  40 ;      3 + 1 = 4 
       VA = 100
       
Loop 5 = P4:
       VA + VETOR[P];  P++
       100 + 50 ;      4 + 1 = 5 
       VA = 150 */
