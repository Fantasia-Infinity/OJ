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
	while(n--){
		int h;
		scanf("%d",&h);
		int record[h+1][h+1];
        for(int i=0;i<=h;i++){
        	for(int j=0;j<=h;j++){
        		record[i][j]=0;	
			}
		}
		for(int i=1;i<=h;i++){
			for(int j=1;j<=i;j++){
				scanf("%d",&record[i][j]);
			}
		}
		for(int i=1;i<=h;i++){
			for(int j=1;j<=i;j++){
				int m=max(record[i-1][j],record[i-1][j-1]);
				record[i][j]+=m;
			}
		}
		int ma=0;
		for(int j=1;j<=h;j++){
			ma=max(ma,record[h][j]);
		}
		printf("%d\n",ma);
	}
	return 0;
}
