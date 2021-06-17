//Exercicio2ListaStruct

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct alunos{
	char nome[30];
	int idade;
} alunos;

int main(){
	alunos dadosAlunos;
	int i = 0;
	char continua;
	
	do{
		printf("Digite o nome: \n", i+1);
		fflush (stdin);
		fgets(dadosAlunos[i].nome, 30, stdin);
		fflush (stdin);

		printf("Digite a idade: \n", i+1);
		fflush (stdin);
		scanf("%d", &dadosAlunos[i].idade);
		fflush (stdin);

		printf("-------ALUNOS-------");
	
		printf("NOME: %s ", dadosAlunos[i]. nome);
		printf("IDADE: %d\n", dadosAlunos[i].idade);

  		printf("\n Tecle 's' se deseja inserir mais algum dado\n \n");
	    continua = getch(); 
	
	    }while (continua == 's');
}
