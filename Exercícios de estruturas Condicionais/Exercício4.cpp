/*4- Dado um ano D.C (Depois de Cristo), identifique se este � um ano bissexto ou n�o.
Considere que para o ano ser bissexto basta que seja divis�vel por 400. Caso contr�rio,
este precisar� ser divis�vel por 4 e n�o divis�vel por 100.*/

#include<stdio.h>
#include<locale.h>

int main(void){
	
	int ano;
	
	printf("C�LCULO DE ANO BISSEXTO");
	printf("\nDigite um ano:");
	scanf("%i",&ano);
	
	//Constru��o da condi��o
	
	if(ano % 400 == 0 && ano % 4 == 0){
		
		printf("Ano bissexto!");
			
	}else if(ano % 100 != 0){
		
		printf("Ano bissexto!");
		
	}else{
		
		printf("Ano n�o bissexto!");
		
	}
	
	
	
	return 0;
}
