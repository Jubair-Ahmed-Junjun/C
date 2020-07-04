#include<stdio.h>
main()
{
     char ch;
     printf("enter the value any number");
     scanf("%c",&ch);
     if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
     printf("vowel");
     else
     printf("consonant");
     return 0;
}
