#include <cstdio>
using namespace std;

int main(){
	long long numeros, x=0, suma=0;
	scanf("%lld", &numeros);
	while(numeros--){
		scanf("%lld", &x);
		suma+=x;
	
	}
		printf("%lld\n", (suma%128));
	return 0;
}
