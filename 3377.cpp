#include <cstdio>
using namespace std;

int main(){
	int i, casos, numero,variable, cont;
	scanf("%d", &casos);
	while(casos--){
		cont=variable=0;
		scanf("%d", &numero);
		variable=numero;
		for(i=1; i<=7900; i++){
			if(i<=variable){
			if(variable%i == 0){
				cont++;
				
			}
			if(cont == numero){
				printf("%d\n", i);
				i=8782;	
				}
			}
			else{
			variable++;
			i=1;
			cont=0;
			}
			
		}
		
	}
	
	return 0;
}
