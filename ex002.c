// Diretivas de pr�-processamento
#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX002 - Especiais >>>\n");
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n \\a\t\=\tBeep");
    printf("\n \\n\t=\tNova Linha");
    printf("\n \\t\t=\tTabula��o");
    printf("\n \\\\\t=\t Barra");
    printf("\n \%%\%%\t=\tPorcentagem");
    printf("\n \\\?\t=\tInterroga��o");
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
}
