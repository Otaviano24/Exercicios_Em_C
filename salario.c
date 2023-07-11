	#include <stdio.h>
	#include <locale.h>
	
	int main ()
	{
		setlocale(LC_ALL, "Portuguese");
		
		char salarioClassificado;
		float salario;
		float calculoImposto;
				float porcentagemImposto;
			
		printf("Informe o seu Salario:  ");
		scanf("%f", &salario);
		
		
		int opcao;
		printf("Digite 1 para a escolha de calculo de imposto, 2 para opcao Novo Salario, e 3 para opcao de Classificacao \n");
		scanf("%d", &opcao);
	
		switch(opcao)
		{
			case 1:
				printf("Voce escolheu a opcao Imposto!");
				
				if (salario < 500.00)
				{
					porcentagemImposto = 0.5 ;
					calculoImposto = salario * porcentagemImposto;
					printf("O valor do imposto a ser cobrado e: %2.2f  ", porcentagemImposto);
					printf("O calculo com o imposto a ser cobrado e: R$ %2.2f ", calculoImposto);
				}
				
				else if (salario >= 500.0 && salario < 850.0)
				{
					porcentagemImposto = 0.10;
					calculoImposto = salario * porcentagemImposto;
					printf("O valor do imposto a ser cobrado e: %2.2f \n ", porcentagemImposto);
					printf("O calculo com o imposto a ser cobrado e: R$ %2.2f\n ", calculoImposto);
				}
				
				else if (salario > 850)
				{
					porcentagemImposto = 0.15;
					calculoImposto = salario * porcentagemImposto;
					printf("O valor do imposto a ser cobrado e.............: %2.2f ", porcentagemImposto*100);
					printf("O calculo com o imposto a ser cobrado e: R$ %2.2f ", calculoImposto);
				}
				break;
				
			case 2:
				printf("Voce escolheu a opcao Novo Salario!");
					float novoSalario, aumentoSalario;
					
					if (salario < 450){
						aumentoSalario = 100;
						novoSalario = salario + aumentoSalario;
						printf("O aumento que voce vai receber e: R$ %2.2f\n ", aumentoSalario);
						printf("O seu novo salrio é: R$ %2.2f\n ", novoSalario);
					}
					else if (salario >= 450 && salario < 750)
					{
						aumentoSalario = 75;
						novoSalario = salario + aumentoSalario;
						printf("O aumento que voce vai receber e: R$ %2.2f\n ", aumentoSalario);
						printf("O seu novo salrio é: R$ %2.2f\n ", novoSalario);
					}
					else if (salario >= 750 && salario <= 1500)
					{
						aumentoSalario = 50;
						novoSalario = salario + aumentoSalario;
						printf("O aumento que voce vai receber e: R$ %2.2f\n ", aumentoSalario);
						printf("O seu novo salrio é: R$ %2.2f\n ", novoSalario);
					}
					
					else 
					{
						aumentoSalario = 25;
						novoSalario = salario + aumentoSalario;
						printf("O aumento que voce vai receber e: R$ %2.2f\n ", aumentoSalario);
						printf("O seu novo salrio é: R$ %2.2f\n ", novoSalario);
					}
					
						
				break;
				
				case 3:
					printf("Voce escolheu a opcao Classificacao!");
						 
							if (salario <= 700){
								
								printf("A situacao do seu salario e Mal remunerado");
							}
							else if (salario > 700){
									
								printf("A situacao do seu salario e Bem remunerado");	
							};
				break;
				
				default:
					printf("Numero incorreto! Voce tem que escolher de 1 a 3 somente! ");	
			};
		
		
		return 0;
	}
