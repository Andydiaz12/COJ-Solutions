#include <cstdio>
using namespace std;

int main(){
	long long A=1, B=1, C;
	while(A != 0 || B != 0){
		scanf("%lld %lld", &A, &B);
		if(A == 0 && B == 0)
		break;
			C=(2*A)-B;
			printf("%lld\n", C);
	}
	return 0;
}
