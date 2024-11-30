#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 3 //Cria uma constante TAM de tamanho 3, para manipular o VETOR

struct tipo_pessoa{ //Registro de dados
	int idade; // Campo idade
	float peso; // Campo peso
	char nome [50]; // Campo nome de tamanho 50
};

typedef struct tipo_pessoa
               tipo_pessoa; // Renomeia o nome da STRUCT para "tipo_pessoa"
               
int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese"); //Permite regras do portugu�s
	
	tipo_pessoa lista[TAM]; // Declara um VETOR "LISTA" do tipo TIPO_PESSOA, com o tamanho igual a 'TAM'
	int p; //Posi��es do VETOR
	
//Para cada posi��o do VETOR(TAM = 3), ter� 3 campos do STRUCT
	
	for(p=0; p<TAM; p++){ //P vai de 0 at� TAM, incrementando 1 unidade a mais
		
		printf("Insira os dados da pessoa [%d]: \n", p+1); //Mensagem ao us�ario - chama a posi��o atual - incrementando p+1 para que a posi��o dos campos mude de 1-2-3
		
		printf("\nNome: ");
		scanf("%50[^\n]s", &lista[p].nome); //Armazena o tamanho da string NOME - Armazena os espa�os - busca o VETOR[posi��o atual].o nome do campo
		
		printf("\nIdade: ");
		scanf("%d", &lista[p].idade);
		fflush(stdin); //Evita travamentos e bugs do teclado
		
		printf("\nPeso: ");
		scanf("%f", &lista[p].peso);
		fflush(stdin);
		
		printf("\n"); //Serve s� para pular uma linha ao fim de cada loop
	}
system("cls"); //Limpa a tela, mas n�o interfere nos valores inseridos

    puts("Seus dados: \n");
    
    for(p=0; p<TAM; p++){ //Loop para Imprimir os resultados inseridos
    
    printf("-------------- Pessoa [%d] --------------\n", p+1); // Vai Imprimir em cada Loop, de acordo com a posi��o atual - p+1 (muda para a posi��o seguinte)
    
    printf("\nNome: %s\n", lista[p].nome); //Armzena o tipo do valor - busca a posi��o do vetor, e o campo atual
    printf("\nIdade: %d\n", lista[p].idade);
    printf("\nPeso: %.2f\n", lista[p].peso);
}

	return 0;
}
