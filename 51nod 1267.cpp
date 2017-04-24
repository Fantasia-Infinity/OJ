#include<set>
#include<vector>
#include<cstdio>
#include<algorithm>
#include<iostream>
#include<map>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int lis[n];
	for(int i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		lis[i]=a;
	}
	bool f=false;
	sort(lis,lis+n);
	int kk[n*n];
	for(int x=0;x<n;x++){
		for(int y=x+1;y<n;y++){
			kk[x*y]=lis[x]+lis[y];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
				int m=0-lis[i]-lis[j];
				if(binary_search(kk,kk+n*n,m)){
					f=true;
				}	
		}
	}
	if(f){
		printf("Yes");
	}else{
		printf("No");
	}
	return 0;
}
