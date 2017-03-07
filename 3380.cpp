#include <cstdio>
#include <cstring>
#define MAX 1001

int main(){

	int casos, aceptado, tam, p, i, igualacion, tam1;
	char arreglo_1[MAX], arreglo_2[MAX];
	
	scanf("%d", &casos);
	
	while(casos--){
		aceptado=0;
		scanf("%s %s", arreglo_1, arreglo_2);
		tam = strlen(arreglo_1);
		tam1 = strlen(arreglo_2);
					
						for(i = 0 ; i < tam ; i++){
							
							if(arreglo_1[i] == arreglo_2[tam-i-1])
							aceptado = 1;
						
							else if(arreglo_1[i] == arreglo_2[i])
							aceptado = 1;
							
							else{
							i=tam;
							aceptado=0;
					}
							
						}
					
						(aceptado == 1 && (tam == tam1)) ? printf("YES\n") : printf("NO\n");
					
			
	}

	return 0;
}
