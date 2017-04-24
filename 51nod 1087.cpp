#include<set>
#include<vector>
#include<cstdio>
#include<algorithm>
#include<iostream>
#include<map>
using namespace std;
int ngo(int n){
	return 1+(n*n-n)/2;
}
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int a;
		int i;
		scanf("%d",&a);
		for(i=1;ngo(i)<=a;i++){
			if(ngo(i)==a){
				printf("%d\n",1);
				break;
			}
		}
		if(ngo(i)>a){
			printf("%d\n",0);
		}
	}
	return 0;
}
