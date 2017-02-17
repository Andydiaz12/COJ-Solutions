#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	
	long p;
	double PI, cuadrado, circulo, radio;
	scanf("%ld", &p);
	while(p--){
		PI=acos(0)*2;
		scanf("%lf", &radio);
		printf("%.2lf\n", ((PI*(radio*radio)))-((pow((2*radio)/sqrt(2),2))));
	}
	return 0;
}
