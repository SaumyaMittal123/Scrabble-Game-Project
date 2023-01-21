# include "weight.c"
# include "header.h"
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>
# define LSIZE 80000
# define RSIZE 17
void sep(FILE *fp,FILE *fpn)
{
    char line[LSIZE][RSIZE];
    int i=0;
    int tot=0;
    while(fgets(line[i],RSIZE,fp))
    {
        line[i][strlen(line[i])-1]='\0';
        i++;
    }
    tot=i;
    //ORIGINAL ARRAY
    /*printf("Original array:\n");
    for(i=0;i<tot;i++)
    {
        printf("%s\n",line[i]);
    }*/
    printf("\n");
    int cw[tot];
    for(i=0;i<tot;i++)
    {
        cw[i]=wht(line[i]);
    }
    /*printf("Corresponding weights are:\n");
    for(i=0;i<tot;i++)
        printf("%d\n",cw[i]);*/
    //USING SELECTION SORT
    int x,y,temp,si,sm;
    char temps[17],sms[17];
    for(x=0;x<tot-1;x++)
    {
        si=x;
        sm=cw[si];
        strcpy(sms,line[si]);
        for(y=x;y<tot;y++)
        {
            if(cw[y]>sm)
            {
                si=y;
                sm=cw[y];
                strcpy(sms,line[y]);
            }
        }
        if(si!=x)
        {
            temp=cw[x];
            cw[x]=cw[si];
            cw[si]=temp;
            strcpy(temps,line[x]);
            strcpy(line[x],line[si]);
            strcpy(line[si],temps);
        }

    }
    /*printf("Corresponding weights are:\n");
    for(i=0;i<tot;i++)
        printf("%d\n",cw[i]);
    //after sorting
    printf("After sorting:\n");
    for(i=0;i<tot;i++)
    {
        printf("%s\n",line[i]);
    }*/
    //writing in another file
    i=0;
    while(i<tot)
    {
        fprintf(fpn,"%s\n",line[i]);
        i++;
    }
}
void main()
{
    FILE *fp2,*fp2n,*fp3,*fp3n,*fp4,*fp4n,*fp5,*fp5n,*fp6,*fp6n,*fp7,*fp7n,*fp8,*fp8n,*fp9,*fp9n,*fp10,*fp10n,*fp11,*fp11n,*fp12,*fp12n,*fp13,*fp13n,*fp14,*fp14n,*fp15,*fp15n;
    fp2=fopen("dic2.txt","r");
    fp2n=fopen("dic2s.txt","w");
    fp3=fopen("dic3.txt","r");
    fp3n=fopen("dic3s.txt","w");
    fp4=fopen("dic4.txt","r");
    fp4n=fopen("dic4s.txt","w");
    fp5=fopen("dic5.txt","r");
    fp5n=fopen("dic5s.txt","w");
    fp6=fopen("dic6.txt","r");
    fp6n=fopen("dic6s.txt","w");
    fp7=fopen("dic7.txt","r");
    fp7n=fopen("dic7s.txt","w");
    fp8=fopen("dic8.txt","r");
    fp8n=fopen("dic8s.txt","w");
    fp9=fopen("dic9.txt","r");
    fp9n=fopen("dic9s.txt","w");
    fp10=fopen("dic10.txt","r");
    fp10n=fopen("dic10s.txt","w");
    fp11=fopen("dic11.txt","r");
    fp11n=fopen("dic11s.txt","w");
    fp12=fopen("dic12.txt","r");
    fp12n=fopen("dic12s.txt","w");
    fp13=fopen("dic13.txt","r");
    fp13n=fopen("dic13s.txt","w");
    fp14=fopen("dic14.txt","r");
    fp14n=fopen("dic14s.txt","w");
    fp15=fopen("dic15.txt","r");
    fp15n=fopen("dic15s.txt","w");
    sep(fp2,fp2n);
    sep(fp3,fp3n);
    sep(fp4,fp4n);
    sep(fp5,fp5n);
    sep(fp6,fp6n);
    sep(fp7,fp7n);
    sep(fp8,fp8n);
    sep(fp9,fp9n);
    sep(fp10,fp10n);
    sep(fp11,fp11n);
    sep(fp12,fp12n);
    sep(fp13,fp13n);
    sep(fp14,fp14n);
    sep(fp15,fp15n);

}
