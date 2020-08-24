#include<stdio.h>

int main()
{
    int N,len;

    scanf("%d",&N);

    while(N--)
    {
        long long int num_of_ver=0,X1,X2,Y1,Y2,num_of_sides=0,i;

        scanf("%d",&len);

        for(i=0;i<len;i++)
        {
            if(i!=0)
            {
                scanf("%lld %lld",&X1,&Y1);

                if(X1==X2 && Y1==Y2)
                {
                    X2=X1;
                    Y2=Y1;
                }
                else
                {
                    num_of_ver++;
                    X2=X1;
                    Y2=Y1;
                }
            }
            else
            {
                scanf("%lld %lld",&X1,&Y1);
                num_of_ver++;
                X2=X1;
                Y2=Y1;
            }
        }

        while(num_of_ver>=3)
        {
            num_of_sides+=num_of_ver;
            num_of_ver/=2;
        }
        printf("%lld\n",num_of_sides);

    }

    return 0;
}