#include<stdio.h>
#include<stdlib.h>
#define MAX 100
struct node
{
	char name[25],dno[25],str[15],city[25],blgr[4];
	int age,adno;
	char bank[10];
};struct node a[MAX];
void linear(struct node [],int,int);
void search(struct node []);
int create(int);
int main()
{
	int i,choice;
	char ans;
	for(i=0;i<MAX;i++)
		a[i].adno=-1;
	do
	  {
		printf("Welcome to Adhar service sector\n");
		printf("1.Adhar creation\n2.Search\n");
			printf("Enter your choice...");
			scanf("%d",&choice);
		   switch (choice)
			{
				case 1:
					{
						char wish;
						int num,key;
						printf("Enter your adhar number\n");
						scanf("%d",&num);
						key=create(num);
						linear(a,key,num);
						break;
					}
				case 2:
						search(a);
						break;
				case 3:
						exit(0);
						break;
			}
		printf("Do you wish to create (y/n)\n");
		scanf("%c%c",&ans,&ans);
	}while(ans=='y');
}

int create(int num)
{
	int key=num%100;
	return key;
}
void linear(struct node a[MAX],int key,int num)
{
int flag=0,i,count=0;
if(a[key].adno==-1)
{
a[key].adno=num;
printf("enter your name : ");
scanf("%s",a[key].name);
printf("Enter your doorno\n");
scanf("%s",a[key].dno);
printf("Enter your street name\n");
scanf("%s",a[key].str);
printf("Enter your city\n");
scanf("%s",a[key].city);
printf("Enter your blood group\n");
scanf("%s",a[key].blgr);
printf("Enter your age\n");
scanf("%d",&a[key].age);
printf("Enter your bank acno\n");
scanf("%s",a[key].bank);
}
else
{
i=0;
while(i<MAX)
{
	if(a[i].adno!=-1)
	count++;
	i++;
}
if(count==MAX)
{
	printf("Table is full\n");
	exit(1);
}
for(i=key+1;i<MAX;i++)
if(a[i].adno==-1)
{
a[i].adno=num;
printf("enter your name : ");
scanf("%s",a[i].name);
printf("Enter your doorno\n");
scanf("%s",a[i].dno);
printf("Enter your street name\n");
scanf("%s",a[i].str);
printf("Enter your city\n");
scanf("%s",a[i].city);
printf("Enter your blood group\n");
scanf("%s",a[i].blgr);
printf("Enter your age\n");
scanf("%d",&a[i].age);
printf("Enter your bank acno\n");
scanf("%s",a[i].bank);
flag=1;
break;
}
for(i=0;i<key&&flag==0;i++)
if(a[i].adno==-1)
{
a[i].adno=num;
printf("enter your name : ");
scanf("%s",a[i].name);
printf("Enter your doorno\n");
scanf("%s",a[i].dno);
printf("Enter your street name\n");
scanf("%s",a[i].str);
printf("Enter your city\n");
scanf("%s",a[i].city);
printf("Enter your blood group\n");
scanf("%s",a[i].blgr);
printf("Enter your age\n");
scanf("%d",&a[i].age);
printf("Enter your bank acno\n");
scanf("%s",a[i].bank);
flag=1;
break;
}
}
}
void search(struct node a[MAX])
{
int no,flag=0,i=0;
printf("Enter your adno\n");
scanf("%d",&no);
while(i<MAX)
{
if(no==a[i].adno)
{
	printf("Adhar no: %d\nName : %s\nAddress:%s\n%s\n%s\nBlood group:%s\nAge : %d\nBank acno:%s\n",a[i].adno,a[i].name,a[i].dno,a[i].str,a[i].city,a[i].blgr,a[i].age,a[i].bank);
flag=1;
break;
}
i++;
}
if(flag==0)
printf("No number like that\n");
}

