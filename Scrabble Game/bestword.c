
# include <time.h>
# include "header.h"
# include <stdio.h>
# include <string.h>
# include "word_in_dict.c"
# include "wordinbag.c"
# include "score.c"
int gf=0;
int ms=-9999;
char mword[17];
void main()
{
    char b[50];
    clock_t start,end;
    //User interface for receive letters and word
    printf("Enter bag words: ");
    scanf("%[^\n]",b);
    start=clock();
    removeSpaces(b);
    int nlb=strlen(b);
    int co=15;
    FILE *fp2,*fp3,*fp4,*fp5,*fp6,*fp7,*fp8,*fp9,*fp10,*fp11,*fp12,*fp13,*fp14,*fp15;
    fp2=fopen("dic2s.txt","r");
    fp3=fopen("dic3s.txt","r");
    fp4=fopen("dic4s.txt","r");
    fp5=fopen("dic5s.txt","r");
    fp6=fopen("dic6s.txt","r");
    fp7=fopen("dic7s.txt","r");
    fp8=fopen("dic8s.txt","r");
    fp9=fopen("dic9s.txt","r");
    fp10=fopen("dic10s.txt","r");
    fp11=fopen("dic11s.txt","r");
    fp12=fopen("dic12s.txt","r");
    fp13=fopen("dic13s.txt","r");
    fp14=fopen("dic14s.txt","r");
    fp15=fopen("dic15s.txt","r");
    while(co>=2)
    {
        if(co==15)
            form_best(fp15,b);
        else if(co==14)
            form_best(fp14,b);
        else if(co==13)
            form_best(fp13,b);
        else if(co==12)
            form_best(fp12,b);
        else if(co==11)
            form_best(fp11,b);
        else if(co==10)
            form_best(fp10,b);
        else if(co==9)
            form_best(fp9,b);
        else if(co==8)
            form_best(fp8,b);
        else if(co==7)
            form_best(fp7,b);
        else if(co==6)
            form_best(fp6,b);
        else if(co==5)
            form_best(fp5,b);
        else if(co==4)
            form_best(fp4,b);
        else if(co==3)
            form_best(fp3,b);
        else if(co==2)
            form_best(fp2,b);
        co--;
    }
    if(gf==0)
        printf("Sorry no word possible\n");
    else
    {
        printf("Maximum score word is: \n");
        printf("%s\n",mword);
        printf("Maximum score is: \n");
        printf("%d\n",ms);
        end=clock();
        printf("Time taken by the program is: %f seconds",((double)(end-start))/CLOCKS_PER_SEC);
    }
}
void form_best(FILE *fp,char b[])
{
    char word[17],word1[17];
    int res,stc;
    while(!feof(fp))
    {
        fscanf(fp,"%s\n",&word);
        strcpy(word1,word);
        res=bag(word,b);
        if(res==1)
        {
            gf=1;
            stc=score(word,strlen(b));
            if(stc>ms)
            {
                ms=stc;
                int g;
                for(g=0;g<strlen(word);g++)
                {
                    mword[g]=word1[g];
                }
                mword[g]='\0';
                return;
            }
        }
    }
}

