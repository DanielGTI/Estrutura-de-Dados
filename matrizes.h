#include <stdio.h>
#include <stdlib.h>

#define N 10

void menu_matriz() {
	system("clear");
	int opcao;
	printf("\n---------------\n");
	printf("Escolha uma opção de exemplo:\n");
	printf("1 - Vetores Simples 1\n");
	printf("2 - Vetores Simples 2\n");
	printf("Escolha a sua opção: ");

	scanf("%d", &opcao);



}

void matriz_exemplo_1() {
	int x[N]={};	
	int total, i = 0;
	total = 0;
	for(i = 0; i < N; i++){ 
		printf("Digite x[%d] = ",i);
		scanf("%d",&x[i]);
		total = total + x[i];
	}
	for(i = 0; i < N; i++){ 
		printf("X[%d] = %d\n", i, x[i]);
	}
	printf("\nTotal = %d\n", total);

}