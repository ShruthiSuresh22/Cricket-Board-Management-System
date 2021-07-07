#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include "fun.h"

int delete_Player()
{
    char choice;
int i=0,f,c,e_ID;

struct record
{
int ID,avg,run,total;
char name[20];
}r;

  int flag=0;
system("cls");
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
choice=getche();
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
printf("\nInvalid ID4.");
}
fclose(fs);
fclose(fp);
printf("\nEnter any key to continue.\n");
remove("Player_record.txt");
rename("temp.txt","Player_record.txt");
remove("temp.txt");
getch();
}
