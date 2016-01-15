#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "symbol.h"
#include "parse.h"

int parse(FILE * fin)
{
	char temp = getc(fin);
	char str[256];
	str[0] = temp;
	int i = 0;
 	while(temp != EOF)
	{
 	str[i] = temp;
	printf("%c", temp);
	temp = getc(fin);
	i++;
	}
	//str[++i] = '\0';
	int k = lookup(str);
	printf("The word has a value of %d\n", k);
	Strascii(str);
	trimString(str);
	k = lookup(str);
	k = getTokenType(k);
	printf("The word has a value of %d\n", k);
	return k;
}

void Strascii(char * str)
{
	int i =0;
	int length = strlen(str);
	for(i = 0; i < length; i++)
	{
		printf("The character %c is %d\n", str[i], str[i]);
	}
}

char * trimString(char * str)
{
	int i = 0, j = 0, length = strlen(str);
	char * temp = (char * )malloc(sizeof(char) * (length + 1));
	while(isalnum(str[i]))
	{
		temp[j] = str[i];
		i++;
		j++;
	}
	temp[j] = 0;
	Strascii(temp);
	strcpy(str, temp);
	free(temp);
	return str;
}
