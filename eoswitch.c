/* To check whether given no is even or odd using switchcse statements*/
#include<stdio.h>
int main()
{
   int num,rem;
   printf("Enter any no");
   scanf("%d",&num);
   rem=num%2;
   switch(rem)
   {
	case 0:printf("%d is even",num);
	       break;
        case 1:printf("%d is odd",num);
               break;
   }
}   
