#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int minCost(int array_size,int arr[],int K);
int numOfConflicts(int arr[],int low,int high);

int main()
{
    int num_of_testcases;

    scanf("%d",&num_of_testcases);

    while(num_of_testcases--)
    {
        int array_size,K,*arr,i,cost;

        scanf("%d %d",&array_size,&K);

        arr=(int*)malloc(sizeof(int)*array_size);

        for(i=0;i<array_size;i++)
            scanf("%d",arr+i);

        cost=minCost(array_size,arr,K);

        printf("%d\n",cost);
    }

    return 0;
}

int numOfConflicts(int arr[],int low,int high)
{
    int mem[101]={0},i,count=0;

    for(i=low;i<=high;i++)
    {
        int temp=arr[i];
        mem[temp]++;
    }

    for(i=0;i<101;i++)
    {
        if(mem[i]>1)
        {
            count+=mem[i];
        }
    }
    return count;
}

int minCost(int array_size,int arr[],int K)
{
    int *memory,i,j,cost;

    memory=(int*)malloc(sizeof(int)*array_size);

    for(i=0;i<array_size;i++)
    {
        memory[i]=10000;
    }

    memory[0]=K;

    for(i=1;i<array_size;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j>0)
            {
                cost=memory[j-1]+numOfConflicts(arr,j,i)+K;
                if(memory[i]>cost)
                    memory[i]=cost;
            }
            else
            {
                cost=numOfConflicts(arr,j,i)+K;
                if(memory[i]>cost)
                    memory[i]=cost;
            }
        }
    }
    return memory[array_size-1];
}

