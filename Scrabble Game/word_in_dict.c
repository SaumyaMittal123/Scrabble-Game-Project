
//THIS PROGRAM FIND IF GIVEN WORD IS A VALID WORD MADE FROM DICTIONARY
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include "header.h"

 
int strcmpic(char* s1, char* s2){
    int i;
     
    if(strlen(s1)!=strlen(s2))
        return -1;
         
    for(i=0;i<strlen(s1);i++){
        if(toupper(s1[i])!=toupper(s2[i]))
            return s1[i]-s2[i];
    }
    return 0;
}
int dict(char word[50])
{
    char ch;
    int i=0;
    FILE *fp2,*fp3,*fp4,*fp5,*fp6,*fp7,*fp8,*fp9,*fp10,*fp11,*fp12,*fp13,*fp14,*fp15;
    fp2=fopen("dic2.txt","r");
    fp3=fopen("dic3.txt","r");
    fp4=fopen("dic4.txt","r");
    fp5=fopen("dic5.txt","r");
    fp6=fopen("dic6.txt","r");
    fp7=fopen("dic7.txt","r");
    fp8=fopen("dic8.txt","r");
    fp9=fopen("dic9.txt","r");
    fp10=fopen("dic10.txt","r");
    fp11=fopen("dic11.txt","r");
    fp12=fopen("dic12.txt","r");
    fp13=fopen("dic13.txt","r");
    fp14=fopen("dic14.txt","r");
    fp15=fopen("dic15.txt","r");
    char temp[16];
    int res=0;
    int l=strlen(word);
    if(l==2)
        res=search(fp2,word);
    else if(l==3)
        res=search(fp3,word);
    else if(l==4)
        res=search(fp4,word);
    else if(l==5)
        res=search(fp5,word);
    else if(l==6)
        res=search(fp6,word);
    else if(l==7)
        res=search(fp7,word);
    else if(l==8)
        res=search(fp8,word);
    else if(l==9)
        res=search(fp9,word);
    else if(l==10)
        res=search(fp10,word);
    else if(l==11)
        res=search(fp11,word);
    else if(l==12)
        res=search(fp12,word);
    else if(l==13)
        res=search(fp13,word);
    else if(l==14)
        res=search(fp14,word);
    else if(l==15)
        res=search(fp15,word);
    fclose(fp2);
    fclose(fp3);
    fclose(fp4);
    fclose(fp5);
    fclose(fp6);
    fclose(fp7);
    fclose(fp8);
    fclose(fp9);
    fclose(fp10);
    fclose(fp11);
    fclose(fp12);
    fclose(fp13);
    fclose(fp14);
    fclose(fp15);
    /*if(res==1)
        printf("word in dict\n");
    else
        printf("word not in dict\n");*/
    return res;
}
int search(FILE *fp,char word[])
{
    char temp[50];
    int flag=0;
    while(!feof(fp))
    {
        fscanf(fp,"%s\n",temp);
        if(strcmpic(word,temp)==0)
        {
            flag=1;
            break;
        }
    }
    fclose(fp);
    return flag;
}
