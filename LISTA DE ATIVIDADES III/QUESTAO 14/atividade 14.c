#include <stdio.h>
//14
int main (){
	int matriz [4][4];
	int diagonal_1;
	int diagonal_2;
	
	int i,j;
	
	    printf("digite o valor do seu bloco");
			for (int i=0;i<4;i++){ //responsável pela linha
				for(int j=0;j<4;j++){//responsável pelas colunas
				printf("digite a posiçao [%d] [%d]:",i,j);
				scanf ("%d",&matriz [i][j]);
				}
			}
	
   diagonal_1=matriz[0][0] + matriz [1][1]+matriz[2][2]+matriz[3][3];
   
	diagonal_2=matriz[0][3] + matriz [1][2]+matriz[2][1]+matriz[3][0];
	
	
	 printf("\n A soma da diagonal 1 é: %d\n", diagonal_1);
	 printf("\n A soma da diagonal 2 é: %d\n", diagonal_2);
	 
	
	return 0;
}
