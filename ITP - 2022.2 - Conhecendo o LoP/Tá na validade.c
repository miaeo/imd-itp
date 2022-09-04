/*[ITP] Tá na validade.

O supermercado Inteiramente e Totalmente Pão-duro (ITP) estava com um grande problema na venda de seus produtos, porque muitos haviam expirado o prazo de validade. Ao invés de tomar vergonha na cara  resolver o problema, a administração bolou um plano para "mascarar" os prazos de validade: em vez de informar a data em que o produto vai expirar, eles colocam a quantidade de dias até o produto expirar. Dessa forma, apenas quem estiver com a matemática afiada, vai conseguir saber se o produto está perto de estragar ou não.

Mas como você está com a matemática e a programação em dia, você resolveu fazer um programa para ajudar os clientes do supermercado! O seu programa vai ler um valor numérico inteiro, que representa uma quantidade de dias, e vai dar como resposta o quanto essa quantidade valeria em anos, meses e dias. Para facilitar suas contas, considere que todo ano tem 365 dias, e todo mês tem 30 dias.*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int dias, a, m, d, resto;

    scanf("%d", &dias);
    
    a = dias / 365;
    resto = dias % 365;
    m = resto / 30;
    d = resto % 30;
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)",a,m,d);

    return 0;
}
