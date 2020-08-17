#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num_of_testcases;

    scanf("%d",&num_of_testcases);

    while(num_of_testcases--)
    {
        int N,i,flag=0;

        long long int K,*arr,min=1000000001;

        scanf("%d %lld",&N,&K);

        arr=(long long int*)malloc(sizeof(long long int)*N);

        for(i=0;i<N;i++)
            scanf("%lld",arr+i);

        for(i=0;i<N;i++)
        {
            if(K>=arr[i] && K%arr[i]==0)
            {
                flag=1;
                if(K/arr[i]<min)
                    min=K/arr[i];
            }
        }
        if(flag==0)
        {
            printf("-1\n");
        }
        else
        {
            printf("%lld\n",K/min);
        }
    }

    return 0;
}