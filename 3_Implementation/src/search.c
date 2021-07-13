/**
 * @file search.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "fun.h"

int search_by_ID()
{
char choice;
int i=0,f,c,e_ID;

struct record
{
int ID,avg,run,total;
char name[20];
}r;

printf("\nEnter Player's ID: ");
scanf("%d",&e_ID);
FILE *fp;
fp=fopen("Player_record.txt","r");
while(fread(&r,sizeof(r),1,fp))
{
if(e_ID==r.ID)
{  
f=1;  
break; 
}
else
f=0;
}
if(f==1)
printf("\nID:%d\nAverage:%d \nName:%s \nRuns:%d",r.ID,r.avg,r.name,r.run);
else
printf("\nNo Record Found.\n");
fclose(fp);
char a,b;
scanf("%c",&a);
printf("\nPress Enter key to continue.");
//getch();
scanf("%c",&b);
}
