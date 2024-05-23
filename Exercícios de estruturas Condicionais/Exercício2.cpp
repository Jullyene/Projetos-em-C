/* Faça um algoritmo que leia um número
e verifique se ele é par ou ímpar, imprima a frase "é par" ou "é impar"*/

#include<stdio.h>
#include<locale.h>

int main(void){
	
	int inumero;
	
	setlocale(LC_ALL,"portuguese");
	
	printf("PROGRAMA DE PAR OU ÍMPAR");
	
	printf("\nDigite um número:");
	scanf("%i",&inumero);
	
	if(inumero % 2 == 0){
		
		printf("O número é par!");
		
	}else{
		printf("O número é ímpar!");
	}
	
}
