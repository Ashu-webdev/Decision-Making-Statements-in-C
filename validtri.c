/* To enter 3 sides of a triangle, to check whether sides form a valid triangle or not*/
#include<stdio.h>
int main()
{
   int s1,s2,s3,sum;
   printf("Enter three sides of triangle:");
   scanf("%d%d%d",&s1,&s2,&s3);
   sum=s1+s2;
   if (sum>s3)
      printf("Given sides form a valid triangle");
   else
	printf("Given sides do not form a valid triangle");
}   
   	   
