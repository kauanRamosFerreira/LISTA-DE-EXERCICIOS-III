#include <stdio.h>

int main (){
int numero;
printf ("digite um número :\n ");
scanf("%d",&numero);
if(numero > 0 )
printf ("O numero %d é positivo maior que zero\n");
else if(numero ==0)

printf("O numero %d é igual a 0\n",numero);

else 
printf(" O numero %d é negativo\n",numero); 

return 0;
}