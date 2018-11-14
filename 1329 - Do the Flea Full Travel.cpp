#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int tc, respuestas[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024}, numero, i;
	bool aceptacion = false;
	
	scanf("%d", &tc);
	
	while(tc--){
		aceptacion = false;
		scanf("%d", &numero);
		for(i = 0 ; i < 11 ; i++){
			if(numero == respuestas[i]){
				aceptacion = true;
				i == 11;
			}
		}
		(aceptacion) ? printf("YES\n") : printf("NO\n");
	}
	
	return 0;
}
