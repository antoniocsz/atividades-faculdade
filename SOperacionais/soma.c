#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]){
	long *vetor;
	int i, tamanho, soma = 0;
	
	//resetando os valores de rand 
	srand((unsigned)time(NULL));

	if (argc > 1){
		/*alocando o tam do vetor C,
		e armazendo os numeros aleatorios
		*/
		tamanho = atoi(argv[1]);
		vetor = malloc(sizeof(int)*tamanho);
		for (i = 0; i < tamanho; ++i){
				vetor[i] = 1 + (rand() % 10);
		}
		for (i = 0; i < tamanho; ++i){
			soma += vetor[i];
		}
	}
	
	printf("%d\n", soma);
	return 0;
}