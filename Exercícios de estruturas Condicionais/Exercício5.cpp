/*5-Depois da libera��o do governo para as mensalidades dos planos de sa�de,
as pessoas come�am a fazer pesquisas para descobrir um bom plano, n�o muito caro.
Um vendedor de um plano de sa�de apresentou a Tabela 2. Criar um programa que receba a 
idade de uma pessoa e imprima o valor que ela devera pagar, segundo a Tabela 2*/

#include<stdio.h>
#include<locale.h>

int main(void){
	
	int idade;
	float valor_plano;
	
	setlocale(LC_ALL,"portuguese");
	
	// [Formata��o monet�ria]
	setlocale(LC_MONETARY,"pt_BR.utf8");
	struct lconv *lc = localeconv();
	
	
	printf("SISTEMA DE PLANO DE SA�DE");
	printf("\nDigite sua idade para melhor valor a ser pago no plano de sa�de:");
	scanf("%i",&idade);
	
	// [Condi��es baseadas nas tabelas]
	if(idade <= 0){
		printf("Idade inv�lida! [N�o consta na tabela do plano de sa�de]");	
	}else if(idade <= 10){
		valor_plano = 30;
		printf("Valor a ser pago no plano de sa�de: %s %.2f",lc -> currency_symbol,valor_plano);
			
	}else if(idade > 10 && idade <= 29){
		valor_plano = 60;
		printf("Valor a ser pago no plano de sa�de: %s %.2f",lc -> currency_symbol,valor_plano);
		
	}else if(idade > 29 && idade <= 45){
		valor_plano = 120;
		printf("Valor a ser pago no plano de sa�de: %s %.2f",lc -> currency_symbol,valor_plano);
			
	}else if(idade > 45 && idade <= 59){
		valor_plano = 150;
		printf("Valor a ser pago no plano de sa�de: %s %.2f",lc -> currency_symbol,valor_plano);
					
	}else if(idade > 59 && idade <= 65){
		valor_plano = 250;
		printf("Valor a ser pago no plano de sa�de: %s %.2f",lc -> currency_symbol,valor_plano);
				
	}else if(idade > 65){
		valor_plano = 400;
		printf("Valor a ser pago no plano de sa�de: %s %.2f",lc -> currency_symbol,valor_plano);	
	}
	
		
	return 0;
}
