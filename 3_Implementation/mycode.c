/**
 * @file mycode.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
//#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include "fun.h"

char choice;
int i=0,f,c,e_ID;

struct record
{
int ID,avg,run,total;
char name[20];
}r;

struct pur_player
{
int ID,avg,run,total;
char name[20];
}k;

int main()
{
page_1();
main_function();
}

int page_1()
{
printf("\n\n\n\n\n\n");
printf("********************************************************************************\n");
printf("\t\tWelcome To The Cricket Board Management System \n");
printf("\n********************************************************************************\n");
printf("\n\n\n\n\n\n");
//sleep(3);
char a,b;
scanf("%c",&a);
printf("\nPress Enter key to continue\n");
//getch();
scanf("%c",&b);
}

int main_function()
{
//system("cls");
for(int i=0 ; i<2 ;i++)
printf("\n");
do
{   //system("clear");
for(int i=0 ; i<2 ;i++)
printf("\n");
printf("\n MENU:\n");
printf("\n 1. Add New Player");
printf("\n 2. Update Runs");
printf("\n 3. Modify Player's Record");
printf("\n 4. Search by Player's ID");
printf("\n 5. All Players");
printf("\n 6. Delete Player's Record");
printf("\n 7. Main Menu");
printf("\n 8. EXIT \n");
printf("\nEnter Choice: ");
//scanf("%s",c);
char c;
	 scanf(" %c",&c);
     choice=toupper(c);
//c=getche();
switch(c)
{
case '1':{if (add_new_player()== 1)
{
     printf("\nRecord Saved Succesfully\n ");
     char a,b;
scanf("%c",&a);
printf("\nPress Enter key to continue\n");
//getch();
scanf("%c",&b);
}else{
printf("\nRecord Not  Saved\n ");
     char a,b;
scanf("%c",&a);
printf("\nPress Enter key to continue\n");
//getch();
scanf("%c",&b);

}
break;
}
case '2':{
     if(add_run()== 1){
          printf("Run Updated Succesfully");
     char a,b;
scanf("%c",&a);
printf("\nPress Enter key to continue.");
//getch();
scanf("%c",&b);
}else{
     
printf("Enter a valid id");
char a,b;
scanf("%c",&a);
printf("\nPress Enter key to continue.");
//getch();
scanf("%c",&b);
}
break;
}
case '3':modify_modify();
break;
case '4':search_by_ID();
break;
case '5':see_all_IDs();
break;
case '6':delete_Player();
break;
case '7':main_function();
break;
case '8':exit(0);
}
}while(c!=8);
}
int going_to_get_ID()
{ 

 f=0;
//nav:
printf("\n\n\nEnter Player ID : ");
e_again:
scanf("%d",&e_ID);

if(e_ID<0)
{   //system("cls");
for(int i=0 ; i<2 ;i++)
printf("\n");
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
{		//system("clear");
for(int i=0 ; i<2 ;i++)
printf("\n");
printf("\n********     ERROR     ********\n");
printf("Duplicate ID......\nPress enter key to continue");
//getche();
going_to_get_ID();
}
else
r.ID=e_ID;

}

int add_new_player()
{
    
FILE *fp;
fp=fopen("Player_record.txt","a");
going_to_get_ID();
printf("\nEnter Player's Name: ");
scanf("%s",r.name);
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
//choice=getche();
char t;
	 scanf(" %c",&t);
     choice=toupper(t);
if(choice=='Y' || choice=='y')
{
fwrite(&r,sizeof(r),1,fp);
fclose(fp);
return 1;
//printf("\nRecord Saved Succesfully\n ");
}
else{
     fclose(fp);
     return 0;
}

//printf("\nRecord not saved\n");


}

int see_all_IDs()
{
   //system("clear");
   for(int i=0 ; i<5 ;i++)
     printf("\n");
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
char a,b;
scanf("%c",&a);
printf("\n Press Enter key to continue.");
//getch();
scanf("%c",&b);
}

int delete_Player()
{
int flag=0;
//system("clear");
for(int i=0 ; i<2 ;i++)
printf("\n");
printf("\nEnter ID to delete: ");
scanf("%d",&e_ID);
FILE *fp,*fs;
fp=fopen("Player_record.txt","r");
fs=fopen("temp.txt","w");
while(fread(&r,sizeof(r),1,fp))
{
if(e_ID==r.ID)

{

printf("\n ID=00%d \n Name=%s \n Average=%d \n Runs=%d\n",r.ID,r.name,r.avg,r.run);
printf("\nDo you want to delete this record([y/Y or n/N]): ");
//choice=getche();
char a;
	 scanf(" %c",&a);
     choice=toupper(a);
if(choice=='n' || choice=='N')
{
printf("\nPlayer's Record Not Deleted.");
}

else
{
printf("\nPlayer's Record Deleted Successfully.");
}
flag=1;
}else{
fwrite(&r,sizeof(r),1,fs);

}
}

if(flag==0)
{
printf("\nInvalid ID.");
}
fclose(fs);
fclose(fp);
char a,b;
scanf("%c",&a);
printf("\nPress Enter key to continue.\n");
remove("Player_record.txt");
rename("temp.txt","Player_record.txt");
remove("temp.txt");
//getch();
scanf("%c",&b);
}



