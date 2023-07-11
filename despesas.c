#include <stdio.h>
#include <locale.h>
	
int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float despesa_total,salario, agua, luz, telefone, supermercado, combustivel, lazer, educacao, porcentagem, valor_porcentagem, porcentagem_geral, valor_restante, p_agua, p_luz, p_telefone, 
	   p_supermercado, p_combustivel, p_lazer, p_escola;
	
	printf("Insira o valor do seu Sálario: ");
	scanf("%f", &salario);
	printf("Insira o valor da conta D'Agua: ");
	scanf("%f", &agua);
	printf("Insira o valor da conta de Luz: ");
	scanf("%f", &luz);
	printf("Insira o valor da conta de Telefone: ");
	scanf("%f", &telefone);
	printf("Insira o valor da conta de Supermercado: ");
	scanf("%f", &supermercado);
	printf("Insira o valor da conta de Combustivel: ");
	scanf("%f", &combustivel);
	printf("Insira o valor da conta de Lazer: ");
	scanf("%f", &lazer);
	printf("Insira o valor da conta da Escola: ");
	scanf("%f", &educacao);
	
	despesa_total = agua + luz + telefone + supermercado + combustivel + lazer + educacao;
	
//--Conversor_Em_Porcentagem-----------------------------------------------------------------------------------------------
	
	p_agua = (agua / salario) * 100.00;
	p_luz = (luz / salario) * 100.00;
	p_telefone = (telefone / salario) * 100.00;
	p_supermercado = (supermercado / salario) * 100.00;
	p_combustivel = (combustivel / salario) * 100.00;
	p_lazer = (lazer / salario) * 100.00;
	p_escola = (educacao / salario) * 100.00;
	
//--Porcentagem_Que_Sobrou------------------------------------------------------------------------------------------------
	
	porcentagem = valor_porcentagem / salario * 100;
	
	porcentagem_geral = p_agua + p_luz + p_telefone + p_supermercado + p_combustivel + p_lazer + p_escola;
	
	valor_porcentagem = porcentagem_geral / 100 * salario;
	
	valor_restante = salario - valor_porcentagem;
	
//--Comparador_De_Ultrapassagem_De_Porcentagem----------------------------------------------------------------------------------
	
	if (p_agua > 25) {
	printf("A conta de Ãgua ultrapassou 25%% do teu rendimento. \n");
	} if (p_luz > 25) {
	printf("A conta de Luz ultrapassou 25%% do teu rendimento. \n");
	} if (p_telefone > 25) {
	printf("A conta de Telefone ultrapassou 25%% do teu rendimento. \n");
	} if (p_supermercado > 25) {
	printf("A conta do Supermercado ultrapassou 25%% do teu rendimento. \n");
	} if (p_combustivel > 25) {
	printf("A conta do Combustivel ultrapassou 25%% do teu rendimento. \n");
	} if (p_lazer > 25) {
	printf("A conta do Lazer ultrapassou 25%% do teu rendimento. \n");
	}  if (p_escola > 25) {
	printf("A conta da Educação ultrapassou 25%% do teu rendimento. \n");	
	}
	
//--ExibiÃ§Ã£o------------------------------------------------------------------------------------------------------		
	
	printf("A despesa total  é: %.2f.\n\n", despesa_total);
	printf("A porcentagem da Agua em relação ao teu salário é: %.2f%%.\n\n", p_agua);
	printf("A porcentagem da Luz em relação ao teu salário é: %.2f%%.\n\n", p_luz);
	printf("A porcentagem do Telefone em relação ao teu salário é: %.2f%%.\n\n", p_telefone);
	printf("A porcentagem do Supermercado em relação teu salário  é: %.2f%%.\n\n", p_supermercado);
	printf("A porcentagem do Combustivel em relação ao teu salário  é: %.2f%%.\n\n", p_combustivel);
	printf("A porcentagem do teu Lazer em relação ao teu salário  é: %.2f%%.\n\n", p_lazer);
	printf("A porcentagem da tua Educação em relação ao teu salário  é: %.2f%%.\n\n", p_escola);
	printf("O valor restante  é: %d (%.2f%%).", valor_restante, porcentagem);
	
	
	return 0;
	}
