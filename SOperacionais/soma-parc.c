#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main(int argc, char *argv[]){
	int i, qnt;
	long soma = 0;
	srand((unsigned)time(NULL));
	
	if (argc > 1){
		qnt = atoi(argv[1]);	
		for (i = 0; i < qnt; i++){
			soma += rand();
			printf("s = %ld\n", soma);
		}
	} else{
		printf("s = %ld\n", soma);
	}
	
	return 0;
}