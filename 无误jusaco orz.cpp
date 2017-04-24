#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <set>
#include <algorithm>
#include <numeric>
using namespace std;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;

bool san(int a,int b,int c){
	int sum;
	int ma;
	sum=a+b+c;
	ma=max(a,max(b,c));
	return ma<sum-ma;
}

int main(){
	int pronum;
	int a;
	int linenum;
	vector<int> lines;
	set<piii> sanjs;
	scanf("%d",&pronum);
	while(pronum--){
		scanf("%d",&linenum);
		while(linenum--){
			scanf("%d",&a);
			lines.push_back(a);
		}
		for(vector<int>::iterator i=lines.begin();i!=lines.end();i++){
			for(vector<int>::iterator j=i+1;j!=lines.end();j++){
				for(vector<int>::iterator k=j+1;k!=lines.end();k++){
					int x=accumulate(lines.begin(),i,0);
					int y=accumulate(i,j,0);
					int z=accumulate(j,k,0);
					if(san(x,y,z)){
						int ss[3];
						ss[0]=x;
						ss[1]=y;
						ss[2]=z;
						//sort(ss,ss+3);
						sanjs.insert(make_pair(ss[0],make_pair(ss[1],ss[2])));
					}
				}
			}
		}
		printf("%d\n",sanjs.size());
		sanjs.clear();
		lines.clear();
		
	}
	return 0;
}
