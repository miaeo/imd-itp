/*[ITP] Imprimir X com uma letra

Podemos obter formas geométricas com caracteres. Faça um programa que dado um inteiro ele imprima no formato de um X na quantidade de linhas -1 do inteiro, com a letra selecionada.*/


#include <stdio.h>

int main() {
    char letra;
    int qntd;
    
    scanf("%d %c", &qntd, &letra);
    
    
    for (int x = 1; x < qntd; x++){
        for (int y = 1; y < qntd; y++){
            if((x==y)||(y==qntd-x)) {
                printf("%c", letra);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
