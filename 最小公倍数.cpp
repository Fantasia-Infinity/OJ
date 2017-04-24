#include<cstdio>
int main(void){
    int a,b,t;
    while(1){
        if(scanf("%d%d",&a,&b)>0 && a>0 && a<1001 && b>0 && b<1001){
            if(a>(t=b))
                t=a,a=b,b=t;
            while(b%a) b+=t;
        }
        else break;
        printf("%d\n",b);
    }
    return 0;
}
