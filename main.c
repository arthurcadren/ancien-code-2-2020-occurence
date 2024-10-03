//seumegni_20w2176
#include<stdio.h>
#include<stdlib.h>
#include"function.h"
char *T,*word;
int m,n;
int main ()
{     // nom du programme
	printf("\n\tCe programme determine le nombre d'occurence d'une chaine dans un texte\n");

	printf("Entrer precisement votre texte:");

	printf("\t");
        T=input_word(&m);
        printf("\n");

	printf(" Entrer un mot du texte:");
        printf("\t");
	word=input_word(&n);
        int i=count(T,word,m,n);
	printf("le mot '%s' compte %d occurences\n\n",word,i);
        free(T);
	free(word);
}
