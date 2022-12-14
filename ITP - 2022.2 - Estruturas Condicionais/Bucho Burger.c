/*[ITP] Bucho Burger

Uma das franquias fictícias de maior sucesso, especializada em sanduíches regionais, é o Bucho Burger. Porém, apesar de ser muito bom em fazer sanduíches, o seu dono não é tão apto a fazer contas de matemática, e frequentemente tem problemas para acertar o troco ou saber quando está faltando alguma coisa no pagamento.
Para minimizar o prejuízo do estabelecimento e o descontentamento dos clientes quando recebem o troco errado, o Bucho Burger resolveu contratar você para fazer um programa simples de caixa. Você fará um programa que recebe o código do pedido e o valor em dinheiro pago pelo cliente, e informará se o valor está correto, se precisa de troco ou se está faltando dinheiro.
Os preços dos combos de sanduíches do Bucho Burger, acompanhados de fritas arretadas e suco de pitomba, são de acordo com a tabela abaixo:

Combos Bucho Burguer
1 - Bucho de Panela = R$ 12
2 - Bucho Inchado = R$ 23
3 - Bucho Duplo = R$ 31
4 - Bucho No Queixo = R$ 28
5 - Buchinho Fit = R$ 15

Seu programa receberá dois valores inteiros, correspondentes ao número do combo e a quantidade de dinheiro fornecida pelo cliente.
Seu programa deve então informar uma de três situações possíveis:
1 - Se houver troco, ele deve imprimir a mensagem "Troco = X reais", onde X é o valor do troco devido ao cliente.
2 - Se não houver troco, ele deve imprimir a mensagem "Deu certim!".
3 - Se faltar dinheiro para completar o valor do combo, ele deve imprimir a mensagem "Saldo insuficiente! Falta X reais", onde X é a quantia que falta para chegar ao valor do combo escolhido.*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    int c1=12, c2=23, c3=31, c4=28, c5=15, dinheiro, troco;
    char combo;
    scanf("%c %d", &combo, &dinheiro);
    
    switch(combo) {
        case '1':
            if (c1==dinheiro){
                printf("Deu certim!");
                break;
            }
            if (c1<dinheiro){
                troco = dinheiro - c1;
                printf("Troco = %d reais", troco);
                break;
            }
            if (c1>dinheiro){
                troco = c1 - dinheiro;
                printf("Saldo insuficiente! Falta %d reais", troco);
            }
        break;
        
        case '2':
            if (c2==dinheiro){
                printf("Deu certim!");
                break;
            }
            if (c2<dinheiro){
                troco = dinheiro - c2;
                printf("Troco = %d reais", troco);
                break;
            }
            if (c2>dinheiro){
                troco = c2 - dinheiro;
                printf("Saldo insuficiente! Falta %d reais", troco);
            }
        break;
        
        case '3':
            if (c3==dinheiro){
                printf("Deu certim!");
                break;
            }
            if (c3<dinheiro){
                troco = dinheiro - c3;
                printf("Troco = %d reais", troco);
                break;
            }
            if (c3>dinheiro){
                troco = c3 - dinheiro;
                printf("Saldo insuficiente! Falta %d reais", troco);
            }
        break;
        
        case '4':
            if (c4==dinheiro){
                printf("Deu certim!");
                break;
            }
            if (c4<dinheiro){
                troco = dinheiro - c4;
                printf("Troco = %d reais", troco);
                break;
            }
            if (c4>dinheiro){
                troco = c4 - dinheiro;
                printf("Saldo insuficiente! Falta %d reais", troco);
            }
        break;
        
        case '5':
            if (c5==dinheiro){
                printf("Deu certim!");
                break;
            }
            if (c5<dinheiro){
                troco = dinheiro - c5;
                printf("Troco = %d reais", troco);
                break;
            }
            if (c5>dinheiro){
                troco = c5 - dinheiro;
                printf("Saldo insuficiente! Falta %d reais", troco);
            }
        break;
    }

    return 0;
}
