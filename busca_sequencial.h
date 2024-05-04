#include <stdio.h>
#include <stdlib.h>
#define LIN_BUSCA 10000

int valores[LIN_BUSCA]; // variavel global

void busca_sequencial_1();
void busca_sequencial_2();

void ordenar_insercao_padrao() {
  int i, j, aux;

  for (i = 0; i < LIN_BUSCA; i++) {
    j = i;
    while (j > 0 && valores[j] < valores[j - 1]) {
      aux = valores[j];
      valores[j] = valores[j - 1];
      valores[j - 1] = aux;
      j--;
    }
  }
}

void erro_menu_busca() { printf("Opção inválida!\n"); }

int menu_busca_sequencial(void) {
  system("clear");
  int opcao;
  do {
    printf("\n---------------\n");
    printf("Escolha uma opção de exemplo:\n");
    printf("1 - Busca sequencial 1\n");
    printf("2 - Busca sequencial 2\n");
    printf("0 - Voltar\n");
    printf("Escolha a sua opção: ");

    scanf("%d", &opcao);
    printf("--- Busca sequencial ---\n");
    printf("------------------------\n\n");
    switch (opcao) {
    case 1:	busca_sequencial_1();	    break;
    case 2:	busca_sequencial_2();		break;
    default:	erro_menu_busca();	    break;
    }
  } while (opcao != 0);

  return 0;
}

void busca_sequencial_1() {
  int i;

  //	CRIAR O VETOR
  for (i = 0; i < LIN_BUSCA; i++) {
    valores[i] = rand() % 1000;
  }

  ordenar_insercao_padrao();
  //	IMPRIMIR O VETOR
  for (i = 0; i < LIN_BUSCA; i++) {
    printf("%3d, ", valores[i]);
  }

  int busca, quant_busca = 0;
  printf("\n\nDigite o valor a ser buscado: ");
  scanf("%d", &busca);
  for (i = 0; i < LIN_BUSCA; i++) {
    quant_busca++;
    if (valores[i] == busca) {
      printf("Valor encontrado na posição %d\n", i);
      break;
    }
  }
  printf("\nQuantidade de buscas: %d\n", quant_busca);

}

void busca_sequencial_2() {
  int i;

  //	CRIAR O VETOR
  for (i = 0; i < LIN_BUSCA; i++) {
	valores[i] = rand() % (10 * LIN_BUSCA);
  }

  ordenar_insercao_padrao();
  //	IMPRIMIR O VETOR
  for (i = 0; i < LIN_BUSCA; i++) {
	printf("%3d, ", valores[i]);
  }

  int busca, quant_busca = 0;
  printf("\n\nDigite o valor a ser buscado: ");
  scanf("%d", &busca);
  for (i = 0; i < LIN_BUSCA; i++) {
	quant_busca++;
	if (valores[i] == busca) {
	  printf("Valor encontrado na posição %d\n", i);
	  break;
	}
  }
  printf("\nQuantidade de buscas: %d\n", quant_busca);

}