#include<stdio.h>

int main()
{
    int num_of_testcases;

    scanf("%d",&num_of_testcases);

    while(num_of_testcases--)
    {
        int n,k,count=0,sum=0,old,i,flag=0;

        scanf("%d %d",&n,&k);

        int arr[n];

        for(i=0;i<n;i++)
        {
            scanf("%d",arr+i);
        }

        for(i=0;i<n;i++)
        {
            if(sum+arr[i]<=k)
            {
                if(i==n-1 && arr[i]+sum<=k)
                {
                    count++;
                    break;
                }
                else
                    sum+=arr[i];
            }
            else
            {
                sum=0;
                count++;
                if(i!=n-1 && arr[i]<=k)
                {
                    sum+=arr[i];
                } 
                else
                if(i==n-1 && arr[i]<=k)
                {
                    count++;
                    break;
                }  
                else
                {
                    printf("-1\n");
                    flag=1;
                    break;
                }
            }
        }    
        if(flag!=1)
            printf("%d\n",count);
    }

    return 0;
}