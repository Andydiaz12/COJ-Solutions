#include <cstdio>
using namespace std;

int main(){
	float temp, max=0;
	int i, numero, bandera;
	scanf("%d", &numero);
	for(i=0;i<numero; i++){
		scanf("%f", &temp);
		if(temp >= max){
		max=temp;
		bandera=i+1;
	}
	}
	printf("%d\n", bandera);
	
	return 0;
}
