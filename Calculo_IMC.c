#include <stdio.h>
#include <locale.h>

void limparTela()
{
	system("cls");
}
float IMC(float *peso, float *altura)
{
	float imc = *peso / (*altura * *altura);
	return imc;
}
int main()
{
    setlocale(LC_ALL, "Portuguese");
	float peso, altura, imc = 0.0, calculo;
	char nome[100];
	// Recebimento de informações
	printf("Por favor insira o seu nome para continuar: ");
	fgets(nome, sizeof(nome), stdin);
	nome[strcspn(nome, "\n")] = '\0';
	limparTela();
	printf("Olá %s você podria me informar a sua altura?: ", nome);
	scanf("%f", &altura);
	limparTela();
	printf("%s agora você poderia me informar o seu peso?: ", nome);
	scanf("%f", &peso);
	limparTela();
	// calculo feito chamando a função
	calculo = IMC(&peso, &altura);
	// Exibição
	printf("%s o seu IMC é: %f", nome, calculo);

	return 0;
}
