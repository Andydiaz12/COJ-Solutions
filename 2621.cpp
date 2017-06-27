#include <cstdio>
#include <cmath>

using namespace std;

int main(){
	int numero, resultado;

	scanf("%d", &numero);
	resultado = log2(numero);
	printf("%d\n", resultado+1);

	return 0;
}