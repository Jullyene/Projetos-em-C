/*6-Um posto de combust�vel vende tr�s tipos de combust�vel : �lcool, diesel e gasolina.
 O pre�o de cada litro dos combust�veis deve ser lido(informado) pelo usu�rio. Fa�a um algoritmo que 
 leia um caracter que representa o tipo de combust�vel comprado (a, d ou g) , o pre�o do combust�vel e
  a quantidade em litros. Utilizar o comando Switch / escolha.

O programa deve imprimir o valor em reais a ser pago pelo combust�vel.*/

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
	printf("\nOp��es de combust�vel: [�lcool,Diesel e Gasolina]");
	printf("\nDigite a primeira letra do tipo de combust�vel que deseja:");
	scanf("%c",&tipo_combustivel);
	
	printf("Digite o valor do combust�vel:");
	fflush(stdin);
	scanf("%f",&valor_combustivel);
	
	printf("Digite a quantidade de combust�vel:");
	fflush(stdin);
	scanf("%f",&quantidade);
	
	tipo_combustivel = toupper(tipo_combustivel);
	float valor_total;
	switch(tipo_combustivel){
		
		case 'A':
			printf("Combust�vel escolhido: [�lcool]");
			valor_total = quantidade * valor_combustivel;
			printf("\nValor a ser pago: %s %.2f",lc ->currency_symbol,valor_total);
			break;
		
		case 'D':
			printf("Combust�vel escolhido: [Diesel]");
			valor_total = quantidade * valor_combustivel;
			printf("\nValor a ser pago: %s %.2f",lc ->currency_symbol,valor_total);
			break;
			
		case 'G':
			printf("Combust�vel escolhido: [Gasolina]");
			valor_total = quantidade * valor_combustivel;
			printf("\nValor a ser pago: %s %.2f",lc ->currency_symbol,valor_total);
			break;
		default:
			
			printf("Escolha de combust�vel inv�lida!");
			
	}
	
	return 0;
	
}
