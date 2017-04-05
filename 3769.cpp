#include <cstdio>
#include <cstdlib>

int main(){

float suma = 0,  c, l, valor_max=0;
int num_prefix;

scanf("%d", &num_prefix);
	
	while(num_prefix--){
		suma=0;
	scanf("%f %f", &l, &c);
	suma = (l*.7) + (c*.3);
	if(suma > valor_max)
		valor_max = suma;
}
	printf("%.2f\n", valor_max);

	return 0;

}