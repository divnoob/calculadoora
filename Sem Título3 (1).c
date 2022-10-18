#include<stdio.h>
#include<stdlib.h>
struct pessoa{
	char nome[50];
	int cpf;
};
struct pessoa pessoas[20];
int sequencia=0;
void cadastro(){
	system("cls");
	printf("\nDigite o nome:");
	fflush(stdin);
	gets(pessoas[sequencia].nome);
	printf("\nDigite o CPF: ");
	scanf("%d",&pessoas[sequencia].cpf);
	sequencia++;
	system("pause");
}
void listar(){
	system("cls");
	int y;
	for(y=0;y<sequencia;y++){
		printf("\nnome: %s",pessoas[y].nome);
		printf("\nCPF : %d\n",pessoas[y].cpf);
		
	}
	system("pause");
}
int main(){
	
	int op;
	do{
		system("cls");
		printf("\nDigite a opcao desejada: ");
		printf("\n1- cadastro\n2-listar\n0- sair\n:");
		scanf("%d",&op);
		switch(op){
			case 1:
				cadastro();
			break;
			case 2:
				listar();
			break;
			case 0:
				printf("\nsaindo da aplicacao\n");
			break;
			default:
				printf("\nopcao invalida\n");
				system("pause");
		}
	}while(op!=0);
	
	
	
	
	
	return 0;
}


