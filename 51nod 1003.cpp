#include<cstdio>
#include<algorithm>
#include<cmath>
int main(){
	int ans=0;
	int num;
	scanf("%d",&num);
	for(int i=1;pow(5,i)<=num;i++){
		ans+=num/pow(5,i);
	}
	printf("%d\n",ans);
	return 0;
}
