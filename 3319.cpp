#include <cstdio>
using namespace std;

int main(){
	long long casos, n, i, suma;
	
	scanf("%lld", &casos);
	while(casos--){
		suma=1;
		scanf("%lld", &n);
		for(i=0; i<=n; i++){
			if(i == 2 || i == 3 || i == 5 || i == 7 || i ==11 || i == 13 || i == 17 || i == 19 || i == 23 || i == 29 || i == 31 || i == 37 || i == 41 || i == 43 || i == 47)
			suma=suma*i;
		}
		printf("%lld\n", suma);
		
	}
	
	return 0;
}
