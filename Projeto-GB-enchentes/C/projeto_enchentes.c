//CÓDIGO CRIADO POR EDUARDA LOVATO

#include <stdio.h>
#include <locale.h>

#define MAX_DOADORES 100
#define MAX_DOACOES 100
#define MAX_STRING 50

int main() {
    char nomesDoadores[MAX_DOADORES][MAX_STRING];
    char enderecos[MAX_DOADORES][MAX_STRING];
    char telefones[MAX_DOADORES][MAX_STRING];
    int numDoadores = 0;

    char itens[MAX_DOACOES][MAX_STRING];
    int quantidades[MAX_DOACOES];
    char tamanhos[MAX_DOACOES][MAX_STRING];
    char generos[MAX_DOACOES][MAX_STRING];
    int numDoacoes = 0;

    int opcao;
	setlocale(LC_ALL, "Portuguese");

    do {
        printf("\nMenu:\n");
        printf("1. Registrar doador e doação\n");
        printf("2. Exibir dados\n");
        printf("3. Sair\n");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1: {
                if (numDoadores >= MAX_DOADORES || numDoacoes >= MAX_DOACOES) {
                    printf("Limite de doadores ou de doações atingido!\n");
                    break;
                }
                
                // Captura os dados do doador
                printf("\nDigite o nome do doador: ");
                scanf(" %[^\n]", nomesDoadores[numDoadores]);
                getchar();

                printf("Digite o ponto de coleta: ");
                scanf(" %[^\n]", enderecos[numDoadores]);
                getchar(); 

                printf("Digite o telefone do doador: ");
                scanf(" %[^\n]", telefones[numDoadores]);
                getchar();

                numDoadores++;
                
                // Captura os dados da doacao
                printf("\nDigite o item doado: ");
                scanf(" %[^\n]", itens[numDoacoes]);
                getchar(); 

                do {
                    printf("Digite a quantidade doada: ");
                    if (scanf("%d", &quantidades[numDoacoes]) != 1 || quantidades[numDoacoes] <= 0) {
                        printf("Quantidade invalida. Deve ser maior que zero. Tente novamente.\n");
                        while (getchar() != '\n'); // Limpa o buffer do teclado
                    } else {
                        break;
                    }
                } while (1);

                do {
                    printf("Digite o tamanho da doacao (P/M/G): ");
                    scanf(" %[^\n]", tamanhos[numDoacoes]);
                    getchar();
                    char tamanho = tamanhos[numDoacoes][0];
                    if (!(tamanho == 'P' || tamanho == 'M' || tamanho == 'G' || tamanho == 'p' || tamanho == 'm' || tamanho == 'g')) {
                        printf("Tamanho invalido. Digite P, M ou G. Tente novamente.\n");
                    } else {
                        break;
                    }
                } while (1);

                do {
                    printf("Digite o genero da doação (M/F): ");
                    scanf(" %[^\n]", generos[numDoacoes]);
                    getchar();
                    char genero = generos[numDoacoes][0];
                    if (!(genero == 'M' || genero == 'm' || genero == 'F' || genero == 'f')) {
                        printf("Genero invalido. Digite Masculino ou Feminino. Tente novamente.\n");
                    } else {
                        break;
                    }
                } while (1);

                numDoacoes++;
                printf("Doador e doação registrados com sucesso!\n");
                break;
            }
            case 2: {
                printf("\nDados dos Doadores e Doacoes Registradas:\n");
                for (int i = 0; i < numDoadores; i++) {
                    printf("Doador %d:\n", i + 1);
                    printf("Nome: %s\n", nomesDoadores[i]);
                    printf("Endereco: %s\n", enderecos[i]);
                    printf("Telefone: %s\n", telefones[i]);
                    printf("Doacao %d:\n", i + 1);
                    printf("Item: %s\n", itens[i]);
                    printf("Quantidade: %d\n", quantidades[i]);
                    printf("Tamanho: %s\n", tamanhos[i]);
                    printf("Genero: %s\n", generos[i]);
                    printf("\n");
                }
                break;
            }
            case 3:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção invalida! Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}