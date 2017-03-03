#include <cstdio>

int divisor (int n){
int a, suma=0;
a=1;
while (a!=n){
if (n%a==0)
suma=suma+a;
a++;
}
return suma;
}

int main(){
	int casos, suma, valor;
	
	scanf("%d", &casos);
	while(casos--){
		suma=0;
		scanf("%d", &valor);
		suma=divisor(valor);
		(suma == valor) ? printf("Perfect\n") : (suma < valor) ? printf("Deficient\n") : printf("Abundant\n");
	}

return 0;
}
