#include <cstdio>
using namespace std;
int cont=0;
void burbuja(int (*a)[50], int b){
	int i=0, x=0, j=0;
	for (i; i<b; i++){
		for(j=i+1; j<b;j++){
			if((*a)[i]>(*a)[j]){
			x=(*a)[i];
			(*a)[i]=(*a)[j];
			(*a)[j]=x;
			cont++;
			}
		}
	}
}

int main(){
	int prueba[50], casos, numeros, i;
	scanf("%d", &casos);
	while(casos--){
		cont=0;
		scanf("%d", &numeros);
		for(i=0; i<numeros; i++)
		scanf("%d", &prueba[i]);
	burbuja(&prueba, numeros);
	printf("Optimal train swapping takes %d swaps.\n", cont);
	
	}
	return 0;
	
}
