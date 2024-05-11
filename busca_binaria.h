#include <stdio.h>
#include <stdlib.h>
#define LIN_BUSCA_BIN 10

int valores_bin[LIN_BUSCA_BIN]; // variavel global

void busca_binaria_1();
void busca_binaria_2();

void ordenar_insercao_binario() {
  int i, j, aux;

  for (i = 0; i < LIN_BUSCA_BIN; i++) {
    j = i;
    while (j > 0 && valores_bin[j] < valores_bin[j - 1]) {
      aux = valores_bin[j];
      valores_bin[j] = valores_bin[j - 1];
      valores_bin[j - 1] = aux;
      j--;
    }
  }
}

void erro_menu_busca_binaria() { printf("Opção inválida!\n"); }

int menu_busca_binaria(void) {
  system("clear");
  int opcao;
  do {
    printf("\n---------------\n");
    printf("Escolha uma opção de exemplo:\n");
    printf("1 - Busca Binária 1\n");
    printf("2 - Busca Binária 2\n");
    printf("0 - Voltar\n");
    printf("Escolha a sua opção: ");

    scanf("%d", &opcao);
    printf("--- Busca Binária ---\n");
    printf("------------------------\n\n");
    switch (opcao) {
    case 1:
      busca_binaria_1();
      break;
    case 2:
      busca_binaria_2();
      break;
    default:
	  erro_menu_busca_binaria();
      break;
    }
  } while (opcao != 0);

  return 0;
}

void busca_binaria_1() {
  int i;

  //	CRIAR O VETOR
  for (i = 0; i < LIN_BUSCA_BIN; i++) {
    valores_bin[i] = rand() % (LIN_BUSCA_BIN * 10);
  }

  ordenar_insercao_binario();
  //	IMPRIMIR O VETOR
  for (i = 0; i < LIN_BUSCA_BIN; i++) {
    printf("%3d, ", valores_bin[i]);
  }

  int busca, quant_busca = 0, inicio=0, fim=LIN_BUSCA_BIN, meio, x;
  printf("\n\nDigite o valor a ser buscado: ");
  scanf("%d", &busca);
  meio = ( inicio + fim) / 2;
  printf("\nmeio = %d\n", meio);	
  while (valores_bin[meio] != busca){
    quant_busca++;
	printf("valores_bin[meio] = %d\n", valores_bin[meio]);
	if( busca < valores_bin[meio] ){
		fim = meio;
		meio = (inicio + fim) / 2;		 
	} else {
		inicio = meio;
		meio = (inicio + fim) / 2;
	}	  
	printf("Inicio = %d | Meio = %d | Fim = %d\n", inicio, meio, fim);
	printf("valor (%d) == busca (%d)\n", valores_bin[meio], busca);
	getchar();
  }

  if( valores_bin[meio] == busca )
	  printf("Valor encontrado na posição %d\n", meio);
  else
	  printf("Valor não encontrado\n");
	
  printf("\nQuantidade de buscas: %d\n", quant_busca);
}

void busca_binaria_2() {
 
}