#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cstdlib>
using namespace std;

int main(){
int i, casos, tamano, bolsas, cant, suma=0, pesos[1000];
char terreno[15];

scanf("%d", &casos);
while(casos--){
	suma=0;
	scanf("%d %d %s", &bolsas, &cant, terreno);
	for(i=0; i<bolsas; i++){
							scanf("%d", &pesos[i]);
							}
	sort(pesos, pesos+bolsas);
	if(terreno[0] == 'i'){
		for(i=0; i<cant; i++)
		suma=suma+pesos[i];
	}
	else{
		bolsas=bolsas-1;
		for(i=0; i < cant; i++){
			suma=(suma+pesos[bolsas]);
			bolsas--;
		}
	}
	printf("%d\n", suma);
}

return 0;
}