#include <stdio.h>
typedef struct student
 {
 	char f_name[20];
 	char l_name[20];
 	float note;
 }student;;
int main()
{
	student T[3];
	int i;
	for(i = 0;i < 3;i++)
	{
		printf("Enter the first name of the %d student :",i+1);
		scanf("%s",&T[i].f_name);
		printf("Enter the last name of the %d student :",i+1);
		scanf("%s",&T[i].l_name);
		printf("Enter the note of the %d student :",i+1);
		scanf("%f",&T[i].note);
	}
	for(i = 0;i < 3;i++)
	{
		if(T[i].note < 10)
		{
printf("%s\t %s\t %f\t adjourned ",T[i].f_name,T[i].l_name,T[i].note);
			
		}else
		{
printf("%s\t %s\t %f\t admitted ",T[i].f_name,T[i].l_name,T[i].note);
			
		}
	}
	return 0;
}
