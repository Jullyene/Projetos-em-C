/* Fa�a um algoritmo que leia um n�mero
e verifique se ele � par ou �mpar, imprima a frase "� par" ou "� impar"*/

#include<stdio.h>
#include<locale.h>

int main(void){
	
	int inumero;
	
	setlocale(LC_ALL,"portuguese");
	
	printf("PROGRAMA DE PAR OU �MPAR");
	
	printf("\nDigite um n�mero:");
	scanf("%i",&inumero);
	
	if(inumero % 2 == 0){
		
		printf("O n�mero � par!");
		
	}else{
		printf("O n�mero � �mpar!");
	}
	
}
