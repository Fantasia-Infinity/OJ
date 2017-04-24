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
		int mat[h][l];
		for(int i=0;i<h;i++){
			mat[i][0]=i;
		}
		for(int j=0;j<l;j++){
			mat[0][j]=j;
		}
		for(int i=1;i<h;i++){
			for(int j=1;j<l;j++){
				int m=1+i+mat[i][j-1];
				mat[i][j]=m;
			}
		}
		printf("%d\n",mat[h-1][l-1]);
	}
	return 0;
}
