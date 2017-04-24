#include<cstdio>
#include<vector>
#include<set>
#include<map>
using namespace std;
typedef pair<int,int> pi;

int main(){
	int n;
	scanf("%d",&n);
	if(n==0){
		printf("%d",0);
	}
	int nums[2*n];
	int i;
	pi recs[2*n];
	recs[0]=pi(0,0);
	for(i=0;i<n;i++){
		scanf("%d",&nums[i],&nums[i+n]);
	}
	int j;
	for(j=1;j<2*n;j++){
		if(recs[j-1].second==j-1){
			if(nums[j]>=0){
				recs[j]=pi(recs[j-1].first,j);
			}else{
				recs[j]=pi(recs[j-1].first,recs[j-1].second);
			}
		}else if(recs[j-1].second!=j-1){
			    int a;
				int sum1=0;
				for(a=recs[j-1].first;a<=j;a++){
					sum1+=nums[a];
				}
				int sum2=0;
				for(a=recs[j-1].first;a<=recs[j-1].second;a++){
					sum2+=nums[a];
				}
				if(sum1>=sum2){
					recs[j]=pi(recs[j-1].first,j);
				}else{
					recs[j]=pi(recs[j-1].first,recs[j-1].second);
				}
		}
	}
	int ans=0;
	for(int i=recs[2*n-1].first;i<=recs[2*n-1].second;i++){
		ans+=nums[i];
	}
	if(ans<=0){
		printf("%d\n",0);
	}else{
		printf("%d\n",ans);
	}
	return 0;
}
