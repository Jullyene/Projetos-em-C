/*3- Ler um n�mero inteiro e determinar se � divis�vel por 5. Se for divis�vel,
escrever uma mensagem na tela �o n�mero xx � divis�vel por 5�. Se n�o for divis�vel
imprima �o n�mero xx n�o � divis�vel por 5�. No lugar de xx deve aparecer o n�mero que
foi lido pelo usu�rio.*/

#include<stdio.h>
#include<locale.h>


int main(void){
	
	int inumero;
	
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite um n�mero:");
	scanf("%i",&inumero);
	
	//[Condi��o que vai determinar se � ou n�o divis�vel por 5
	if(inumero % 5 == 0){
		
		printf("O n�mero %i � divis�vel por 5",inumero);
		
	}else{
		
		printf("O n�mero %i n�o � divis�vel por 5",inumero);
		
	}
	
	
	
	
	
	
	
}
