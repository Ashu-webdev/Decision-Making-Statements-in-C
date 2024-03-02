/* To enter marks in 3 different subjects as per following rules:
  if avg mark>=90 then O grade
  >=80&<90 then E
  >=70&<80 then A
  >=60&<70 then B
  >=50&<60 then C
  >=40&<50 then D
  <40 E*/
#include<stdio.h>
int main()
{
   int m1,m2,m3,sum,avg;
   printf("Enter the marks of 3 subjects:");
   scanf("%d%d%d",&m1,&m2,&m3);
   sum=(m1+m2+m3);
   avg=sum/3;
   if (avg>=90)
	printf("O grade");
   if (avg>=80&& avg<90)
	printf("E grade");
   if (avg>=70&& avg<80)
	printf("A grade");
   if (avg>=60&& avg<70)
	printf("B grade");
   if (avg>=50&& avg<60)
	printf("C grade");
   if (avg>=40&& avg<50)
	printf("D grade");
   if (avg<40)
	printf("F grade");
}   
