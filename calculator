#include<stdio.h>

typedef struct calcul{
	float num1; 
	char oper;
	float num2;
} calcul;

//Driver code
int main(){
calcul input;
FILE *fp;
fp=fopen("Calculator.txt","w");
	printf("Enter two numbers and an operaton  ");
	scanf("%f %c %f",&input.num1,&input.oper,&input.num2);
	switch(input.oper){
		case'+':printf("%.2f %c %.2f = %.2f",input.num1,input.oper,input.num2,input.num1+input.num2);
		fprintf(fp,"%.2f %c %.2f = %.2f",input.num1,input.oper,input.num2,input.num1+input.num2);break;
    
		case'-':printf("%.2f %c %.2f = %.2f ",input.num1,input.oper,input.num2,input.num1-input.num2);
		fprintf(fp,"%.2f %c %.2f = %.2f",input.num1,input.oper,input.num2,input.num1-input.num2);break;
    
		case'*':printf("%.2f %c %.2f = %.2f ",input.num1,input.oper,input.num2,input.num1*input.num2);
		fprintf(fp,"%.2f %c %.2f = %.2f",input.num1,input.oper,input.num2,input.num1*input.num2);break;
    
		case'/':if(input.num2!=0){
		printf("%.2f %c %.2f = %.2f ",input.num1,input.oper,input.num2,input.num1/input.num2);
		fprintf(fp,"%.2f %c %.2f = %.2f ",input.num1,input.oper,input.num2,input.num1/input.num2);break;
		}else {
		printf("Error");
		fprintf(fp,"Error");break;					
		}
    
		default:printf("Error");break;		
	}
	fclose(fp);
	return 0;
}
