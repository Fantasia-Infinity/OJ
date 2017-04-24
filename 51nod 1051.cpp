#include<set>
#include<vector>
#include<cstdio>
#include<algorithm>
#include<iostream>
#include<map>
using namespace std;

int main(){
	int i,j;
	while(scanf("%d%d",&i,&j)){
	int mat[i][j];
	int ans=0;
	int m;
	for(int a=0;a<i;a++){
		for(int b=0;b<j;b++){
			scanf("%d",&mat[a][b]);
		}
	}
	for(int a=0;a<i;a++){
		for(int b=0;b<j;b++){
			for(int c=a;c<i;c++){
				for(int d=b;d<j;d++){
					for(int e=a;e<=c;e++){
						for(int f=b;f<=d;f++){
							m+=mat[e][f];
						}
					}
					ans=max(ans,m);
					m=0;
				}
				
			}	
		}
	}
	printf("%d\n",ans);
}
	return 0;
}
