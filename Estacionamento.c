#include <stdio.h>
#include <locale.h>
// Função para calcular as taxas de estacionamento
float calculaTaxas(float hEstacionado) {
    float taxa = 2.0;// Taxa mínima
    if (hEstacionado > 3) {
        // Calcular taxa adicional
        float hExcedidas = hEstacionado - 3;
        taxa += hExcedidas * 0.5;
        // Verificar se a taxa excede o máximo de $10,00
        if (taxa > 10.00) {
            taxa = 10.00;
        }
    }
    return taxa;
}
int main() {
	setlocale(LC_ALL, "Portuguese");
    float hCliente1, hCliente2, hCliente3;
    float tCliente1, tCliente2, tCliente3;
    float totalRecebido;

    printf("Horas estacionadas do cliente 1: ");
    scanf("%f", &hCliente1);
    printf("Horas estacionadas do cliente 2: ");
    scanf("%f", &hCliente2);
    printf("Horas estacionadas do cliente 3: ");
    scanf("%f", &hCliente3);
    // Comparar Horas Exedidas
    printf("-------------------------------------\n");
    if (hCliente1 < 24){
    	tCliente1 = calculaTaxas(hCliente1);
	}
    	else {
		printf("Atenção!! O limite de horas do Cliente 1 expirou!! \n Nenhum carro pode ficar mais que 24 horas no estacionamento!");
	}
	if (hCliente2 < 24) {
		tCliente2 = calculaTaxas(hCliente2);
	}
		else {
		printf("\nAtenção!! O limite de horas do Cliente 2 expirou!! \n Nenhum carro pode ficar mais que 24 horas no estacionamento!");
	}
	if (hCliente3 < 24){
		tCliente3 = calculaTaxas(hCliente3);
	}
		else {
		printf("\nAtenção!! O limite de horas do Cliente 3 expirou!! \n Nenhum carro pode ficar mais que 24 horas no estacionamento!");
    }
   	printf("-------------------------------------\n");
    // Calcular o total recebido no dia
    totalRecebido = tCliente1 + tCliente2 + tCliente3;
    // Imprimir a tabela com as taxas de estacionamento
    printf("\nRelatório de Taxas de Estacionamento\n");
    printf("-------------------------------------\n");
    printf("Cliente\tHoras Estacionadas\tTaxa\n");
    printf("-------------------------------------\n");
    printf("1\t%.2f\t\t\t%.2f\n", hCliente1, tCliente1);
    printf("2\t%.2f\t\t\t%.2f\n", hCliente2, tCliente2);
    printf("3\t%.2f\t\t\t%.2f\n", hCliente3, tCliente3);
    printf("-------------------------------------\n");
    printf("Total Recebido no Dia: $%.2f\n", totalRecebido);
    return 0;
}
