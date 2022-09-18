/*[ITP] Declarando Funções

Escreva uma função chamada ehPar que verifica se um número é par. Essa função deve retornar o valor true em caso afirmativo, e false caso contrário. O programa deve chamar essa função.*/


#include <stdio.h>

int ehPar(int x) {
    typedef enum {false, true} bool;
    if (x % 2 != 0) {
        return false;
    } else {
        return true;
    }
}
    
int main() {
    int num, r;
    scanf("%d", &num);
    
    r = ehPar(num);
    if (r == 1) {
        printf("true");
    } else {
        printf("false");
    }
    
    return 0;
}
