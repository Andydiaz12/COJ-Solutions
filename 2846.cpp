#include <cstdio>

int main(){
	
	int casos, suma, i;
	char ciudadano[13];
	
	scanf("%d", &casos);
	
	while(casos--){
		suma = 0;
		scanf("%s", ciudadano);
		for(i = 0 ; i < 13 ; i++){
		suma+= (ciudadano[i]-'0');
	}
		
		suma+=(((ciudadano[i-1]-'0') + ((ciudadano[i-2]-'0') * 10) + ((ciudadano[i-3]-'0') * 100))*10);
		
		if(suma < 1000)
		suma+=1000;
		
		if(suma <= 9999 && suma >= 1000)
		printf("%d\n", suma);
		
		if(suma >= 10000){
			while(suma >= 10000)
			suma-=10000;
			(suma >= 1000) ? printf("%d\n", suma) : (suma < 1000 && suma >= 100) ? printf("0%d\n", suma) : printf("00%d\n", suma);
		}
		
	}
	
	return 0;
}

