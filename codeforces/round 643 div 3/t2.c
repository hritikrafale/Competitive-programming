#include<stdio.h>
#include<stdlib.h>

long long int min(long long int arr[],long long int size);

int main()
{
    long long int num_of_testcases,size,*arr1,*arr2,min1,min2,count=0,temp,i;

    scanf("%lld",&num_of_testcases);

    while(num_of_testcases--)
    {
        count=0;

        scanf("%lld",&size);

        arr1=(long long int*)malloc(sizeof(long long int)*size);
        arr2=(long long int*)malloc(sizeof(long long int)*size);

        for(i=0;i<size;i++)
        {
            scanf("%lld",arr1+i);
        }

        for(i=0;i<size;i++)
        {
            scanf("%lld",arr2+i);
        }

        min1=min(arr1,size),min2=min(arr2,size);

        printf("\nmin1:%lld min2:%lld",min1,min2);

        for(i=0;i<size;i++)
        {
            if(arr1[i]-min1>arr2[i]-min2)
            {
                temp=arr2[i]-min2;
                count+=temp;
                arr2[i]=arr2[i]-temp;
                arr1[i]=arr1[i]-temp;
                count+=arr1[i]-min1;
                arr1[i]=arr1[i]-(arr1[i]-min1);
            }   
            else
            {
                temp=arr1[i]-min1;
                count+=temp;
                arr1[i]=arr1[i]-temp;
                arr2[i]=arr2[i]-temp;
                count+=arr2[i]-min2;
                arr2[i]=arr2[i]-(arr2[i]-min2);  
            }    
        }
        printf("%lld\n",count);
        
    }

    return 0;
}

long long int min(long long int arr[],long long int size)
{
    long long int i,min=arr[0];

    for(i=1;i<size;i++)
    {
        if(min>arr[i])
            min=arr[i];
    }

    return min;
}