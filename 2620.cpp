#include <cstdio>
using namespace std;

int main(){
	char grito[10000];
	long long r, d, total;
	scanf("%lld", &r);
	d=r*2;
	total=2*d;
	grito[0]='A';
	for(int i=1; i<=total; i++){
		grito[i]='a';
	}
	grito[total+1]='h';
	printf("%s\n",grito);
	
	return 0;
}
