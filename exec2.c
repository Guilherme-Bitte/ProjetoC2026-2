#include <stdio.h>

int main() {
    int idades[10];
    int convite;
    int i;

    int permitidas = 0;
    int negadas = 0;

    int maiorIdade = 0;
    
    for(i = 0; i < 10; i++){
        printf("Qual a idade da %dº pessoa: ", i+1);
        scanf("%d", &idades[i]);
        printf("A pessoa %dº possui convite? (1-Sim ou 2-Nao): ", i+1);
        scanf("%d", &convite);
        
        if(idades[i] >= 18 || convite == 1){
            printf("Entrada Permitida\n");
            permitidas++;
        }else{
            printf("Entrada Negada\n");
            negadas++;
        }
        
        if(i==0 || idades[i] > maiorIdade){
            maiorIdade = idades[i];
        }
    }
    
    printf("Quantidade de entradas permitidas: %d\n", permitidas);
    printf("Quantidade de entradas negadas: %d\n", negadas);
    printf("Maior idade registrada: %d\n", maiorIdade);

    return 0;
}