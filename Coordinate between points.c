#include <stdio.h>
#include <math.h>
typedef struct point
 {
 	float x;
 	float y;
 }point;;
 int main()
 {
 	point p1,p2,p;
 	float p1p2;
 	printf("Enter the coordintes x and y for p1 :");
 	scanf("%f%f",&p1.x,&p1.y);
 	printf("Enter the coordinates x and y for p2 :");
 	scanf("%f%f",&p2.x,&p2.y);
 	p1p2 = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
 	printf("The distance between p1 and p2 is  = %f",p1p2);
 	p.x = (p2.x + p1.x) / 2;
 	p.y = (p2.y + p1.y) / 2;
 	printf("\n The coordinates of the of the piece p1p2 are:\n x= %f\t y=%f",p.x,p.y);
 	return 0;
 }
