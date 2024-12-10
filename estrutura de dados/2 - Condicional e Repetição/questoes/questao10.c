#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("\n1 – Adicionar\n2 – Editar\n3 – Pesquisar\n4 – Remover\n0 – Sair\nEscolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Adicionar\n");
                break;
            case 2:
                printf("Editar\n");
                break;
            case 3:
                printf("Pesquisar\n");
                break;
            case 4:
                printf("Remover\n");
                break;
            case 0:
                printf("Fim do programa\n");
                break;
            default:
                printf("Opção inválida\n");
        }
    } while (opcao != 0);

    return 0;
}
