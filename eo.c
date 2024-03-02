/* To check whether an inputted number is even or odd */
#include<stdio.h>
int main()
{
   int num;
   printf("Enter any no");
   scanf("%d",&num);
   if (num%2==0)
	printf("Inputted no is even",num);
   else 
	printf("Inputted no is odd",num);
}   
