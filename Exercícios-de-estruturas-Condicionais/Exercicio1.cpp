/*1)    Faça um algoritmo que leia dois números inteiros, em seguida,
se eles forem diferentes, escreva na tela "os valores são diferentes".
Caso contrário escreva a mensagem “números iguais” */

#include<stdio.h>
#include<locale.h>

int main(void){

	setlocale(LC_ALL,"portuguese");
	
		
	int nume1, nume2;

	printf("PROGRAMA DE TESTE DE IF COMPOSTO\n");
	printf("Escreva o primeiro número:");
	//Não esquecer de colocar o % pra identificar [formatação] Não esquecer de colocar o & [vai verifical onde alocar a variável]
	scanf("%i",&nume1);

	printf("Escreva o segundo número:");
	fflush(stdin);
	scanf("%i",&nume2);
	
		
	if(nume1 == nume2){
		
		printf("Números Iguais!");	
		
	}else{
		
		printf("Números Diferentes!");
		
	}
	
	return 0;
}
