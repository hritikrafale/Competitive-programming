#include<stdio.h>

int main()
{
    int num_of_testcases;

    scanf("%d",&num_of_testcases);

    while(num_of_testcases--)
    {
        long int a,b,num1,num2,temp;

        scanf("%ld %ld",&a,&b);

        temp=a/9;

        temp=a-temp*9;

        if(temp>0)
        {
            num1=(a/9)+1;
        }
        else
        {
            num1=a/9;
        }

        temp=b/9;

        temp=b-temp*9;

        if(temp>0)
        {
            num2=(b/9)+1;
        }
        else
        {
            num2=b/9;
        }

        if(num1<num2)
        {
            printf("0 %ld\n",num1);
        }
        else
        {
            printf("1 %ld\n",num2);
        }
    }

    return 0;
}