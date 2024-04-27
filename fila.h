#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int elementos[TAM]={};
int primeiro=0, ultimo=0, total=0;

void fila_exemplo_1();
void fila_exemplo_2();
void erro_menu_fila(){
	printf("Opção inválida!\n");	
}

void menu_fila() {
	system("clear");
	int opcao;
	do{
		printf("\n---------------\n");
		printf("Escolha uma opção de exemplo:\n");
		printf("1 - Fila Simples 1\n");
		printf("2 - Fila Simples 2\n");
		printf("0 - Voltar\n");	
		printf("Escolha a sua opção: ");

		scanf("%d", &opcao);
		printf("------ FILA -----\n");
		printf("\n-----------------\n\n");
		switch(opcao){
			case 1:		fila_exemplo_1();	break;
			case 2:		fila_exemplo_2();	break;
			default:	erro_menu_fila();		break;
		}
	}while(opcao != 0);	
}


int isEmpty(){	
	if( total == 0 )
		return 1;
	else
		return 0;
}			// VERIFICAR SE ESTA VAZIO

int isFull(){
	if( total == TAM )
		return 1;
	else
		return 0;
}			// VERIFICAR SE ESTA CHEIO 

void inserir(int n){
	if( isFull() ){
		printf("A Fila está cheia\n");
	}else{
		elementos[ultimo] = n;
		ultimo = (ultimo + 1) % TAM;
		total++;
	}
}		// INSERIR ELEMENTO NA FILA

int retirar(){
	if( isEmpty() ){
		printf("A Fila está vazia.\n");
		return 0;
	}else{
		int n = elementos[primeiro];
		elementos[primeiro] = 0;
		total--;
		primeiro = (primeiro + 1) % TAM;
		return primeiro;
	}
}			// RETIRAR ELEMENTO DA FILA

int primeiro_fila(){
	if( isEmpty() ){
		printf("A fila está vazia\n");
		return 0;
	}else{
		return elementos[primeiro];
	}
}		// RETORNA O PRIMEIRO ELEMENTO DA FILA

void exibirPrimeiro(){
	printf("\nValor do início da FILA = %d (%d)\n", primeiro_fila(), primeiro);
}	//	EXIBIR O PRIMEIRO DA FILA

void listar(){
	int i;
	system("clear");
	printf("Lista da FILA: ");
	for( i=0; i<TAM; i++){
		printf("| %2d ", elementos[i]);
	}
}			//	LISTA OS ELEMENTOS DA FILA

void listar_Fila(){
	int i, menor, maior;
	system("clear");
	printf("Primeiro = %d\nUltimo = %d\n", primeiro, ultimo);
	printf("? = %d\n", ultimo % TAM);

}		//	EXIBIR LISTA

int menu(){
	int n;
	printf("\n-----------------\n");
	printf("\nSistema de FILA:");
	printf("\n1 - Inserir valor");
	printf("\n2 - Retirar valor");
	printf("\n3 - Listar Fila");
	printf("\n4 - Exibir o primeiro da Fila");
	printf("\n5 - Listar Fila (ORDEM)");
	printf("\n0 - Sair");
	printf("\n\nEscolha uma opção: ");
	scanf("%d", &n);
	return n; 	
}				//	MENU DA FILA
int valor() { 
	int n;
	system("clear");
	printf("Escolha um valor: ");
	scanf("%d", &n);
	return n; 
}			//	SOLICITA O VALOR

void sair(){
	printf("\nObrigado por usar o sistema\n");
}				//	SAIR

void fila_exemplo_1() {
	int opcao;
	system("clear");
	do{
		opcao = menu();
		switch(opcao){
			case 1: inserir(valor());	break;
			case 2: retirar();			break;
			case 3: listar();			break;
			case 4: exibirPrimeiro();	break;
			case 5: listar_Fila();		break;
			case 0:	sair();				break;
			default: printf("Opção inválida\n");
		}
	}while( opcao != 0 );
}

void fila_exemplo_2() {
	int opcao;
	system("clear");
	do{
		opcao = menu();
		switch(opcao){
			case 1: inserir(valor());	break;
			case 2: retirar();			break;
			case 3: listar();			break;
			case 4: exibirPrimeiro();	break;
			case 5: listar_Fila();		break;
			case 0:	sair();				break;
			default: printf("Opção inválida\n");
		}
	}while( opcao != 0 );
}