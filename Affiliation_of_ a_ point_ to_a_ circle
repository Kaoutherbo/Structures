#include<stdio.h>
#include<math.h>
typedef struct point{
float x;
float y; 
}point;
typedef struct circle{
 float x;
    float y;
    float z;
}circle;
int main(){
 point p;
 int i;float a;
 circle c[4];
 for(i=0;i<4;i++){ 
  printf("Enter the value of x for cyrcle %d : ",i+1);
  scanf("%f",c[i].x);
  printf("Enter the value of y for cyrcle %d : ",i+1);
  scanf("%f",c[i].y);
  printf("Enter the value of z for cyrcle %d : ",i+1);
  scanf("%f",c[i].z);
 }
 printf("Enter the value of x and y for the point : ");
 scanf("%f%f",p.x,p.y);
 for(i=0;i<4;i++){
  a=sqrt(pow(c[i].x-p.x,2)+pow(c[i].y-p.y,2));
  if(a<=c[i].z){
   printf("This point belong to circle %d\n",i+1);
  }
 }
 return 0;
}
