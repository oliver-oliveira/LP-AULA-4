#include<stdio.h>
 int main() {
    float valor;
    printf("Digite o valor total da compra: ");
    scanf("%f",&valor);
    
    if (valor > 50.00) {
        printf("Voce ganhou um brinde!");
    }
    return 0;
}