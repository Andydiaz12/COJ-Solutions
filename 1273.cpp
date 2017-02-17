#include <cstdio>
using namespace std;

int piezas(int a){
	if(a == 1)
	return 1;
	else
	return a + piezas(a-1);
}

int main(){
	
	int N, L, W, casos;
	
	scanf("%d", &casos);
	while(casos--){
		scanf("%d %d %d", &N, &L, &W);
		N=piezas(N+1);
		printf("%d\n", (N*L*W));	
	}
	
	return 0;
}
