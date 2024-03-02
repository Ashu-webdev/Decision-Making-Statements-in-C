/* To find out the largest between two inputted numbers */
#include<stdio.h>
int main()
{
   int num1,num2;
   printf("Enter any two nos:");
   scanf("%d%d",&num1,&num2);
   if (num1>num2)
	printf("\n Largest no is%d",num1);
   else 
	printf("\nLargest no is%d",num2);
}   
