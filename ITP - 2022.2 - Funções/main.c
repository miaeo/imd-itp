#include <stdio.h>

int perfeito(int x) {
    typedef enum {false, true} bool;
    int qntdDiv = 0;
    
    for (int i = 1; i <= x; ++i) {
        if (x % i == 0) {
            qntdDiv ++;
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
