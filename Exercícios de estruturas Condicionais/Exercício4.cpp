/*4- Dado um ano D.C (Depois de Cristo), identifique se este é um ano bissexto ou não.
Considere que para o ano ser bissexto basta que seja divisível por 400. Caso contrário,
este precisará ser divisível por 4 e não divisível por 100.*/

#include<stdio.h>
#include<locale.h>

int main(void){
	
	int ano;
	
	printf("CÁLCULO DE ANO BISSEXTO");
	printf("\nDigite um ano:");
	scanf("%i",&ano);
	
	//Construção da condição
	
	if(ano % 400 == 0 && ano % 4 == 0){
		
		printf("Ano bissexto!");
			
	}else if(ano % 100 != 0){
		
		printf("Ano bissexto!");
		
	}else{
		
		printf("Ano não bissexto!");
		
	}
	
	
	
	return 0;
}
