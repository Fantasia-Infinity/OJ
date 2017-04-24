#include<set>
#include<vector>
#include<cstdio>
#include<algorithm>
#include<iostream>
#include<map>
using namespace std;

int main(){
	int h;
	int l;
	while(scanf("%d%d",&h,&l)!=EOF){
		int ans=l-1;
		for(int i=0;i<h-1;i++){
			ans+=l;
		}
		printf("%d\n",ans);
	}
	return 0;
}
