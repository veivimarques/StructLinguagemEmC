//Exercicio4ListaStruct

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
typedef struct cadastro{
	char marca[20], modelo[20], cor[10];
	int qtPortas;
	float motorizacao;
}veiculos;


void cadastrar();
void apresentar();

int main(){

	char opcao;
    	
    do {
        printf (" \n O que deseja fazer? "); // menu para escolha de ações
        printf (" \n 1. Cadastrar" );
        printf (" \n 2. Apresentar" );
        scanf ("%s%*c", &opcao);

        switch(opcao) {
            case 1:
                cadastrar();
                break;
            case 2:
                apresentar();
                break;
            default:
                printf(" \n Opcao invalida. Vamos tentar de novo? \n");
                break;
        }
		      
    } while(opcao!= 3);
}

void cadastrar();
	int i;
	char continua;
	
	do {
	
	printf("----Cadastramento do Veiculo----\n");
	for(i=0;i<MAX; i++){
		printf("Veiculo %i - Informe a marca: \n", i+1);
		fflush(stdin);
		fgets(veiculos[i]. marca, 20, stdin);
		printf("Veiculo %i - Informe o modelo: \n", i+1);
		fflush (stdin);
		fgets(veiculos[i].modelo, 20, stdin);
		printf("Veiculo %i - Informe a cor: \n", i+1);
		fflush(stdin);
		fgets(veiculos[i].cor, 10, stdin);
		printf("Veiculo %i - Informe a quantidade de portas: \n", i+1);
		fflush(stdin);
		scanf("%i", &veiculos[i].qtdePortas);
		printf("veiculo %i - Informe a motorizacao: \n", i+1);
		fflush(stdin);
		scanf("%f", &veiculos[i].motorizacao);
		printf("\n Tecle 's' se deseja inserir mais algum veiculo\n \n");
	    continua = getch(); 
	
	    }while (continua == 's');
	}		   

void apresentar(){
	int i; 
	
		printf("----Veiculos Cadastrados----");
		printf("VEICULO %i MARCA: %s", i+1, veiculos[i].marca);
		printf("VEICULO %i MODELO: %s", i+1, veiculos[i].modelo);
		printf(" VEICULO %i COR: %s", i+1, veiculos[i].cor);
		printf("Veiculo %i - Quantidade de portas: %i ", i+1, veiculos[i].qtdePortas);
		printf("Veiculo %i - Motorizacao: %.1f", i+1, veiculos[i].motorizacao);
		
	}
