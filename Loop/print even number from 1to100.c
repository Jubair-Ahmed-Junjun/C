#include<stdio.h>
main()
{
    int i,counter=0;
    for(i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
            counter+=1;
        }
    }
    printf("the number of even number is %d\n",counter);
    return 0;
}

