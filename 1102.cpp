#include <cstdio>
#include <cstdlib>
using namespace std;

int main(){
	long long x;
	do{
		scanf("%lld", &x);
		if(x == 0)
		x=0;
		else if(x%11 == 0)
		printf("%lld is a multiple of 11.\n", x);
		else if (x%11 != 0)
		printf("%lld is not a multiple of 11.\n", x);
	}while(x!=0);
	return 0;
}
