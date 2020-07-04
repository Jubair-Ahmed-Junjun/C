#include<stdio.h>
main()
{
    int dummy,n,rev=0,x;
    printf("enter the value of a number\n");
    scanf("%d",&n);
    dummy=n;
    while(n>0)
    {
        x=n/10;
        rev=rev*10+x;
        n=n/10;
    }
    printf("the reverse of %d\n",dummy,rev);
}
