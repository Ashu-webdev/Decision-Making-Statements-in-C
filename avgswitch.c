/* To enter marks of a student in 3 subjects, calculate grade of student as per rule using switchcase statements*/
#include<stdio.h>
int main()
{
   int m1,m2,m3,avg,res;
   printf("Enter the marks of 3 subjects:");
   scanf("%d%d%d",&m1,&m2,&m3);
   avg=(m1+m2+m3)/3;
   res=avg/10;
   switch(res)
   {
      case 10:
      case 9:printf("O grade");
             break;
      case 8:printf("E grade");
	     break;
      case 7:printf("A grade");
	     break;
      case 6:printf("B grade");
	     break;
      case 5:printf("C grade");
             break;
    default:
            printf("F grade");
    }
}   

 	   
