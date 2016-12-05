#include <cstdio>
using namespace std;

int main(){
	
	int casos;
	float m, d, a, distancia;
	scanf("%d", &casos);
	while(casos--){
		scanf("%f %f", &m, &d);
		distancia=(-(d*(1/m))+d);
		printf("%.0f\n", distancia);
	}
	return 0;
}
