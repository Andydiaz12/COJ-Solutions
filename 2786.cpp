#include <cstdio>



int main(){
	
	int lado, suma=0, i;
	
	scanf("%d", &lado);
	
	if(lado <= 2)
	printf("%d\n", lado);
	
	else if(lado%2 == 0){
		printf("%d\n", (lado*(lado/2)));
	}
	else{
		for(i=1; i < (lado-1); i=i+2)
		suma+=i;
		suma=lado+(2*suma);
		printf("%d\n", suma);
		
	}
	return 0;
}
