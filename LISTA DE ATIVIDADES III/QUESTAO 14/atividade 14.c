#include <stdio.h>
//14
int main (){
	int matriz [4][4];
	int diagonal_1;
	int diagonal_2;
	
	int i,j;
	
	    printf("digite o valor do seu bloco");
			for (int i=0;i<4;i++){ //respons�vel pela linha
				for(int j=0;j<4;j++){//respons�vel pelas colunas
				printf("digite a posi�ao [%d] [%d]:",i,j);
				scanf ("%d",&matriz [i][j]);
				}
			}
	
   diagonal_1=matriz[0][0] + matriz [1][1]+matriz[2][2]+matriz[3][3];
   
	diagonal_2=matriz[0][3] + matriz [1][2]+matriz[2][1]+matriz[3][0];
	
	
	 printf("\n A soma da diagonal 1 �: %d\n", diagonal_1);
	 printf("\n A soma da diagonal 2 �: %d\n", diagonal_2);
	 
	
	return 0;
}
