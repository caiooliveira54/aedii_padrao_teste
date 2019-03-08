#include <stdio.h>
#include <stdlib.h>

#include "../print.h"
#include "../read.h"

int main() {
	
	FILE *arq;
	int array[1000]; // Considerando que o espaco do vetor seja infinito
	int v_size;
	
	v_size = read_vector(arq, "../teste.txt", array, v_size);
	
	// Insere aqui o algoritmo de ordenacao
	
	print_vector(array, v_size);
	
	return 0;
}

