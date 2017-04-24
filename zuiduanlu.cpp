#include<set>
#include<vector>
#include<cstdio>
#include<algorithm>
#include<iostream>
#include<map>
#include<queue>
#include<utility>
using namespace std;

int main(){
	int n;
	int m;
	scanf("%d%d",&n,&m);
	int dis[n][n];
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++)
			dis[i][j]=1<<29;
	while(m--)
	{
		int x;
		int y;
		int c;
		scanf("%d%d%d",&x,&y,&c);
		dis[x][y]=c;  dis[y][x]=c;
	}
	for (int k=1;k<=n;k++)
		for (int i=1;i<=n;i++)
			for (int j=1;j<=n;j++)
				dis[i][j]=min(dis[i][j],dis[i][k]+dis[k][j]);
	printf("%d\n",dis[1][n]);

    return 0;
}
