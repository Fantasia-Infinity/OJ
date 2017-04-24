#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int stonenum;
	int stnum;
	vector<int> stones;
	vector<int> sts;
	vector<int> ans;
	int i;
	int a;
	int questionnum = 0;
	
	while((scanf("%d %d", &stonenum,&stnum)) &&stonenum &&stnum){
		questionnum++;
		while(stonenum--){
			scanf("%d",&a);
			stones.push_back(a);
		}
		while(stnum--){
			scanf("%d",&a);
			sts.push_back(a);
		}
		printf("CASE# %d:\n", questionnum);
		sort(stones.begin(),stones.end());
	    for(vector<int>::iterator it=sts.begin();it<sts.end();it++){
	    	ans.push_back((lower_bound(stones.begin(),stones.end(),*it)-stones.begin())+1);
	    	if(*it == *lower_bound(stones.begin(),stones.end(),*it)){
	    		printf("%d found at %d\n",*it,ans.back());
			}
			else printf("%d not found\n",*it);
		}
		stones.clear();
		sts.clear();
		ans.clear();	
	}	
	return 0;
}
