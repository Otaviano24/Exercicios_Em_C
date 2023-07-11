#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
	int quarto, salaTv, salas, cozinha, varanda, banheiro, escolha, classe, potenciaM2, lampada, dimensao1, dimensao2, area = 0;
	float quantidadeLampada, potenciaTotal, TotalLampadas;
	int sair = 1;
	
	while (sair){
		printf("Para sair digite 0, caso queira prosseguir digite 1: ");
        scanf("%d", &sair);
        if (sair == 0)  break;
        
        printf("\n");
        
		printf("Informe o comodo desejado... Digite 1 para Quarto, 2 para Sala Tv, 3 para Salas, 4 para Cozinha, 5 para Varanda, 6 para Banheiro: ");
		scanf("%d", &escolha);
		printf("\n");
		
		switch (escolha){
			case 1:
				printf("Voce escolheu a opcao Quarto!");
				printf("\n");
				classe = 1;
				potenciaM2 = 15;
				printf("Informe a primeira dimensao do comodo: ");
				scanf("%d", &dimensao1);
				printf("Informe a outra dimensao do comodo: ");
				scanf("%d", &dimensao2);
				area = dimensao1 * dimensao2;
				quantidadeLampada = area/15;
				printf("A classificacao desse comodo: %2.1d ", classe);
				printf("\n");
				printf("A area do seu comodo: %2.1d ", area);
				printf("\n");
				printf("A quantidade de lampadas necessaria para esse comodo: %.2f ", quantidadeLampada);
				TotalLampadas += quantidadeLampada;
				potenciaTotal += potenciaM2;
				
			break;
			
			
			case 2:
				printf("Voce escolheu a opcao Sala de Tv!");
				printf("\n");
				classe = 1;
				potenciaM2 = 15;
				printf("Informe a primeira dimensao do comodo: ");
				scanf("%d", &dimensao1);
				printf("Informe a outra dimensao do comodo: ");
				scanf("%d", &dimensao2);
				area = dimensao1 * dimensao2;
				quantidadeLampada = area/15;
				printf("A classificacao desse comodo: %2.1d ", classe);
				printf("A area do seu comodo: %2.1d ", area);
				printf("A quantidade de lampadas necessaria para esse comodo: %2.2f", quantidadeLampada);	
				TotalLampadas += quantidadeLampada;
				potenciaTotal += potenciaM2;
			break;
			
			case 3:
				printf("Voce escolheu a opcao Salas!");
				printf("\n");
				classe = 2;
				potenciaM2 = 18;
				printf("Informe a primeira dimensao do comodo: ");
				scanf("%d", &dimensao1);
				printf("Informe a outra dimensao do comodo: ");
				scanf("%d", &dimensao2);
				area = dimensao1 * dimensao2;
				quantidadeLampada = area/18;
				printf("A classificacao desse comodo: %2.1d ", classe);
				printf("\n");
				printf("A area do seu comodo: %2.1d ", area);
				printf("\n");
				printf("A quantidade de lampadas necessaria para esse comodo: %.f ", quantidadeLampada);
				TotalLampadas += quantidadeLampada;
				potenciaTotal += potenciaM2;
			break;
			
			case 4:
				printf("Voce escolheu a opcao Cozinha!");
				printf("\n");
				classe = 2;
				potenciaM2 = 18;
				printf("Informe a primeira dimensao do comodo: ");
				scanf("%d", &dimensao1);
				printf("Informe a outra dimensao do comodo: ");
				scanf("%d", &dimensao2);
				area = dimensao1 * dimensao2;
				quantidadeLampada = area/18;
				printf("A classificacao desse comodo: %2.1d ", classe);
				printf("\n");
				printf("A area do seu comodo: %2.1d ", area);
				printf("\n");
				printf("A quantidade de lampadas necessaria para esse comodo: %.2f ", quantidadeLampada);
				TotalLampadas += quantidadeLampada;
				potenciaTotal += potenciaM2;
			break;
			
			case 5: printf("Voce escolheu a opcao Varanda!");
				printf("\n");
				classe = 2;
				potenciaM2 = 18;
				printf("Informe a primeira dimensao do comodo: ");
				scanf("%d", &dimensao1);
				printf("Informe a outra dimensao do comodo: ");
				scanf("%d", &dimensao2);
				area = dimensao1 * dimensao2;
				quantidadeLampada = area/18;
				printf("A classificacao desse comodo: %2.1d ", classe);
				printf("\n");
				printf("A area do seu comodo: %2.1d ", area);
				printf("\n");
				printf("A quantidade de lampadas necessaria para esse comodo: %.2f ", quantidadeLampada);
				TotalLampadas += quantidadeLampada;
				potenciaTotal += potenciaM2;
			break;
			
			case 6:
				printf("Voce escolheu a opcao Banheiro!");
				printf("\n");
				classe = 3;
				potenciaM2 = 20;
				printf("Informe a primeira dimensao do comodo: ");
				scanf("%d", &dimensao1);
				printf("Informe a outra dimensao do comodo: ");
				scanf("%d", &dimensao2);
				area = dimensao1 * dimensao2;
				quantidadeLampada = area/20;
				printf("A classificacao desse comodo: %2.1d ", classe);
				printf("\n");
				printf("A area do seu comodo: %2.1d ", area);
				printf("\n");
				printf("A quantidade de lampadas necessaria para esse comodo: %.2f ", quantidadeLampada);
				TotalLampadas += quantidadeLampada;
				potenciaTotal += potenciaM2;
			break;
			};
        
	};
	printf("Total de lampadas: %2.2f",TotalLampadas);
	printf("Total de potencia: %2.2f",potenciaTotal);
	
	return 0;
}
