#include<set>
#include<vector>
#include<cstdio>
#include<algorithm>
#include<iostream>
#include<map>
#include<queue>
#include<utility>
using namespace std;
typedef pair<int,int> P;
vector<P> line;
int INF=100000000;
const int k=10;
int maze[k][k];
int d[k][k];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
queue<P> que;
map<P,P> fathers;
int main(){
	fathers.insert(make_pair(P(0,0),P(0,0)));
	for(int i=0;i<k;i++){
		for(int j=0;j<k;j++){
			scanf("%d",&maze[i][j]);
		}
	}
	for(int i=0;i<k;i++){
		for(int j=0;j<k;j++){
			d[i][j]=INF;
		}
	}
	que.push(P(0,0));
	d[0][0]=0;
	while(que.size()){
		P p=que.front();
		que.pop();
		if(p.first==k-1&&p.second==k-1){
			break;
		}
		for(int i=0;i<4;i++){
			int nx=p.first+dx[i];
			int ny=p.second+dy[i];
			if(0<=nx&&nx<k&&0<=ny&&ny<k&&maze[nx][ny]!=1&&d[nx][ny]==INF){
				que.push(P(nx,ny));
				fathers.insert(make_pair(P(nx,ny),p));
				d[nx][ny]=d[p.first][p.second]+1;
			}
		}	
	}	
	P dang(k-1,k-1);
	P st(0,0);

	while(fathers[dang]!=st){
		int a=dang.first;
		int b=dang.second;
		line.push_back(dang);
		maze[a][b]=5;
		dang=fathers[dang];
	}
	line.push_back(dang);
	maze[dang.first][dang.second]=5;
	line.push_back(st);
	maze[st.first][st.second]=5;
	reverse(line.begin(),line.end());
	for(vector<P>::iterator i=line.begin();i!=line.end();i++){
		printf("(%d. %d)\n",i->first,i->second);
	}
	for(int i=0;i<k;i++){
		for(int j=0;j<k;j++){
			printf("%d",maze[i][j]);
			if(j==k-1){
				printf("\n");
			}
		}
	}
	return 0;
}
