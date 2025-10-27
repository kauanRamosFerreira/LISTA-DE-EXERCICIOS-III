#include <stdio.h>
#include <string.h>
int main(){
char palavra_1[12];
char palavra_2[12];
printf("digite a sua primeira palavra ");
scanf("%s",palavra_1);

printf("digite a sua segunda palavra ");
scanf("%s",palavra_2);


if (strcmp(palavra_1, palavra_2) == 0)

printf("As palavras \n ' %s ' e '%s ' são iguais ",palavra_1,palavra_2);

else
printf("as palavras que você digitou foram:\n %s.\n %s.\n",palavra_1,palavra_2);


return 0;
}

