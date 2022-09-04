/*[ITP] Conversor de temperaturas

Escreva um programa em que o usuário informe a temperatura (em números reais) e a escala utilizada (Celsius, Farenheit ou Kelvin). 
A saída do programa será a temperatura nas 3 escalas, com duas casas decimais de precisão.
Considere que as escalas serão informadas como uma única letra:

C = Temperatura em graus Celsius (°C)
F = Temperatura em graus Farenheit (°F)
K - Temperatura em graus Kelvin (K)

A conversão entre as escalas pode ser feita com as seguintes equações:
K = C + 273.15
F = C * 1.8 + 32*/


#include <stdio.h>

int main() {
    
    float temp;
    char escala;

    scanf("%f %c", &temp, &escala);
    
    float ctemp, ftemp, ktemp;
    
    switch(escala) {
        case 'C':
            ctemp = temp;
            ftemp = (ctemp * 1.8) + 32;
            ktemp = ctemp + 273.15;
            break;
        case 'F':
            ftemp = temp;
            ctemp = (ftemp - 32) / 1.8;
            ktemp = ctemp + 273.15;
            break;
        case 'K':
            ktemp = temp;
            ctemp = ktemp - 273.15;
            ftemp = (ctemp * 1.8) + 32;
            break;
    }
    
    printf("Celsius: %.2f \nFarenheit: %.2f \nKelvin: %.2f",ctemp,ftemp,ktemp);

    return 0;
}
