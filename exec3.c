#include <stdio.h>

int main() {
    float consumos[7];
    int horarioPico;
    int i;

    int altoCusto = 0;
    int custoNormal = 0;

    float soma = 0;
    float media;
    
    for(i = 0; i < 7; i++){
        printf("Qual o consumo em kWh do %dº equipamento: ", i+1);
        scanf("%f", &consumos[i]);
        
        printf("O %dº equipamento está em horario de pico? (1-Sim ou 2-Nao): ", i+1);
        scanf("%d", &horarioPico);
        
        if(consumos[i] > 100 && horarioPico == 1){
            printf("Alto Custo\n");
            altoCusto++;
        }else{
            printf("Custo Normal\n");
            custoNormal++;
        }
        soma += consumos[i];
    } 
        media = soma/7;
        
    printf("Quantidade de equipamentos com alto custo: %d\n", altoCusto);
    printf("Quantidade de equipamentos com custo normal: %d\n", custoNormal);
    printf("Consumo médio dos equipamentos: %.2f\n", media);

    return 0;
}