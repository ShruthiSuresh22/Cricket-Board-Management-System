#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include "fun.h"

int add_new_player()
{
    char choice;
int i=0,f,c,e_ID;

struct record
{
int ID,avg,run,total;
char name[20];
}r;

FILE *fp;
fp=fopen("Player_record.txt","a");
going_to_get_ID();
printf("\nEnter Player's Name: ");
scanf("%s",&r.name);
printf("\nEnter Player's Average: ");
a_avg:
scanf("%d",&r.avg);
if(r.avg<0)
{
printf("\nCan not enter negative Average.\n Enter Average again.\n");
goto a_avg;
}
printf("\nEnter Player's Runs: ");
a_run:
scanf("%d",&r.run);
if(r.run<0)
{
printf("\nCan not enter negative Run.\n Enter Run again.\n");
goto a_run;
}
printf("\n==================================\n");
printf("Would You like to save the Record([y/Y or n/N]): ");
choice=getche();
if(choice=='Y' || choice=='y')
{
fwrite(&r,sizeof(r),1,fp);
printf("\nRecord Saved Succesfully\n ");
}
else
printf("\nRecord not saved\n");
fclose(fp);
printf("\nPress any key to continue\n");
getch();
}