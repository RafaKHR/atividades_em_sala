#include<stdio.h>
int main(){
	int i, numero, soma = 0, opcao;
	
	do{ // o que ser� repitido
		scanf("%d", &numero);
		soma = soma + numero;
		printf("Deseja digitar mais um numero? ");
		scanf("%d", &opcao);
		fflush(stdin);
	} while (opcao == 1); // por que vai ser repetido, condi��o
	
	printf("Soma %d", soma);
}
