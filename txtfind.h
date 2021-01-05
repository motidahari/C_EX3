#include <stdio.h>  
#include <math.h>
#include <string.h> 
#include <stdlib.h> 
#include "txtfind.c" 


int similar(char *s, char *t, int n);
void readFromFile();
int getLine(char s[]);
int getWord(char w[]);
int Substring( char * str1, char * str2);
void searchWordInFile(char *str,char *line);
void searchSimilarWordInFile(char *str,char *line);
void print_lines(char *str,char *line);
void print_similar_words(char *str,char *line);
void checkLine(char *token,char *search);
