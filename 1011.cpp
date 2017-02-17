#include <cstdio>
using namespace std;

int ciclo(int guerreros){
	int max=0, min_escaneado;
	max=0;
	for(int i=0; i<guerreros; i++){
	scanf("%d", &min_escaneado); 
	(max<min_escaneado) ? max = min_escaneado : max=max;	
	}
	return max;
}

int max(){
	int max_g, max_m, guerreros_g, guerreros_m;
	scanf("%d %d", &guerreros_g, &guerreros_m);
	max_g=ciclo(guerreros_g);
	max_m=ciclo(guerreros_m);
	(max_g==max_m || max_g > max_m) ? printf("Godzilla\n") : printf("MechaGodzilla\n");
}

int main(){
	
	int Min, casos;
	scanf("%d", &casos);
	
	while(casos--){
		Min=max();
		}
	
	return 0;
}
