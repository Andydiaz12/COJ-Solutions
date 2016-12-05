#include <cstdio>
using namespace std;

int main(){
	float p, x, suma=0;
	int eventos;
	scanf("%d", &eventos);
	p=eventos;
	while(eventos--){
		scanf("%f", &x);
		suma=suma+x;
	}
	printf("%.2f\n", suma/p);
	return 0;
}
