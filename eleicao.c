#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    char candidato1[100], candidato2[100], candidato3[100];
    int voto1, voto2, voto3;

    printf("Nome do 1�candidato: ");
    scanf("%s", candidato1);
    printf("N�mero de votos: ");
    scanf("%d", &voto1);

    printf("Nome do 2�candidato: ");
    scanf("%s", candidato2);
    printf("N�mero de votos: ");
    scanf("%d", &voto2);

    printf("Nome do 3�candidato: ");
    scanf("%s", candidato3);
    printf("N�mero de votos: ");
   scanf("%d", &voto3);
   //Comparador de maior n�meros de votos
   if (voto1 > voto2 && voto1 > voto3){
        printf("O candidato %s venceu a elei��o com o total de %d votos.", candidato1, voto1);
   } else if (voto2 > voto1 && voto2 > voto3) {
            printf("O candidato %s venceu a elei��o com o total de %d votos.", candidato2, voto2);
     } else if (voto3 > voto1 && voto3 > voto2) {
                printf("O candidato %s venceu a elei��o com o total de %d votos.", candidato3, voto3);
        } else{
                    printf("ERROR!: Nenhum dos candidatos venceu a elei��o por favor chame o t�cnico responsavel!!\n");
          }
return 0;
}
