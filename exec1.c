#include <stdio.h>

int main() {
    int quantidades[8];
    int essencial;
    int i;

    int urgente = 0;
    int estoqueOk = 0;

    int menorQuantidade = 0;
    
    for(i = 0; i < 8; i++){
        printf("Quantos produtos %d tem no estoque: ", i+1);
        scanf("%d", &quantidades[i]);
        
        printf("O produto %d é essencial? (1-Sim, 2-Nao): ", i+1);
        scanf("%d", &essencial);
        
        if(quantidades[i] < 10 && essencial == 1){
            printf("Reposição Urgente\n");
            urgente++;
        }else{
            printf("Estoque OK\n");
            estoqueOk++;
        }
        
        
        if(i==0 || quantidades[i] < menorQuantidade){
            menorQuantidade = quantidades[i];
        }
    }
    
    printf("Quantidade de produtos com reposição urgente: %d\n", urgente);
    printf("Quantidade de produtos com estoque ok: %d\n", estoqueOk);
    printf("Menor quantidade registrada: %d", menorQuantidade);

    return 0;
}