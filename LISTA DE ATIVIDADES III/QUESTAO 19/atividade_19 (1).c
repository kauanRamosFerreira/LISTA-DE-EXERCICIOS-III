#include <stdio.h>
#include <string.h>


int main (){
char  palavra[20];
int i,j=0;


printf ( "digite uma palavra:");
scanf("%s",palavra);

for (i=0;palavra[i]!= '\0'; i++){

if(palavra[i]=='a' ||palavra[i]=='A'){
j++;}
}

printf ("A palavra (%s) que você digitou aparece a letra 'a' %d vezes",palavra,j);




return 0;
}
