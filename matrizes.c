#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
    float matriz[2][5], somatotal = 0, somalinha;
    int m, n;
    
    printf("Informe o número de linhas e colunas da matriz: ");
    scanf("%d %d", &m, &n);
    
    if (m <= 20 && n <= 50){
    	printf("Insira os valores da matriz:\n");
	    for (int i = 0; i < m; i++) {
	    	somalinha = 0;
	        for (int j = 0; j < n; j++) {
	            scanf("%f", &matriz[i][j]);
	            somalinha += matriz[i][j];
	            somatotal += matriz[i][j];
	        }
	         printf("A soma dos elementos da linha %d: %.2f\n", i+1, somalinha);
	    }
	    printf("A soma de todos os elementos da matriz: %.2f\n", somatotal);
	} else {
			printf("ERROR:......você inseriu um valor acima do limite!");
		}
     
    return 0;
}

