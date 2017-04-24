#include<cstdio>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        __int64 f[21];
        f[1]=0;
        f[2]=1;
        int i;
        for(i=3;i<=n;i++)
        {
            f[i]=(f[i-1]+f[i-2])*(i-1);
        }
        printf("%I64d\n",f[n]);
    }
    return 0;
}


