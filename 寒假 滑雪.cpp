#include<set>
#include<vector>
#include<cstdio>
#include<algorithm>
#include<iostream>
#include<map>
using namespace std;
int h[105][105];
int re[105][105];
int hh;
int l; 
int dp(int x, int y) {
	if (re[x][y] != 0) return re[x][y];
	re[x][y] = 1;
	if (x-1>=0 && h[x-1][y] < h[x][y]&&dp(x-1,y)>=re[x][y]){
		re[x][y] = dp(x-1,y ) + 1;}
	if (x+1<hh && h[x+1][y] < h[x][y]&&dp(x+1, y)>=re[x][y]){
		re[x][y] = dp(x + 1, y) + 1;}
	if (y-1>=0 && h[x][y-1] < h[x][y]&&dp(x, y-1)>=re[x][y]){
		re[x][y] = dp(x, y -1) + 1;}
	if (y+1<l && h[x][y+1] < h[x][y]&&dp(x, y + 1)>=re[x][y]){
		re[x][y] = dp(x, y + 1) + 1;}
	return re[x][y];
}

int main(){
	scanf("%d%d",&hh,&l);
	for(int i=0;i<hh;i++){
		for(int j=0;j<l;j++){
			scanf("%d",&h[i][j]);
		}
	}
	for(int i=0;i<hh;i++){
		for(int j=0;j<l;j++){
			re[i][j]=0;
		}
	}
	for(int i=0;i<hh;i++){
		for(int j=0;j<l;j++){
			dp(i,j);
		}
	}
	int maxx=0;
	for(int i=0;i<hh;i++){
		for(int j=0;j<l;j++){
			maxx=max(maxx,re[i][j]);
		}
	}
	printf("%d\n",maxx);
	return 0;
}
