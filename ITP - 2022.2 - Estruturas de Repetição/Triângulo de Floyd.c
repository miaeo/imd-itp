/*[ITP] Triângulo de Floyd

O triângulo de Floyd é uma série de números que são espalhados sequencialmente por uma série de linhas, onde em cada linha temos a a quantidade de números correspondente a linha, por exemplo linha 5, teremos 5 números, na linha 1 apenas 1, na linha 30 teremos 30 números, números estes de acordo com a sequencia. Escreva um programa que dado um número inteiro imprima o Triângulo de Floyd.*/


#include <stdio.h>

int main() {
    
    int qntd, z = 1;
    scanf("%d", &qntd);
    
    if (qntd<1) {
        printf("Você entrou com %d, tente de novo na próxima", qntd);
    }
    
    for (int x=1; x <= qntd; x++) {
        for (int y=1; y <= x; y++) {
            printf("%2d ", z++);
        }
        printf("\n");
    }
    return 0;
}
