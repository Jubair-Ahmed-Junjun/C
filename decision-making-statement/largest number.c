#include<stdio.h>
main()
{
  int a,b,c,largest;
  printf("please enter three different values\n");
  scanf("%d%d%d",&a,&b,&c);
  largest=((a>b && a>c)?a:(b>c)?b:c);
  printf("largest number is %d",largest);
  return 0;

}
