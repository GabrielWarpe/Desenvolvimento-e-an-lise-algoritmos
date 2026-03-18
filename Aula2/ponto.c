#include <stdio.h>

int main() {
    int conjunto[5];
    int i;

    // Preenchendo o conjunto com valores
    for (i = 0; i < 5; i++) {
        printf("Digite um número para o conjunto: ");
        scanf("%d", &conjunto[i]);
    }

    // Exibindo os elementos do conjunto
    printf("Os elementos do conjunto são:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", conjunto[i]);
    }
    printf("\n");

    return 0;
}