#include <bits/stdc++.h>

using namespace std;

int main(){
	
	long long int lleno, temp_tiempo, temp;
	long long int tc, tiempo;
	
	scanf("%lld", &tc);
	
	while(tc--){
		scanf("%lld %lld", &lleno, &tiempo);
		if(tiempo != 1){
			temp_tiempo = tiempo;
			if(tiempo % 2 == 0){
				temp_tiempo--;
				temp = (temp_tiempo / 2) * (tiempo) + ((tiempo) / 2);
				}else{
					temp_tiempo--; 
					temp = (temp_tiempo/2)*(tiempo);
				}
				
				if(lleno - temp < 0)
					printf("1\n");
				else
				((((lleno-temp))) % tiempo != 0) ? printf("%lld\n", 1 + (lleno-temp)/tiempo) : printf("%lld\n",(lleno-temp)/tiempo);
		}else
		printf("%lld\n", lleno);
	}
	
	return 0;
}
