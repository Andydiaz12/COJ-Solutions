#include <cstdio>
#include <cstring>
using namespace std;

void impresion(int a, char (*b)[100], int d){
	d=d-1;
	for(d; d>=a; d--)
	printf("%c", (*b)[d]);
	
}

int main(){
	
	char cadena[100];
	int subca, tamano, cont, i;
	
	while(scanf("%d", &subca) && subca != 0){
		cont=0;
		scanf("%s", cadena);
		tamano=strlen(cadena);
		tamano=tamano/subca;
		
		for(i=0; i<subca; i++){
			impresion(cont, &cadena, (cont+tamano));
			cont=cont+tamano;
		}
		printf("\n");
	}
	
	return 0;
}
