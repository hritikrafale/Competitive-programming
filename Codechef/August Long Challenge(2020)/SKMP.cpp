#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int num_of_testcases;

    cin>>num_of_testcases;

    while(num_of_testcases--)
    {
        int memory[26]={0},i,temp;

        string pattern,str,result;

        cin>>str>>pattern;
        
        for(i=0;i<str.length();i++)
        {
            memory[str[i]-'a']++;
        }

        for(i=0;i<pattern.length();i++)
        {
            memory[pattern[i]-'a']--;
        }

        temp=pattern[0]-'a';

        int j=0,k=0;

        for(i=0;i<26;i++)
        {
            for(int q=0;q<memory[i];q++)
            {
                str[j]=i+97;
                j++;
            }

            if(i==temp)
            {
                while(k<pattern.length())
                {
                    str[j]=pattern[k];
                    k++;
                    j++;
                }
            }
        }
        
        for(int i=0;i<pattern[0]-'a';i++)
		{
			while(memory[i]!=0)
			{
				result+=(char)(i+97);
				memory[i]--;
			}
		}
		
		result+=pattern;
		
		for(int i=0;i<26;i++)
		{
			while(memory[i]!=0)
			{
				result+=(char)(i+97);
				memory[i]--;
			}
		}

        cout<<min(str,result)<<endl;  
    }

    return 0;
}