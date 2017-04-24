#include<math.h>
#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
#define N 155
int y,m,d,day_cnt,f1;
int judge(int year){
    if((year%4==0)&&(year%100!=0)||year%400==0 )
	return 1;
    else return 0;
}
int main(){
    int t;cin>>t;
    while(t--){
        day_cnt=f1=0;
        scanf("%d-%d-%d",&y,&m,&d);
        if(judge(y)&&m==2&&d==29){
            cout<<-1<<endl;
            continue;
        }
        if(judge(y)&&m>=3){f1=-1;}
        if(judge(y+18)&&m<3){f1=0;}
        if(judge(y+18)&&m>=3){f1=1;}
        for(int i=0;i<18;i++){
            int yy=y+i;
            if(judge(yy))day_cnt+=366;
            else day_cnt+=365;
        }
        cout<<day_cnt+f1<<endl;
    }
    return 0;
}
