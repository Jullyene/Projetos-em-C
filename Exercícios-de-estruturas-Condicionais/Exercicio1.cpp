/*1)    Fa�a um algoritmo que leia dois n�meros inteiros, em seguida,
se eles forem diferentes, escreva na tela "os valores s�o diferentes".
Caso contr�rio escreva a mensagem �n�meros iguais� */

#include<stdio.h>
#include<locale.h>

int main(void){

	setlocale(LC_ALL,"portuguese");
	
		
	int nume1, nume2;

	printf("PROGRAMA DE TESTE DE IF COMPOSTO\n");
	printf("Escreva o primeiro n�mero:");
	//N�o esquecer de colocar o % pra identificar [formata��o] N�o esquecer de colocar o & [vai verifical onde alocar a vari�vel]
	scanf("%i",&nume1);

	printf("Escreva o segundo n�mero:");
	fflush(stdin);
	scanf("%i",&nume2);
	
		
	if(nume1 == nume2){
		
		printf("N�meros Iguais!");	
		
	}else{
		
		printf("N�meros Diferentes!");
		
	}
	
	return 0;
}
