#include <cstdio>
using namespace std;

int main (){
	char figura[9];
	int a, b;
	scanf("%s", figura);
	if(figura[0] == 's'){
	scanf("%d", &a);
	printf("%d\n", a*a);
	}
	if(figura[0] == 'r'){
		scanf("%d %d", &a, &b);
		printf("%d\n", a*b);
	}
	return 0;
}
