#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int suma = 0, numero, suma_real = 0, temp;
	
	scanf("%d", &numero);
	
	(numero % 2 == 0) ? suma = ((numero + 1) * (numero / 2)) : suma = ((numero + 1) * (--numero / 2) + (++numero/2) + 1);
	
	while(--numero){
		scanf("%d", &temp);
		suma_real += temp; 
	}
	
	printf("%d\n", suma - suma_real);
	
	return 0;
}
