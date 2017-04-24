#include<set>
#include<vector>
#include<cstdio>
#include<algorithm>
#include<iostream>
#include<map>
#define cons make_pair
#define car first
#define cdr second
using namespace std;
typedef pair<int,int> pi;
typedef pair<int,pi> edge;
typedef vector<edge> edve;
typedef map<int,int> fath;
int findf(fath x,int a){
	if(x[a]==a){
		return a;
	}else{	
		return x[a]=findf(x,x[a]);
	}
}
bool same(fath x,int a,int b){
	if(findf(x,a)==findf(x,b)){
		return true;
	}else{
		return false;
	}
}
void uni(fath &x,int a,int b){
	a=findf(x,a);
	b=findf(x,b);
	if(a==b) return;
	else x[a]=b;
}
int u(edge e){
	return e.car;
}
int v(edge e){
	return e.cdr.car;
}
int cost(edge e){
	return e.cdr.cdr;
}
bool cmp(edge a,edge b){
	return cost(a)<=cost(b);
}
edve list;
fath fathers;

int main(){
	int nos;
	int eds;
	int ans=0;
	while(scanf("%d",&nos)&&nos){
		scanf("%d",&eds);
		int nu=eds;
		while(eds--){
			int u,v,cost;
			int s[2];
			scanf("%d%d%d",&u,&v,&cost);
			list.push_back(cons(u,cons(v,cost)));
			fathers.insert(cons(u,u));
			fathers.insert(cons(v,v));
			}
		sort(list.begin(),list.end(),cmp);
		for(int i=0;i<nu;i++){
			edge e= list[i];
			if(!same(fathers,u(e),v(e))){
				uni(fathers,u(e),v(e));
				ans+=cost(e);
			}
		}
		printf("%d",ans);
		fathers.clear();
		list.clear();
		ans=0;	
	}	
	return 0;
}









