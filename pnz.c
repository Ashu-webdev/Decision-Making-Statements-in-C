/* To test whether an inputted no is +ve,-ve or =0,using nested if-else*/
#include<stdio.h>
int main()
{
   int num;
   printf("Enter any no");
   scanf("%d",&num);
   if (num==0)
	printf("\n Inputted no is zero");
   else
   {
      if (num>0)
         printf("\n Inputted no is positive");
      else
	printf("\n Inputted no is negative");
   }
}   
