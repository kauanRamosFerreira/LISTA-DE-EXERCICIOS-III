#include <stdio.h>
#include <ctype.h>
 int main () {
    char palavra[50];
    int vogais =0,consoantes = 0;
    int i=0;
    char letra;

    printf ("digite uma palavra: ");
    scanf ( "%s" ,palavra);


    while (palavra [i] !='\0') {
   //'/0;onde termina a palavra
   
   letra = tolower (palavra [i] ) ;
   //transforma em letra minuscula
   

   if (letra =='a' || letra =='e' ||letra =='i' ||letra =='o' ||letra =='u' ) {

    vogais++;
   }
   else if (letra >= 'a' && letra <='z'){
    consoantes++;
   }
  i++;

    }

printf("consoantes: %d \n" ,consoantes);
printf("vogais : %d \n",vogais);



    return 0;
 }