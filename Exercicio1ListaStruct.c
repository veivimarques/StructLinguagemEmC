//Exercicio1ListaStruct

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define MAX 3

struct Registro {
    char nome [200];
    char endereco [200];
    char telefone [10];

} pessoas; 

void incluirDados();

int main(){
		
	incluirDados(pessoas);
	system("cls");

	return 0;
}
void incluirDados(){
    char continua;
    i = 0;
    
    if (i > MAX ) {	
    	printf ("Limite de cadastro de pessoas atingido.");
	}
    else {
	    printf (" \n ------- Cadastro ------- \n");	// inserindo dados das pessoas
		pessoas novaPessoa;
	    do {
					
	        printf ("\n Insira o nome: \n");
	        fflush(stdin);
	        fgets(novaPessoa.nome, 200, stdin);
	        printf ("\n Insira o endereco: \n");
	        fflush(stdin);
	        fgets(novaPessoa.endereco, 200, stdin);
	        printf("\n Insira o telefone: \n");
	        scanf("%f", novaPessoa.telefone); 
			
	        printf(" \n ------- Dados inseridos com sucesso! ------- \n"); // imprimindo dados das pessoas
	        printf("Nome: %s", novaPessoa.nome);
	        printf("Endereço: %s", novaPessoa.endereco);
	        printf("Telefone: %s", novaPessoa.telefone);

	
	        printf("\n Tecle 's' se deseja inserir mais algum dado\n \n");
	        continua = getch(); 
	
	    }while (continua == 's');
	}		   
}
