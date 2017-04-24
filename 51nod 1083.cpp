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
	int mat1[n+1][n+1];
	for(int i=0;i<n+1;i++){
		mat1[i][0]=0;
	}
	for(int j=0;j<n+1;j++){
		mat1[0][j]=0;
	}
	for(int i=1;i<n+1;i++){
		for(int j=1;j<n+1;j++){
			scanf("%d",&mat1[i][j]);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int m=max(mat1[i][j-1],mat1[i-1][j]);
			mat1[i][j]=mat1[i][j]+m;
		}
	}
	printf("%d\n",mat1[n][n]);
	return 0;
}
