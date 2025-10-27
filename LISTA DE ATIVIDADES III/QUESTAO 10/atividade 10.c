			#include <stdio.h>
			
			int main (){
				int i,j;
			    int matriz1[4][4];
			    int maiorLinha;
			      printf("digite o valor do seu bloco");
			for (int i=0;i<4;i++){ //responsavel pela linha
				for(int j=0;j<4;j++){//responsavel pelas colunas
				printf("digite a posi�ao [%d] [%d]:",i,j);
				scanf ("%d",&matriz1 [i][j]);
				}
			}
					for (int i = 0; i < 4; i++) {
    int maiorLinha = matriz1[i][0];
    for (int j = 1; j < 4; j++) {
        if (matriz1[i][j] > maiorLinha) {
            maiorLinha = matriz1[i][j];
        }
    }
    printf("Maior valor da linha %d: %d\n", i, maiorLinha);
}

				return 0;
			} 
			

