#include <cstdio>
using namespace std;

int main(){
	int casos;
	float x, y;
	scanf("%d", &casos);
	while(casos--){
		scanf("%f %f", &x, &y);
		printf("%.2f\n", x/y);
	}
	
	return 0;
}
