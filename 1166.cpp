#include <cstdio>
using namespace std;

int main(){
	int par, impar, casos, i=0, numeros, x;
	scanf("%d", &casos);
	while(casos--){
		par=impar=0;
		scanf("%d", &numeros);
		for(i=0; i<numeros;i++){
		
		scanf("%d", &x);
		(x%2 == 0)?par++:impar++;
	
	}
	printf("%d even and %d odd.\n", par, impar);
	}
	
	return 0;
}
