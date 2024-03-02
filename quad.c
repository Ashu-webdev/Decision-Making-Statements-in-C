/* To calculate roots of a quadratic equation*/
#include<stdio.h>
#include<math.h>
int main()
{
   int a,b,c;
   float r1,r2,d;
   printf("Enter a,b,c values:");
   scanf("%d%d%d",&a,&b,&c);
   d=b*b-4*a*c;
   if (d==0)
   {
      printf("roots are real &equal");
      r1=-b/(2*a);
      r2=-b/(2*a);
      printf("\nRoot1=%f and Root2=%f",r1,r2);
   }
   else if (d>0)
   { 
      printf("roots are real and different\n");
      r1=(-b+sqrt(d))/(2*a);
      r2=(-b-sqrt(d))/(2*a);
      printf("root1=%f\t",r1);
      printf("root2=%f\n",r2);
   }
     else
        printf("roots are imaginary\n");
}

