/* To enter any character and then check where the entered character is a vowel or not */
#include<stdio.h>
int main()
{
   char ch;
   printf("Enter any character:");
   scanf("%c",&ch);
   if (ch=='a'|| ch=='e'|| ch=='i'|| ch=='o' || ch=='u')
	printf("%c is a vowel",ch);
   else 
	printf("%c is not a vowel",ch);
}   
