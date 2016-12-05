#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int casos, numero, suma, cont, aguante, i;
	scanf("%d", &casos);
	while(casos--){
		cont=suma=0;
		scanf("%d %d", &numero, &aguante);
		int elefantes[numero];
		for(i=0; i<numero; i++)
			scanf("%d", &elefantes[i]);
		sort(elefantes,elefantes+numero);
		for(i=0; i<numero; i++){
			suma+=elefantes[i];
			if(suma<=aguante)
				cont++;
				else
				i=numero+1;
		}
		printf("%d\n", cont);
	}
	
	return 0;
}
