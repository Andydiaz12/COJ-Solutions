#include <cstdio>
#include <cmath>
using namespace std;
int main(){
	
	int  casos, pisos;
	double radio, alto, suma, pi = 3.14159265358979323846;
	
	scanf("%d", &casos);
	while(casos--){
		suma=0;
		scanf("%d", &pisos);
			while(pisos--){
				scanf("%lf %lf", &radio, &alto);
				suma+=((pi*(radio*radio))*alto);
			}
			printf("%.2lf\n", suma);
	}
	
	return 0;
}
