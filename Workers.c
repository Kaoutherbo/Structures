#include <stdio.h>
typedef struct worker
 {
    char First_name[20];
  char Last_name[20];
    int grade;
    float salary;  
 }worker;
 int main()
 {
  int n;
  worker p[n];
  printf("Enter the number of workers ");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
   printf("Enter your first name ");
   scanf("%s",&p[i].First_name);
   printf("Enter your last name ");
   scanf("%s",&p[i].Last_name);
   printf("Enter your grade ");
   scanf("%d",&p[i].grade);
   printf("Enter your current salary ");
   scanf("%f",&p[i].salary);
  }
  for(int i=0;i<n;i++)
  {
   if(p[i].grade>=3)
   {
    p[i].grade++;
  p[i].salary=p[i].salary+p[i].salary*0.01;
   }
  }
  printf("The new grades and salaries of workers are :" );
  for(int i=0;i<n;i++)
  {
 printf("\n %s \t %s \t %d \t %f \n ",p[i].First_name,p[i].Last_name,p[i].grade,p[i].salary);
  }
  return 0;
 }
