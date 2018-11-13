#include <bits/stdc++.h>

using namespace std;

int main(){
	
	long long int i, contrasena_1[7] = {4, 6, 2, 4, 8, 3, 2}, numero, contrasena_2[8] = {2, 4, 8, 3, 2, 6, 1, 2};
	
	for(i = 0 ; i < 4 ; i++){
		scanf("%lld", &numero);
		if(numero <= 7){
			printf("%lld", contrasena_1[numero - 1]);
		}else{
			numero -= 2;
			(numero % 8 != 0) ? printf("%lld", contrasena_2[(numero % 8) - 1]) : printf("%lld", contrasena_2[0]);
		}
			
	}printf("\n");
	
	return 0;
}
