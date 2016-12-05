#include <cstdio>
using namespace std;

int main(){
	double A, B, R;
	char letra[10];
	scanf("%s", letra);
	if(letra[0] == 'c'){
			scanf("%lf", &R);
			printf("%.2f\n", (3.14*(R*R)));
	}
	else if(letra[0] == 't' || letra[0] == 'r'){
		scanf("%lf %lf", &A, &B);
		printf("%.2lf\n", ((B*A)/2));
	}

	
	return 0;
}
