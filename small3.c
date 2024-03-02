/* To find smallest between three numbers*/
#include<stdio.h>
int main()
{
   int num1,num2,num3;
   printf("Enter 3 nos:");
   scanf("%d%d%d",&num1,&num2,&num3);
   if (num1<num2)
   {
	if(num1<num3)
	     	printf("%d is smallest",num1);
   else 
	printf("%d is smallest",num2);
   }
   else
   {
	   if (num2<num3)
		   printf("%d is smallest",num2);
	   else 
		   printf("%d is smallest",num3);
   }
}   
