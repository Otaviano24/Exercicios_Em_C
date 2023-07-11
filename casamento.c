#include <stdio.h>   //  Arquivo de cabeçalho (header)
#include <locale.h>

int main ()
{
	float festa, fotos, convidados;
	int viagem, mes;
	
		mes = 800;
	printf("Qual e a quantidade de pessoas que iram na festa?  ");
	scanf("%f", &convidados);
		float precoConvidado, precoFesta;
		precoConvidado = 45;
		precoFesta = convidados * precoConvidado;
			printf("A festa de casamento vai custar: %2.2f\n ", precoFesta);
	
	printf("Informa a quantidade de fotos:  ");
	scanf("%f", &fotos);
		float custoFoto;
		custoFoto = 35;
		float custoTotalFotos;
		custoTotalFotos = fotos * custoFoto;
			printf("O valor que voce vai gastar com as fotos e: %2.2f\n ", custoTotalFotos);
	
	printf("Voce pode escolher quatro destino de viagem. Digite 1 para Natal, 2 para Fortaleza, 3 para Serras Gauchas, e 4 para nao viagar:  ");
	scanf("%d", &viagem);
	
	
	float custoViagem;
	switch (viagem){
	
		case 1: 
			custoViagem = 6500;
			printf("Voce escolheu como destino natal! A viagem custa R$ 6.500,00\n");
		break;
		
		case 2:
			custoViagem = 8000;
			printf("Voce escolheu como destino Fortaleza! A viagem custa R$ 8.000,00\n");
		break;
		
		case 3:
			custoViagem = 5600;
			printf("Voce escolheu como destino Serra Gauchas! A viagem custa R$ 5.600,00\n");
		break;
		
		case 4:
			custoViagem = 0;
			printf("Voce optou por nao viagar! O seu custo de viagem e R$ 0,00\n");
		break;	
		
		default:
			printf ("Erro valor invalido! Digite apenas valores de 1 a 4\n");
	
};
	
	float vestido;
		printf("Informe o valor do vestido da noiva:  ");
		scanf("%f", &vestido);
		
	float custoTotalCasamento;
	custoTotalCasamento = 	precoFesta + custoTotalFotos + custoViagem + vestido;
		printf("O valor total do casamento e: %2.2f\n ", custoTotalCasamento);
			
					
	float tempo;
	tempo = custoTotalCasamento/mes;
		printf("Voces levaram %2.0f de meses para realizar o casamento.", tempo);
	
	
return 0;
};
