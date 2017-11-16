#include <bits/stdc++.h>

int main(){
	
	int numero, casos, sumatoria, i;
	
	scanf("%d", &casos);
	
	while(casos--){
		
		scanf("%d", &numero);
		
		sumatoria = 0;
		
		for(i = 2 ; i * i <= numero ; i++){
			if(numero%i == 0){
				
				sumatoria = sumatoria + (numero/i);
				
				if(i != (numero/i)){
					sumatoria+= i; 
				}
			}	
		}
		
		sumatoria++;
		(sumatoria == numero) ? printf("perfect\n") : (sumatoria < numero) ? printf("deficient\n") : printf("abundant\n");
		
	}
	
	
	return 0;
}
