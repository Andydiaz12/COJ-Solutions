#include <cstdio>
#include <cstdlib>

int main(){

	int casos, i;
	float suma, valor;

	scanf("%d", &casos);

	while(casos--){
	suma=0;

	for(i = 0 ; i < 10 ; i++){
	scanf("%f", &valor);
	suma+=valor;
	}
	printf("%.3f\n", (suma*0.85));
	
	}


	return 0;
}