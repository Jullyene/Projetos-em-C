/*3- Ler um número inteiro e determinar se é divisível por 5. Se for divisível,
escrever uma mensagem na tela “o número xx é divisível por 5”. Se não for divisível
imprima “o número xx não é divisível por 5”. No lugar de xx deve aparecer o número que
foi lido pelo usuário.*/

#include<stdio.h>
#include<locale.h>


int main(void){
	
	int inumero;
	
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite um número:");
	scanf("%i",&inumero);
	
	//[Condição que vai determinar se é ou não divisível por 5
	if(inumero % 5 == 0){
		
		printf("O número %i é divisível por 5",inumero);
		
	}else{
		
		printf("O número %i não é divisível por 5",inumero);
		
	}
	
	
	
	
	
	
	
}
