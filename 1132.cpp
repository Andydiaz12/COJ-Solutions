#include <cstdio>
#include <cmath>

using namespace std;

int main(){

	int casos, numero, suma, raiz, i;
		scanf("%d", &casos);

		while(casos--){
			suma = 0;
		scanf("%d", &numero);

		raiz = sqrt(numero);
		for(i = 1 ; i <= raiz ; i++){
			if(numero%i == 0){
				suma+= i;
				if(numero/i != i)
				suma+= (numero/i);
			}
		}
		(numero == 1) ? printf("0\n") : printf("%d\n", suma-numero);

		}
	return 0;
}