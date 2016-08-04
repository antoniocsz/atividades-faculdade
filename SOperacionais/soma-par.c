#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <time.h>

int main(int argc, char *argv[]){
	long *numeros_aleatorios, *filhos;
	int i, tamanho, qnt_filhos, setor_vetor, soma = 0;
	
	//resetando os valores de rand 
	srand((unsigned)time(NULL));

	//alocação do tam do numeros_aleatorios, e armazenamento dos numeros aleatorios
	if (argc > 1){	
		tamanho = atoi(argv[1]);
		numeros_aleatorios = malloc(sizeof(int)*tamanho);
		for (i = 0; i < tamanho; ++i){
				numeros_aleatorios[i] = 1 + (rand() % 10);
		}
	}

	//Criação dos Filhos
	if (argc > 2){
		qnt_filhos = atoi(argv[2]);
		filhos = malloc(sizeof(long)*qnt_filhos);
		for (i = 0; i < qnt_filhos; ++i){
			filhos[i] = fork();
		}
	}
	
	printf("%d\n", soma);
	return 0;
}