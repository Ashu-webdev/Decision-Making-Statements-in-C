/* To calculate income tax as per following rule:
  If income <=1L50K,no tax
  1,50,001-3L,10% tax
  3,00,001-5L,20% tax
  >5L,30% tax*/
#include<stdio.h>
int main()
{
   long int income;
   long int tax=0;
   printf("Enter your income:");
   scanf("%ld",&income);
   if (income<=150000)
	printf("No tax");
   if (income>150000&&income<300000)
	   tax=income*0.1;
   if (income>300000&&income<=500000)
	   tax=income*0.2;
   if (income>500000)
	   tax=income*0.3;
   printf("Income tax is %ld",tax);
}   

