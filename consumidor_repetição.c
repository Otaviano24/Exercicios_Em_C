#include <stdio.h>

int main() {
    int consumidor, tipo_consumidor, consumo, maior_consumo = 0, menor_consumo = 1000000;
    float preco, total_pagar = 0, total_residencial = 0, total_comercial = 0, total_industrial = 0, media_geral = 0;
    int cont_residencial = 0, cont_comercial = 0, cont_industrial = 0;
    
    while (1) {
        printf("Digite o numero do consumidor (0 para sair): ");
        scanf("%d", &consumidor);
        if (consumidor == 0) break;
        
        printf("Digite o preco do kW/h: ");
        scanf("%f", &preco);
        
        printf("Digite a quantidade de kW/h consumido no mes: ");
        scanf("%d", &consumo);
        
        printf("Digite o codigo do tipo de consumidor (1 - residencial; 2 - comercial; 3 - industrial): ");
        scanf("%d", &tipo_consumidor);
        
        float total_consumo = preco * consumo;
        
        printf("O total a pagar e: %.2f\n", total_consumo);
        total_pagar += total_consumo;
        
        switch (tipo_consumidor) {
            case 1:
                total_residencial += consumo;
                cont_residencial++;
                break;
            case 2:
                total_comercial += consumo;
                cont_comercial++;
                break;
            case 3:
                total_industrial += consumo;
                cont_industrial++;
                break;
        }
        
        if (consumo > maior_consumo) maior_consumo = consumo;
        if (consumo < menor_consumo) menor_consumo = consumo;
    }
    
    media_geral = (total_residencial + total_comercial + total_industrial) / (cont_residencial + cont_comercial + cont_industrial);
    
    printf("O total de consumo para cada um dos tres tipos de consumidores:\n");
    printf("Residencial: %2.2f kW/h\n", total_residencial);
    printf("Comercial: %2.2f kW/h\n", total_comercial);
    printf("Industrial: %2.2f kW/h\n", total_industrial);
    
    printf("O maior consumo verificado e: %d kW/h\n", maior_consumo);
    printf("O menor consumo verificado e: %d kW/h\n", menor_consumo);
    
    printf("A media geral do consumo e: %.2f kW/h\n", media_geral);
    
    return 0;
}
