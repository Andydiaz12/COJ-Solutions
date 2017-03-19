#include <cstdio>
#include <cstring>

using namespace std;

void funcion(){
	int cont=0, i,  size;
	char cadena[1000];
	
	scanf("%s", cadena);
	size = strlen(cadena);
	
	for(i = 0 ; i < size ; i++){
		if(cadena[i] == 'A' || cadena[i] == 'D' || cadena[i] == 'O' || cadena[i] == 'P' || cadena[i] == 'Q' || cadena[i] == 'R')
		cont++;
		else if(cadena[i] == 'B')
		cont+=2;
		
	}
	printf("%d\n", cont);
}

int main(){
	
	funcion();
	
	return 0;
}
