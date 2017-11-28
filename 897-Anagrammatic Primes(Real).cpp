#include<bits/stdc++.h>
#define SIZE_N 10000001
using namespace std;
bool status[SIZE_N];
void sieve()
{
    for(int i=4;i<=SIZE_N;i+=2){
        status[i]=1;
    }
    for(int i=3;i*i<=SIZE_N;i+=2){
        if(!status[i]){
            for(int j=i*i;j<=SIZE_N;j+=i){
                status[j]=1;
            }
        }
    }
    status[1]=1;
}
int main()
{
    sieve();
    char str[10];
    long int num,limit,cnt,num1,loop,brk;
    while(gets(str))
    {
        long int len=strlen(str);
        if(str[0]=='0')
            break;
        if(len>=4)
        {
            printf("0\n");
            continue;
        }
        num=atoi(str);

        limit=1;
        for(long int j=1; j<=len; j++)
            limit*=10;
        brk=0;
        for(long int i=num+1; i<limit; i++)
        {
            if(status[i]==0)
            {
                sprintf(str,"%ld",i);
                cnt=loop=0;
                sort(str,str+len);
                do
                {
                    num1=atoi(str);
                    if(status[num1]==0)
                        cnt++;
                    loop++;
                }
                while(next_permutation(str,str+len));

                if(cnt==loop)
                {
                    brk++;
                    printf("%ld\n",i);
                    break;
                }
            }

        }
        if(brk==0)
            printf("0\n");
        memset(str,'\0',sizeof(str));
    }
    return 0;
}
