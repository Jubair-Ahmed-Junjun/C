#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,d,e;
    scanf("%d",&n);
    for(int i =0;i<n;++i)
    {
      scanf("%d%d",&a,&b);
      if(a>b)
      {
         d = a;
         e = b;
      }

        else
        {
            d =b;
            e = a;
        }

            while(d%e!=0)
                {
                c = d%e;
                d = e;
                e =c;
            }
         printf("%d\n",e);
    }
    return 0;
}
