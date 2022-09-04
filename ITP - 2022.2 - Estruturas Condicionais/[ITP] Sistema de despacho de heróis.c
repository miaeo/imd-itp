#include <stdio.h>
#include <stdlib.h>

int main() {
    int rank, qntd, r5=5;
    char ameaca;
    scanf("%d %d %c", &qntd, &rank, &ameaca);
    
    switch(ameaca){
        case '1':
            if (rank==1 && qntd>=3){
                printf("Heróis vencerão!");
                break;
            }
            if (rank>1 && qntd>=1){
                printf("Heróis vencerão!");
            } else {
                printf("Melhor chamar Saitama!");
            }
        break;
        
        case '2':
            if (rank==2 && qntd>=3){
                printf("Heróis vencerão!");
                break;
            }
            if (rank>2 && qntd>=1){
                printf("Heróis vencerão!");
            } else {
                printf("Melhor chamar Saitama!");
            }
        break;
        
        case '3':
            if (rank==3 && qntd>=3){
                printf("Heróis vencerão!");
                break;
            }
            if (rank>3 && qntd>=1){
                printf("Heróis vencerão!");
            } else {
                printf("Melhor chamar Saitama!");
            }
        break;
        
        case '4':
            if (rank==4 && qntd>=3){
                printf("Heróis vencerão!");
                break;
            }
            if (rank>4 && qntd>=1){
                printf("Heróis vencerão!");
            } else {
                printf("Melhor chamar Saitama!");
            }
        break;
        
        case '5':
            if (rank==5 && qntd>=1){
                printf("Heróis vencerão!");
            } else {
                printf("Melhor chamar Saitama!");
            }
        break;
        
    }
    return 0;
    
}