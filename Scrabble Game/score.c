
# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <math.h>
# include "header.h"
int score(char wd[],int nl) //nc = number of letters in bag
{
    int nc=nl;
    //printf("Word is: %s\n",wd);
    //printf("%d\n",nc);
    int i;
    char ch;
    int wl=strlen(wd);
    //printf("word length = %d\n",wl);
        int weight=0,mult=0,good=0,bad=0,score=0;
        for(i=0;i<wl;i++)
        {
            ch=wd[i];
            weight=weight+point(ch);
        }
        //printf("%d\n",weight);
        good=(nc-1)*wl;
        int a=3*(nc+1-wl);
        bad=(a>1)?a:1;
        mult=good-bad;
        //printf("%d %d %d %d\n",good,a,bad,mult);
        score=weight*mult;
        //printf("%d\n",score);
        return score;


}
int point(char ch)
{
    //returning point value of char using strchr function
    if(strchr("EAIONRTLSUeaionrtlsu\0",ch)!=NULL)
        return 1;
    else if(strchr("DGdg\0",ch)!=NULL)
        return 2;
    else if(strchr("BCMPbcmp\0",ch)!=NULL)
        return 3;
    else if(strchr("FHVWYfhvwy\0",ch)!=NULL)
        return 4;
    else if(strchr("Kk\0",ch)!=NULL)
        return 5;
    else if(strchr("JXjx\0",ch)!=NULL)
        return 8;
    else if(strchr("QZqz\0",ch)!=NULL)
        return 10;
    else
        return 0;
}
