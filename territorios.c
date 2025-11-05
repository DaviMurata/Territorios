#include <stdio.h>
#include <string.h>

#define QTD_TERRITORIOS 5  // Quantidade fixa de territórios a serem cadastrados

// -----------------------------------------------------------
// Estrutura (struct) que representa um território do jogo.
// Contém o nome do território, a cor do exército e o número de tropas.
// -----------------------------------------------------------
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    struct Territorio territorios[QTD_TERRITORIOS];  // Vetor de structs
    int i;

    printf("===== CADASTRO DE TERRITORIOS =====\n\n");

    // -----------------------------------------------------------
    // Entrada de dados: cadastro dos 5 territórios
    // -----------------------------------------------------------
    for (i = 0; i < QTD_TERRITORIOS; i++) {
        printf("Territorio %d:\n", i + 1);

        printf("  Nome do territorio: ");
        scanf("%s", territorios[i].nome);  // lê o nome (sem espaços)

        printf("  Cor do exercito: ");
        scanf("%s", territorios[i].cor);  // lê a cor (sem espaços)

        printf("  Quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n"); // linha em branco para organizar visualmente
    }

    // -----------------------------------------------------------
    // Exibição dos dados após o cadastro
    // -----------------------------------------------------------
    printf("===== LISTA DE TERRITORIOS CADASTRADOS =====\n\n");
    for (i = 0; i < QTD_TERRITORIOS; i++) {
        printf("Territorio %d:\n", i + 1);
        printf("  Nome: %s\n", territorios[i].nome);
        printf("  Cor do exercito: %s\n", territorios[i].cor);
        printf("  Tropas: %d\n", territorios[i].tropas);
        printf("---------------------------------------------\n");
    }

    return 0;
}
printf("  Nome do territorio: ");
fflush(stdin);
fgets(territorios[i].nome, 30, stdin);
territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0'; // remove \n

