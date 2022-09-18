/*[ITP] Número perfeito (função)

Na matemática, um número perfeito é um número inteiro para o qual a soma de todos os seus divisores positivos próprios (excluindo ele mesmo) é igual ao próprio número. Por exemplo o número 6 é perfeito, pois 1+2+3 é igual a 6.

Sua tarefa é escrever um programa que utiliza uma função com tipo de retorno bool, que recebe um inteiro x e retorna true se x for perfeito ou false caso contrário. Seu programa deve utilizar a função para determinar se um número é perfeito ou não.

A primeira linha da entrada contém um inteiro N, indicando o número de casos a serem verificados. Cada uma das N linhas seguintes contém um valor inteiro X, que pode ser ou não, um número perfeito. Para cada caso de teste de entrada, imprima a mensagem “X eh perfeito” ou “X nao eh perfeito”, de acordo com a especificação fornecida.*/


#include <stdio.h>

int perfeito(int x) {
    typedef enum {false, true} bool;
    int qntdDiv = 0;
    
    for (int i = 1; i <= x -1; ++i) {
        if (x % i == 0) {
            qntdDiv += i;
        }
    }
    if (qntdDiv == x) {
        return true;
    } else {
        return false;
    }
}
    
int main() {
    int num, qntd, r;
    scanf("%d", &qntd);
    
    for (int i = 1; i <= qntd; ++i) {
        scanf("%d", &num);
        r = perfeito(num);
        if (r == 1) {
            printf("%d eh perfeito\n", num);
        } else {
            printf("%d nao eh perfeito\n", num);
        }
    }
    
    return 0;
}
