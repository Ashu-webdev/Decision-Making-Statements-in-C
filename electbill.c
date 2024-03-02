/* From previous & current month meter reading,calculate the electric bill amount as per following rules:
  first 100 units,Rs 3.30 per unit
  next 200 units,Rs 5.40 per unit
  remaining Rs6 per unit*/
#include<stdio.h>
int main()
{
   int prevreading,curreading,units;
   float electbill;
   printf("Enter previous month reading");
   scanf("%d",&prevreading);
   printf("\nEnter current month reading");
   scanf("%d",&curreading);
   units=curreading-prevreading;
   if (units>0&& units<=100)
      electbill=3.3*units;
   else if (units>100&& units<=300)
	electbill=3.3*100+5.4*(units-100);
   else if (units>300)
	electbill=3.3*100+5.4*200+6*(units-300);
   printf("Electricity bill amount is %f\n",electbill);
}   
