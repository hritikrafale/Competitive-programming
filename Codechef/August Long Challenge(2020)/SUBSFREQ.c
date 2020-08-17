/* This question is partially solved only satisfies the 2 task.Full solution will be uploaded soon.*/

#include<stdio.h>
#include<stdlib.h>

void calcSubCount(long long int size,long long int arr[]);

int main()
{
    int num_of_testcases;

    scanf("%d",&num_of_testcases);

    while(num_of_testcases--)
    {
        long long int size,*arr,i;

        scanf("%lld",&size);

        arr=(long long int*)malloc(sizeof(long long int)*size);

        for(i=0;i<size;i++)
            scanf("%lld",arr+i);

        calcSubCount(size,arr);     
    }

    return 0;
}

void calcSubCount(long long int size,long long int arr[])
{
    long long int memory[size],i,temp;

    memory[0]=1;
    for(i=1;i<size;i++)
    {
        memory[i]=(memory[i-1]*2)%1000000007;
    }

    for(i=size-1;i>-1;i--)
        printf("%lld ",memory[i]);

    printf("\n");
}