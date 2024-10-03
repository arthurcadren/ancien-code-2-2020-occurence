//seumegni_20w2176
#include<stdio.h>
#include<stdlib.h>

char* input_word(int *n)
{
	int i=0;
	char *word=(char*)malloc(sizeof(char));
	do
	{
		realloc(word,sizeof(char)*(i+1));
		word[i]=getchar();
		++i;
	}
	while(word[i-1]!='\n');
	word[i-1]='\0';
	word=(char*)realloc(word,sizeof(char)*(i-1));
	*n=i;
	return word;
}
int search(char* M, char p, int n)
{
	int i;
	for(i=0;i<n;++i)
	{
		if(M[i]==p)
		{
			return i;
		}
	}
	return 0;
}
int compare(char* v1,char* v2,int n)
{
	int i;
	for(i=0;i<n;++i)
	{
		if(search(v1,v2[i],n)!=i)
		{
			return 0;
		}
	}
	return 1;
}
int count(char* T, char* M, int m,int n)
{
	int i=0,j,counter=0;
	char* p;
	while(i<=m)
	{
		if(M[0]==T[i])
		{
			p=(char*)malloc(sizeof(char)*n);
			for(j=0;j<n-1;++j)
			{
				p[j]=T[i];
				++i;
			}
			counter=counter + compare(p,M,n-1);
		}
		else
		{
			++i;
		}
	}
	return counter;
}

