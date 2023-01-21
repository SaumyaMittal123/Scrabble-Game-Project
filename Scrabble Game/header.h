
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>
# include <math.h>
void removeSpaces(char *str);
int bag(char word[15], char b[]);
int point(char);
int score(char wd[15],int nl);
int search(FILE *fp,char word[]);
int dict(char word[15]);
char bagwd[11];
int strcmpic(char* s1, char* s2);
void form_word(FILE *fp,char b[50]);
int wht(char wd[17]);
void form_best(FILE *fp,char b[]);
