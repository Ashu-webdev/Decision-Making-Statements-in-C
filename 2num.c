/* To input two numbers and check whether inputted no are equal or 1st no>2nd no or 2nd no>1st no using nested if-else*/
#include<stdio.h>
int main()
{
   int num1,num2;
   printf("Enter 1st no:");
   printf("\nEnter 2nd no:");
   scanf("%d%d",&num1,&num2);
   if (num1==num2)
	printf("num1 is equal to num2");
   else
   {
      if (num1>num2)
         printf("num1 is greater than num2");
       else
	 printf("num2 is greater than num1");
   }
}   
