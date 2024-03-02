/* To check whether a given year is a leap year or not*/
#include<stdio.h>
int main()
{
   int yr;
   printf("Enter a year");
   scanf("%d",&yr);
   if (yr%4==0)
	 printf("%d is a leap year",yr);
   else
	printf("%d is not a leap year",yr);
}   
