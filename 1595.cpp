#include <cstdio>
#include <cstring>
#define MAX 1000

using namespace std;

int proceso(char (*arreglo)[MAX], int size){
	int  i, suma=0;
	size = strlen(*arreglo);
	for(i = 0 ; i < size ; i++){
			suma+= (*arreglo)[i]-'0';
		}
		return suma;
}

int main(){
	
	int cont=0, suma, size, i;
	char arreglo2[MAX], arreglo[MAX];
	bool yes;
	
	while(scanf("%s", arreglo) && arreglo[0] != '0'){
		cont=suma=0;
	strcpy(arreglo2, arreglo);
	size = strlen(arreglo);

	
		if(size == 1 && arreglo[0] == '9')
		printf("9 is a multiple of 9 and has 9-degree 1.\n");
	
		else{
		
		do{
			size = strlen(arreglo);
			suma = proceso(&arreglo, size);
				if(cont == 0)
				(suma%9 == 0) ? yes=true : yes=false;
			sprintf(arreglo, "%d", suma);
			cont++;
			
		}while(size != 1);
		
		
		
		(yes) ? printf("%s is a multiple of 9 and has 9-degree %d.\n", arreglo2, cont-1) : printf("%s is not a multiple of 9.\n", arreglo2); 
	}
	}
	
	
	return 0;
}
