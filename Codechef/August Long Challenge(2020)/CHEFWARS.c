#include<stdio.h>

int main()
{
    int num_of_testcases,p,q,flag=0;
    
    scanf("%d",&num_of_testcases);
    
    while(num_of_testcases--)
    {
        flag=0;
        scanf("%d %d",&q,&p);
        
        while(p>0)
        {
            if(q<=0)
            {
                flag=1;
                printf("1\n");
                break;
            }
            q=q-p;
            p=p/2;
        }
        if(q>0)
            printf("0\n");
        else
        if(flag==0)
            printf("1\n");    
    }
    
    return 0;
}

