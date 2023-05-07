#include<stdio.h> 
typedef struct date{
int day, month, year;
} date; 
long int days(date); 
int main(){
date a; 
printf("Enter the day:  "); 
scanf(" %d ",&a. day);
	printf("Enter the mounth:  "); 
scanf(" %d ",&a. month);
	printf("Enter the year:  "); 
scanf(" %d ",&a. year);
printf(" Total days is: %ld", days(a)); 
return 0;
} 
long int days(date d){
return (d. year-2000)*360+(d. month-1)*30+d. day; 
} 
