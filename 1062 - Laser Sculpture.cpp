#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int alto, ancho, respuesta, numero, temp, i;
	
	while(scanf("%d %d", &alto, &ancho) && ancho != 0 && alto != 0){
		scanf("%d", &temp);
		respuesta = alto - temp;
		for(i = 1 ; i < ancho ; i++){
			scanf("%d", &numero);
			if(numero < temp){
				respuesta += (temp - numero);
			}
			temp = numero;
		}
		printf("%d\n", respuesta);
	}
	
	return 0;
}
