#include<set>
#include<vector>
#include<cstdio>
#include<algorithm>
#include<iostream>
#include<map>
using namespace std;
typedef pair<int,int> pi;
vector<pi> pas;
int main(){
	int k,n;
    scanf("%d%d",&k,&n);
	int s=n;
	int list[s];
	for(int i=0;i<s;i++){
		int a;
		scanf("%d",&a);
		list[i]=a;
	}
	sort(list,list+s);
	for(int i=0;i<s;i++){
		int a=*lower_bound(list+i+1,list+s,k-list[i]);
		if(a==k-list[i]){
			pas.push_back(make_pair(list[i],a));	
		}	
	}
	if(!pas.size()){
		printf("No Solution\n");
	}
	for(int i=0;i<pas.size();i++){
		printf("%d %d\n",pas[i].first,pas[i].second);
	}
	pas.clear();

	return 0;
}
