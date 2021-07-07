#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include "fun.h"

int going_to_get_ID()
{ 
    char choice;
int i=0,f,c,e_ID;

struct record
{
int ID,avg,run,total;
char name[20];
}r; 

 f=0;
nav:
printf("\n\n\nEnter Player ID : ");
e_again:
scanf("%d",&e_ID);

if(e_ID<0)
{   system("cls");
printf("\n   Invalid ID1 \nEnter another ID");
goto e_again;
}
FILE *fp;
fp=fopen("Player_record.txt","r");
while(fread(&r,sizeof(r),1,fp))
{
if(e_ID==r.ID)
{ f=1;	  break;	}
else { }
}
fclose(fp);
if(f==1)
{		system("cls");
printf("\n********     ERROR     ********\n");
printf("Duplicate ID......\nPress enter key to continue");
getche();
going_to_get_ID();
}
else
r.ID=e_ID;

}