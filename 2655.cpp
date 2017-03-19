#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
	
	int i,  size, p=0 , valores[5];
	char letras[10];
	
	
	for(i = 0 ; i < 5 ; i++){
		scanf("%s", letras);
		size = strlen(letras);
		for(int I = 2 ; I < size ; I++){
			if(letras[I] == 'I' && letras[I-1] == 'B' && letras[I-2] == 'F'){
				valores[p] = i+1;
			p++;
			}
		}
		
		sort(valores, valores+p);
		
	}
	if(p != 0){
	for(i = 0 ; i < p ; i++)
		((i + 1 )== p) ? printf("%d\n", valores[i]) : printf("%d ", valores[i]);
	}
	else
	printf("HE GOT AWAY!\n");
	return 0;
}
