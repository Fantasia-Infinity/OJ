#include<map>
#include<set>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){
	long long n;
	int a;
	scanf("%lld",&n);
	a=n%10;
	for(int i=0;i<n;i++){
		a=(a*a)%10;
	}
	printf("%d\n",a);
	return 0;
}
