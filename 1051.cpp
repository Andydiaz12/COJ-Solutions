#include <cstdio>
using namespace std;

int main(){
	
	long long x, i, cont=0;
	scanf("%lld", &x);
	
	for(x; x>0; x--){
		if(x<3){
		cont++;
		x=0;
	}
		else if(x%3 == 0)
		cont++;
	}
	printf("%d\n", cont);
	return 0;
}
