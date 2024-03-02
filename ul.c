/* To enter any character, if the entered character is in lowercase then convert it into uppercase and vice-versa */
#include<stdio.h>
int main()
{
   char ch;
   printf("Enter character:");
   scanf("%c",&ch);
   if (ch>='A'&& ch<='Z')
	printf("Lowecase form:%c",ch+32);
   else if (ch>='a'&& ch<='z')
	 printf("Uppercase form:%c",ch-32);
}  
