//Exercicio3ListaStruct

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct estrutura{
	char produtos[10];
	int qtde;
}dados;

int main(){
	dados registros[2];
	int i;
	
	printf("-----Informe o nome do produto e quantidade desejada-----\n");
	for(i=0; i<2; i++){
		
	printf("\t\nNome: ", i+1);
	fflush(stdin);
	fgets(registros[i].produtos, 10, stdin);
	printf("\t\nInforme a quantidade que deseja: ");
	fflush(stdin);
	scanf("%i", &registros[i].qtde);
	}
}

