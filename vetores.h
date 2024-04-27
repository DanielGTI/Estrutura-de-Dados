#include <stdio.h>
#include <stdlib.h>


#define N 10

void vetor_exemplo_1();
void vetor_exemplo_2();
void erro_menu_vetor(){
	printf("Opção inválida!\n");	
}

void menu_vetor() {
	system("clear");
	int opcao;
	do{
		printf("\n---------------\n");
		printf("Escolha uma opção de exemplo:\n");
		printf("1 - Vetores Simples 1\n");
		printf("2 - Vetores Simples 2\n");
		printf("0 - Voltar\n");	
		printf("Escolha a sua opção: ");
	
		scanf("%d", &opcao);
		printf("--- VETORES ---\n");
		printf("\n---------------\n\n");
		switch(opcao){
			case 1:		vetor_exemplo_1();	break;
			case 2:		vetor_exemplo_2();	break;
			default:	erro_menu_vetor();		break;
		}
	}while(opcao != 0);	
}

void vetor_exemplo_1() {
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

void vetor_exemplo_2() {
	int x[N]={};	
	int total, i = 0;
	total = 0;
	printf("EXEMPLO 2\n");
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