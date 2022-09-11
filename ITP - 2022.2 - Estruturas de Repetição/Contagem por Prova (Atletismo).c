/*[ITP] Contagem por Prova (Atletismo)

Competições de atletismo são caracterizadas por diferentes provas de saltos, corridas e lançamentos. Uma das tarefas do organizador consiste em distribuir as provas ao longo de um dia ou vários de acordo com a quantidade de atletas em cada prova. Você deve desenvolver um programa para auxiliar o organizador a tomar nessa atividade.

Para isso, você irá desenvolver um programa que analisa as inscrições de cada clube e determina a quantidade de atletas em cada tipo de prova. A primeira entrada do programa consiste na quantidade N de equipes inscritas na competição. Em seguida, para cada equipe inscrita, é fornecida uma quantidade indeterminada de inscrições representadas por um único caractere que pode assumir os valores C, S ou L indicando respectivamente uma prova de corrida, salto ou lançamento. A entrada das inscrições de uma equipe termina com a apresentação do valor F e então são fornecidas as inscrições da próxima equipe até que todas as N equipes sejam apresentadas ao programa.

O programa deve apresentar como saída a quantidade de total de atletas em cada tipo de prova na seguinte ordem: provas de corrida; provas de salto e provas de lançamento. Logo em seguida deve ser apresentado a quantidade total de atletas em todas as provas.*/


#include <stdio.h>

int main() {
    int qntd, soma, corrida=0, salto=0, lanc=0;
    char letra;
    scanf("%d", &qntd);
    
    for (int i=0; i<qntd; i++) {
        do {
            scanf("%c", &letra);
            if(letra == 'S') {
                salto += 1;
            }
            
            if(letra =='C') {
                corrida += 1;
            }
            
            if(letra == 'L') {
                lanc += 1;
            }
            
        } while (letra != 'F');
        
    }
    soma = salto + corrida + lanc;
    printf("%d %d %d %d", corrida, salto, lanc, soma);
    
    return 0;
    
}
