#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int add_run()
{
    char choice;
int i=0,f,c,e_ID;

struct record
{
int ID,avg,run,total;
char name[20];
}r;

int add,flag=0;
printf("\nEnter Player's ID: ");
scanf("%d",&e_ID);
FILE *fp,*fs;
fp=fopen("Player_record.txt","r");
 fs=fopen("temp.txt","w");
 
while(fread(&r,sizeof(r),1,fp ))
{
 
if(e_ID==r.ID)
{
  
printf("\nEnter Player's run to add: ");
scanf("%d",&add);
r.run=r.run+add;
fwrite(&r,sizeof(r),1,fs);
flag=1;

}else
{
  
   fwrite(&r,sizeof(r),1,fs);

}
}
if(flag==0)
{

 printf("\nInvalid ID");
 }else{
   printf("\nPlayer's run added Successfully.");
 }
 fclose(fs);
fclose(fp);
printf("\nEnter any key to continue.\n");
 remove("Player_record.txt");
rename("temp.txt","Player_record.txt");
  remove("temp.txt");
getch();

}