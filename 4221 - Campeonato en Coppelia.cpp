#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int maximo = 0, sunday = 0, maestra = 0, piedra = 0, i, suma;
	
	for(i = 0 ; i < 4 ; i++){
		suma = 0;
		scanf("%d %d %d", &sunday, &maestra, &piedra);
		suma = (sunday * 2) + (maestra * 5) + (piedra * 7);
		if(suma > maximo)
			maximo = suma;
	}
	
	printf("%d\n", maximo);
	
	return 0;
}
