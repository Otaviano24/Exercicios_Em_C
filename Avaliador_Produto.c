#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char sexo, sexo1[3], resposta[4];
    int idade, total_pessoas = 0, sair = 1, cont_respostaSim = 0, cont_respostaNao = 0, cont_respostaSim2 = 0, cont_respostaNao2 = 0, cont_respostaSim3 = 0, cont_respostaNao3 = 0, soma = 0, count = 0, soma2 = 0, count2 = 0;
    int sexo_M = 0, sexo_F = 0, cont_Homem = 0, cont_Mulher = 0;
    float media, media2;

    while (sair) {
        printf("Para sair digite 0, caso queira prosseguir digite 1: ");
        scanf("%d", &sair);
        if (sair == 0)  break;
//----------Detector_De_Erro_De_Caracter_Masculino_E_Feminino-------------------------------------
         do {
     printf("Por favor informe o seu sexo utilizando M ou F: ");
     scanf(" %c", &sexo);
    if (sexo != 'm' && sexo != 'M' && sexo != 'f' && sexo != 'F') {
        printf("ERRO!: Digite o caracter correspondente (M ou F)..........\n\n");
        while (getchar() != '\n');// Limpa o buffer de entrada
    }
} while (sexo != 'm' && sexo != 'M' && sexo != 'f' && sexo != 'F');

//----------Contador_De_Homens_E_Mulheres-----------------------------------
         switch (sexo) {
    case 'M':
    case 'm':
        sexo_M++;
        cont_Homem++;
        break;
    case 'F':
    case 'f':
        sexo_F++;
        cont_Mulher++;
        break;
  }
        sexo1[0] = sexo;
//-------------------------------------------------------------------------
        printf("Por favor informe sua idade: ");
        scanf("%d", &idade);

//----------Detector_De_Erro_De_Caracter_De_Sim_E_Não-----------------------------------
        do {
     printf("Você gostou do nosso produto sim ou não: ");
     scanf("%s", &resposta);
    if (strcmp(resposta, "sim") != 0 && strcmp(resposta, "Sim") != 0 && strcmp(resposta, "não") != 0 && strcmp(resposta, "Não") != 0 && strcmp(resposta, "nao") != 0 && strcmp(resposta, "Nao") != 0) {
        printf("ERRO!: Digite o caracter correspondente (sim ou não)..........\n\n");
        while (getchar() != '\n');// Limpa o buffer de entrada
    }
} while (strcmp(resposta, "sim") != 0 && strcmp(resposta, "Sim") != 0 && strcmp(resposta, "não") != 0 && strcmp(resposta, "Não") != 0 && strcmp(resposta, "nao") != 0 && strcmp(resposta, "Nao") != 0);

//----------Contador_De_Respostas_Possitivas_E_Negativas------------------------
         if (strcmp(resposta, "sim") == 0) {
            cont_respostaSim++;
        } else if (strcmp(resposta, "nao") == 0) {
            cont_respostaNao++;
        }
//----------Contador_De_Respostas_Possitivas_E_Negativas_Por_Gênero-------------
        if ((sexo1[0] == 'M' || sexo1[0] == 'm') && strcmp(resposta, "sim") == 0) {
            cont_respostaSim2++;
            soma += idade;
            count++;
        }
        else if ((sexo1[0] == 'F' || sexo1[0] == 'f') && strcmp(resposta, "sim") == 0) {
            cont_respostaSim3++;
            soma2 += idade;
            count2++;
        }
        else if ((sexo1[0] == 'M' || sexo1[0] == 'm') && strcmp(resposta, "nao") == 0) {
            cont_respostaNao2++;
            soma += idade;
           count++;
        }
        else if ((sexo1[0] == 'F' || sexo1[0] == 'f') && strcmp(resposta, "nao") == 0) {
            cont_respostaNao3++;
            soma2 += idade;
           count2++;
        }
    }
//------------Soma_Dos_Entrevistados------------------------------------------------
    total_pessoas = sexo_F + sexo_M;

//------------Calculo_Media_De_Idade------------------------------------------------
   media = soma / count;
   media2 = soma2 / count2;

//------------Exibição--------------------------------------------------------------
    printf("Total de pessoas entrevistadas: %d\n\n", total_pessoas);
    printf("Total de Homens entrevistados: %d\n\n", cont_Homem);
    printf("Total de Mulheres entrevistadas: %d\n\n", cont_Mulher);
    printf("Total de respostas positivas a respeito do produto: %d\n\n", cont_respostaSim );
    printf("Total de respostas negativas a respeito do produto: %d\n\n", cont_respostaNao);
    printf("Total de respostas positivas de Homens: %d Média de idade: %.2f\n\n", cont_respostaSim2, media);
    printf("Total de respostas negativas de Homens: %d Média de idade: %.2f\n\n", cont_respostaNao2, media);
    printf("Total de respostas positivas de Mulheres: %d Média de idade: %.2f\n\n", cont_respostaSim3, media2);
    printf("Total de respostas negativas de Mulheres: %d Média de idade: %.2f\n\n", cont_respostaNao3, media2);

    return 0;
}
