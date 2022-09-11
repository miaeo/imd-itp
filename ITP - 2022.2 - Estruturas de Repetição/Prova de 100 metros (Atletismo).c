/*[ITP] Prova de 100 metros (Atletismo)

Outra das atribuições da Confederação Brasileira de Atletismo é a organização de competições nacionais incluindo detalhes como quando, onde e quais atletas irão competir.

Parte das provas de atletismo são efetuadas numa área especial denominada de pista de atletismo que é dividida em 8 raias de modo que cada atleta é alocada uma raia individual e assim ele executará toda a prova nessa raia sem atrapalhar os demais. Logo, somente 8 atletas podem competir ao mesmo tempo, o que é chamado de série, de modo que uma competição pode ter uma ou mais séries.

Você deve desenvolver um programa para determinar quantas séries a prova de 100 metros rasos deve ter. Porém, somente os atletas mais rápidos devem ser aptos a competir, isto é, somente os atletas que correram os 100 metros em um tempo inferior ou igual ao estabelecido para inscrição na competição. Desse modo, a primeira entrada do programa será o tempo máximo que o atleta pode ter alcançado para estar apto a competir.

Em seguida, o programa irá receber uma quantidade indeterminada de inscrições até que o valor -1.0 seja apresentado. Cada inscrição consiste em um único valor correspondente ao tempo em segundos que o atleta correu nos 100 metros registrado até a terceira casa decimal.

O programa deve apresentar como saída a quantidade total de atletas aptos a competir e logo em seguida a quantidade de séries necessárias para realização da prova de 100 metros.*/


#include <stdio.h>

int main() {
    int atletas=0,competicoes=0;
    float tpatleta,tpmax;
    
    scanf("%f", &tpmax);
    do {
        scanf("%f", &tpatleta);
        if ((tpatleta > 0) && (tpmax >= tpatleta)) {
            atletas += 1;
        }
    } while (tpatleta != -1);
    
    competicoes = atletas/8;
    
    if ((atletas % 8) > 0) {
        competicoes += 1;
    }
    printf("%d %d", atletas, competicoes);
    
    return 0;
}
