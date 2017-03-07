#include <cstdio>
#include <algorithm>
#define MAX 20000

using namespace std;

int valor(int a, int (*precios)[MAX]){
	int  A, min = (*precios)[a];
	A=a+3;
	
	for(a ; a < A ; a++){
		 if(min > (*precios)[a])
		 min = (*precios)[a];
	}
	return min;
}

int main(){
	
	int suma, casos, precios[MAX], i, cantidad, a_descontar;
	
	scanf("%d", &casos);
	
	while(casos--){
		suma=0;
		scanf("%d", &cantidad);
		
		for(i = 0 ; i < cantidad ; i++)
			scanf("%d", &precios[i]);
		
		sort(precios, precios+cantidad);
		for(cantidad ; cantidad > 0 ; cantidad = cantidad - 3)
		suma+= valor(cantidad , &precios);	
		
		printf("%d\n", suma);
	}
	
	return 0;
}
