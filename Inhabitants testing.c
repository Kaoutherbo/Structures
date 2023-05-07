include <stdio.h>
#include <string.h>
typedef struct date
 {
 	int day,month,year;
 }date;
typedef struct address
 {
 	char street[20],twon[20],wilaya[20];
 }address;
typedef struct inhabitent
 {
 	char name[20];
 	date d;
 	address add;
 }inhabitent;

int main()
{
	inhabitent a[100];
	for(int i=0;i<100;i++){
		printf("\n Inhabitent number %d Enter your name ");
		scanf("%s",&a[i].name);
	printf("Enter your date of birth ");	
		scanf("%d%d%d",&a[i].d.day,&a[i].d.month,&a[i].d.year);
		printf("Enter your address ");
		scanf("%s%s%s",&a[i].add.street,&a[i].add.twon,&a[i].add.wilaya);
		}
		for(int i=0;i<100;i++)
		{
	if(strcmp(a[i].add.twon,"Ouled fares")==0&&strcmp(a[i].add.wilaya,"Chlef")==0)
			{
 printf("\n%s %d/%d/%d",a[i].name,a[i].d.day,a[i].d.month,a[i].d.year);
			}
		}
	return 0;
}
