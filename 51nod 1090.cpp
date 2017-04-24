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
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
typedef vector<piii> vect;
vect vec;
int main(){
	int n;
	scanf("%d",&n);
	int list[n];
	for(int i=0;i<n;i++){
		scanf("%d",&list[i]);
	}
	sort(list,list+n);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int m=0-list[i]-list[j];
			int* a=lower_bound(list+j+1,list+n,m);
			if((*a)==m&&a-list+0<n){
				vec.push_back(cons(list[i],cons(list[j],m)));
		    }
	    }
    }
	if(vec.size()==0){
		printf("No Solution\n");
	} 
	else for(vect::iterator i=vec.begin();i!=vec.end();i++){
		printf("%d %d %d\n",(*i).car,(*i).cdr.car,(*i).cdr.cdr);
	}	
	return 0;
}
