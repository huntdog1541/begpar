/*
 * symbol.h
 *
 *  Created on: Jan 14, 2016
 *      Author: dhunt
 */

#ifndef SYMBOL_H_
#define SYMBOL_H_


int init();

int lookup(char s[]);

int insert(char s[], int tok);

char * getLexeme(int pos);

int getTokenType(int pos);

void printSymbol();

#endif /* SYMBOL_H_ */
