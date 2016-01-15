/*
* Main.c
*/
#include <stdio.h>
#include "parse.h"
#include "global.h"
#include "symbol.h"


int main(int argc, char ** argv)
{
	init();
	printSymbol();
	FILE * fin = fopen("test.txt", "r");
	parse(fin);
}
