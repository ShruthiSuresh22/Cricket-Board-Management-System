#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include "fun.h"

int see_all_IDs()
{
    char choice;
int i=0,f,c,e_ID;

struct record
{
int ID,avg,run,total;
char name[20];
}r;

system("cls");
FILE *fp;
fp=fopen("Player_record.txt","r");

printf(" Players List \n\n");
printf("ID: \t\t Average: \t Runs:");
printf("\n************************************************\n");

while(fread(&r,sizeof(r),1,fp))
{
printf("Name:%s \n",r.name);
if(r.ID<10 && r.ID>0)
printf("00%d \t\t %d \t\t %d\t\t ",r.ID,r.avg,r.run);
if(r.ID<100 && r.ID>=10)
printf("0%d \t\t %d \t\t %d\t\t ",r.ID,r.avg,r.run);
if(r.ID<1000 && r.ID>=100)
printf("%d \t\t %d \t\t %d\t\t ",r.ID,r.avg,r.run);

else{	}
printf("\n=================================================\n");
}

fclose(fp);
printf("\nEnter any key to continue.");
getch();
}