#include<set>
#include<vector>
#include<cstdio>
#include<algorithm>
#include<iostream>
#include<map>
using namespace std;
typedef long long ll;
int main(){
	int n;
	scanf("%d",&n);
	int list[n];
	for(int i=0;i<n;i++){
		long long a;
		scanf("%lld",&a);
		list[i]=a;
	}
	long long libi[n];
	libi[0]=list[0];
	for(int i=1;i<n;i++){
		libi[i]=libi[i-1]+list[i];
	}
	sort(libi,libi+n);
	if (libi[0]<0){
		printf("%lld",-libi[0]);
	}else{
		printf("%lld",0);
	}
	return 0;
}
