#include <cstdio>
using namespace std;

int main(){
	int casos,i , suma, numero;
	
	scanf("%d", &casos);
	while(casos--){
		suma=0;
		scanf("%d", &numero);
		for(i=1; i<numero; i++){
			if(numero%i == 0)
			suma+=i;
		}
		printf("%d\n", suma);
	}
	
	return 0;
}
