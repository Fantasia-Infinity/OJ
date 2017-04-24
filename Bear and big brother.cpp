#include<cstdio>
#include<set>
#include<map>
#include<vector>
#include<queue>
#include<cmath>
using namespace std;

int main(){
	int a;
	int b;
	scanf("%d",&a);
	scanf("%d",&b);
	int i;
	for(i=1;3*a<=2*b;i++){
		a=3*a;
		b=2*b;
	}
	printf("%d\n",i);
	return 0;
}
