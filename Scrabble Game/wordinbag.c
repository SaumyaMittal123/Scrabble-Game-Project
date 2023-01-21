
//THIS PROGRAM HELP TO FIND IF GIVEN WORD IS FORMED FROM BAG OF LETTERS
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>
# include <math.h>
# include "header.h"
void removeSpaces(char *b)
{

    int count = 0;
    int i;
    for (i = 0; b[i]; i++)
        if (b[i] != ' ')
            b[count++] = b[i];
     b[count] = '\0';
}
int bag(char word[50], char b[])
{
    int l1=strlen(word);
    int l2=strlen(b);
    //counting number of stars
    int cs=0;
    int i;
    for(i=0;i<l2;i++)
    {
        if(b[i]=='*')
            cs++;
    }
    //checking letters from bag
    char vwl[]="AEIOUaeiou";
    char ch;
    int j;
    char b1[l2];
    strcpy(b1,b);
    //printf("%s\n",b1);
    int flag;
    //printf("%c-%c\n",'0'-32,'0'+32);
    for(i=0;i<l1;i++)
    {
        ch=word[i];
        flag=0;
        if(strchr(vwl,ch)==NULL)
        {
            for(j=0;j<l2;j++)
            {
                if((b1[j]==ch||b1[j]==ch-32||b1[j]==ch+32)&&(b1[j]!='0'&&b1[j]!='*'))
                {
                    //printf("%c_%c\n",b1[j],ch);
                    flag=1;
                    b1[j]='0';
                    break;

                }
            }
            if(flag==0)
                return flag;
        }
        else
        {
            for(j=0;j<l2;j++)
            {
                if((b1[j]==ch||b1[j]==ch-32||b1[j]==ch+32)&&(b1[j]!='0'&&b1[j]!='*'))
                {
                    flag=1;
                    b1[j]='0';
                    break;
                }
            }
            if(flag==0)
            {
                if(cs>0)
                {
                    word[i]='*';
                    cs--;
                    flag=1;
                }
            }
            if(flag==0)
                return flag;
        }
    }
    return 1;
}


