#include <stdio.h>

int main()
{
    int tc,i;
    int arjit,chandu;
    scanf("%d,&tc");
    for(i=0;i<tc;i++)
    {
    	scanf("%d,&arjit");
    	scanf("%d,&chandu");
    	int sum=arjit+chandu;
    	int flag,j;
    	for(j=1;j<sum-1;j++)
    	{
    		if(i%2==0)
    		{
    			flag=0;
    		}
    		else
    		{
    			flag=1;
    		}
    		int length;
    		if(flag==1)
    		{
    			length=arjit;
    		}
    		else
    		{
    			length=chandu;
    		}
    		int tempa=arjit;
    		int tempc=chandu;
    		while(length!=0)
    		{
    			if(tempa>=tempc-1)
    			{
    				tempa=tempa-tempc;
    			}
    			else
    			{
    				tempc=tempc-tempa;
    			}
    		}
    		if(flag==1)
    		{
    			if(tempa>1)
    			{
    				chandu=chandu/tempa;
    			}
    			else if(tempa==1)
    			{
    				chandu-chandu-1;
    			}
    		}
    		else
    		{
    			if(tempa>1)
    			{
    				arjit=arjit/tempa;
    			}
    			else if(tempa==1)
    			{
    				arjit=arjit-1;
    			}
    		}

    		}
    		if(arjit>chandu)
    		{
    			printf("Arjit\n");
    		}
    		else if(chandu>arjit)
    		{
    			printf("Chandu Don\n");
    		}
    		else if(chandu==arjit)
    		{
    			printf("Draw\n");
    		}

    }
    return 0;
}

