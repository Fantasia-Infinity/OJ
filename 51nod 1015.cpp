#include<cstdio>
#include<iostream>
#include<map>
#include<set>
#include<algorithm>
#include<vector>
using namespace std;

int sxct(int a){
	if(a<10){
		return a*a*a;
	}else{
		int i;
		int j;
		i=a%10;
		j=(a-i)/10;
		return i*i*i+sxct(j);
	}
}
int sxcf(int a){
	if(a<10){
		return a*a*a;
	}else{
		int i;
		int j;
		i=a%10;
		j=(a-i)/10;
		return i*i*i*i+sxcf(j);
	}
}
bool sxh(int a){
	if (a<1000){
		return a==sxct(a);
	}else if(a>=1000){
		return a==sxcf(a);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	while(!sxh(n)){
		n++;
	}
	printf("%d\n",n);
	return 0;
}
