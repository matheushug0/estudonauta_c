// Diretivas de pr�-processamento
#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX001 - Listagem >>>\n");
    printf("\n Listagem de Alunos");
    printf("\n Nome\t\tNota");
    printf("\n ------------------");
    printf("\n Ana Beatriz\t8.5");
    printf("\n Bianca Martins\t8.5");
    printf("\n Matheus Hugo\t8.5");
    printf("\n Oct�vio Buzz\t8.5\n");
}
