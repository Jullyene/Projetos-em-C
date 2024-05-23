/*6-Um posto de combustível vende três tipos de combustível : álcool, diesel e gasolina.
 O preço de cada litro dos combustíveis deve ser lido(informado) pelo usuário. Faça um algoritmo que 
 leia um caracter que representa o tipo de combustível comprado (a, d ou g) , o preço do combustível e
  a quantidade em litros. Utilizar o comando Switch / escolha.

O programa deve imprimir o valor em reais a ser pago pelo combustível.*/

#include<stdio.h>
#include<locale.h>
#include<ctype.h>

int main(void){
	
	setlocale(LC_ALL,"portuguese");
	setlocale(LC_MONETARY,"pt-BR.utf8");
	struct lconv *lc = localeconv();
	
	char tipo_combustivel;
	float valor_combustivel, quantidade;
	
	printf("BEM-VINDO AO SISTEMA DO POSTO BITU!");
	printf("\nOpções de combustível: [Álcool,Diesel e Gasolina]");
	printf("\nDigite a primeira letra do tipo de combustível que deseja:");
	scanf("%c",&tipo_combustivel);
	
	printf("Digite o valor do combustível:");
	fflush(stdin);
	scanf("%f",&valor_combustivel);
	
	printf("Digite a quantidade de combustível:");
	fflush(stdin);
	scanf("%f",&quantidade);
	
	tipo_combustivel = toupper(tipo_combustivel);
	float valor_total;
	switch(tipo_combustivel){
		
		case 'A':
			printf("Combustível escolhido: [Álcool]");
			valor_total = quantidade * valor_combustivel;
			printf("\nValor a ser pago: %s %.2f",lc ->currency_symbol,valor_total);
			break;
		
		case 'D':
			printf("Combustível escolhido: [Diesel]");
			valor_total = quantidade * valor_combustivel;
			printf("\nValor a ser pago: %s %.2f",lc ->currency_symbol,valor_total);
			break;
			
		case 'G':
			printf("Combustível escolhido: [Gasolina]");
			valor_total = quantidade * valor_combustivel;
			printf("\nValor a ser pago: %s %.2f",lc ->currency_symbol,valor_total);
			break;
		default:
			
			printf("Escolha de combustível inválida!");
			
	}
	
	return 0;
	
}
