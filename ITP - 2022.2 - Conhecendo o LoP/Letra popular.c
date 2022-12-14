/*[ITP] Letra popular

O mundo do alfabeto resolveu iniciar uma competição de popularidade entre seus participantes. Cada letra a partir de agora receberá uma pontuação baseada na sua popularidade, ou seja, quantas vezes ela é utilizada no dia a dia, seja em e-mails de trabalho, mensagens no tik tok, ou como variáveis em programas C na disciplina de ITP. A pontuação será atribuída como o número de vezes que a letra foi usada naquele dia, multiplicado por um valor constante que representa o índice de popularidade daquele dia.
Faça um programa que recebe três informações: a letra, a quantidade de vezes que ela apareceu e o valor do índice de popularidade, e imprime como resultado a seguinte frase: "A popularidade de $ é de % pontos", onde $ será a letra que foi lida na entrada e % será a pontuação calculada, restrita a uma casa decimal.*/

#include <stdio.h>

int main()
{
    char letra;
    int um;
    float dois,resultado;
    
    scanf("%c",&letra);
    scanf("%d",&um);
    scanf("%f",&dois);
    resultado = um*dois;
    
    printf("A popularidade de %c é %.1f",letra,resultado);

    return 0;
}
