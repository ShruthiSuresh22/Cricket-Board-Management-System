/**
 * @file modify.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include "fun.h"
int modify_modify()
{
char choice;
int i=0,f,c,e_ID;

struct record
{
int ID,avg,run,total;
char name[20];
}r;

int flag=0;
printf("\nEnter Player's ID: ");
scanf("%d",&e_ID);
FILE *fp,*fs;
fp=fopen("Player_record.txt","r");
fs=fopen("temp.txt","w");
while(fread(&r,sizeof(r),1,fp))
{
if(e_ID==r.ID){
printf("\nAre you Sure, to modify the Player's' record([y/Y or n/N]): ");
scanf("%s",&choice);
if(choice=='y' || choice=='Y')
{
do
{  
//system("clr");
for(int i=0 ; i<2 ;i++)
printf("\n");
printf("\n1. Name:  %s\n",r.name);
printf("2. Average: %d \n",r.avg);
printf("3. Run: %d\n",r.run);
printf("4. Exit \n");
printf("\nEnter choice to modify: ");
c=getchar();
switch(c)
{
case '1':printf("\nEnter new Name: ");
scanf("%s",r.name);
break;
case '2':printf("\nEnter new Average: ");
scanf("%d",&r.avg);
break;
case '3':printf("\nEnter new Runs: ");
scanf("%d",&r.run);
break;
case '4':break;
default:printf("\nEnter Valid Choice");}
}while(c!='4');
fwrite(&r,sizeof(r),1,fs);
}
else
{
  printf("\nRecord Not Saved.");
  }
flag = 1;
}
else
{
fwrite(&r,sizeof(r),1,fs);
}
}
if(flag == 0)
{
  printf("\nInvalid ID.");  
}
else
{
  printf("\nRecord is Modified Successfully.");
}
fclose(fs);
fclose(fp);
char a,b;
scanf("%c",&a);
printf("\n Press Enter key to continue.\n");
remove("Player_record.txt");
rename("temp.txt","Player_record.txt");
remove("temp.txt");
//getch();
scanf("%c",&b);
}