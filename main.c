#include <stdio.h>
#include <stdlib.h>
#include "vetores.h"
#include "matrizes.h"
#include "fila.h"

void menu_vetor();		//	vetores.h
void menu_matriz();		//	matrizes.h

void erro_menu(){
	printf("Opção inválida!\n");	
}


int main(void) {
	int opcao;

	do{
		system("clear");
		printf("  --- Estrutura de Dados ---\n");
		printf("\n--------------------------\n");
		printf("Escolha uma opção de Algoritmo:\n");
		printf(" 1 - Vetores\n");
		printf(" 2 - Matrizes\n");
		printf(" 3 - Ordenação Método Bolha\n");
		printf(" 4 - Ordenação Método Seleção\n");
		printf(" 5 - Ordenação Método Inserção\n");
		printf(" 6 - Ordenação Exercícios\n");
		printf(" 7 - Fila\n");
		printf(" 8 - Pilha\n");
		printf(" 9 - Busca Binária\n");
		printf("10 - Busca Sequencial\n");
		printf("11 - Lista\n");
		printf("12 - Arvore\n");
		printf(" 0 - Sair\n");
		printf("Escolha a sua opção: ");
	
		scanf("%d", &opcao);
	
		switch(opcao){
			case 1:		menu_vetor();		break;
			case 2: 	menu_matriz();		break;
			case 7: 	menu_fila();		break;
			case 0:		printf("\nObrigado por usar o sistema\n"); break;
			default:	erro_menu();		break;
		}
	}while(opcao != 0);
	
	return 0;
}