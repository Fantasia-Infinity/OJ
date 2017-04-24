#include<set>
#include<vector>
#include<cstdio>
#include<algorithm>
#include<iostream>
#include<map>
using namespace std;

int main(){
	int atn;
	int L;
	int atnum;
	vector<int> ants;
	int mi=0;
	int ma=0;
	scanf("%d%d",&atn,&L);
	atnum=atn;
	while(atn--){
		int a;
		scanf("%d",&a);
		ants.push_back(a);
	}
	for(int i=0;i<atnum;i++){
		mi=max(min(ants[i],L-ants[i]),mi);
	}
	for(int i=0;i<atnum;i++){
		ma=max(max(ants[i],L-ants[i]),ma);
	}
	printf("%d %d",mi,ma);
	return 0;
}
