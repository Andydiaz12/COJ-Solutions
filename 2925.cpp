#include <cstdio>
using namespace std;

int cont=0;

int recursividad_par(int vol_inicial, int vol_final){
	if(vol_inicial <= vol_final)
	return vol_inicial;
	else if(vol_inicial%2 != 0){
	cont++;
	recursividad_par(((vol_inicial-1)/2), vol_final);
	
}
	else{
	cont++;
	recursividad_par((vol_inicial/2), vol_final);
	
	
}
}

int main(){	
	
	int casos, vol_ini, vol_fin, CONT, x;
	scanf("%d", &casos);
	while(casos--){
		CONT=cont=0;
		scanf("%d %d", &vol_ini, &vol_fin);
		
		if(vol_ini < vol_fin){
		while(vol_ini != vol_fin){
		CONT++;	
		vol_ini++;
		}
		printf("%d\n", CONT);
	}
		else if(vol_ini >= vol_fin){
		
		x=recursividad_par(vol_ini, vol_fin);

		if(x == vol_fin)
		printf("%d\n", cont);
		else{
		while(x < vol_fin){
		cont++;	
		x++;
		}
		printf("%d\n", cont);
	}
		}
			
	}
	
	return 0;
}
