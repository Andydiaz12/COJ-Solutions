#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;


int main(){
	
	int casos, sacos, cargados, suma, x, i, cargar[1000], SACOS;
	char terreno[10];
	
	scanf("%d", &casos);
	
	while(casos--){
		suma = 0;
		scanf("%d %d %s", &sacos, &cargados, terreno);
		for(i = 0 ; i < sacos ; i++){
		scanf("%d", &cargar[i]);
									}
									
									sort(cargar, cargar+sacos);
									

		
		if(terreno[0] == 'r'){
		SACOS = sacos-cargados;
	for(SACOS ; SACOS < sacos ; SACOS++)
		suma+=cargar[SACOS];
	
	}
		
		else{
		
	for(i = 0 ; i < cargados ; i++)
		suma+=cargar[i];
		
	}
	printf("%d\n", suma);
	}
	
	return 0;
}
