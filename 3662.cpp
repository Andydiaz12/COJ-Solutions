#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	int p, i, a, x, X, valores[100000], suma;
	do
	{
		p=suma=0;
	scanf("%d", &x);
	a=x;
	
	if(x != -1){
		if(x != 1){
		x=x-1;
		for(x; x>0; x--){
			if(a%x == 0){
			valores[p]=x;
			suma+=x;
			p++;
						}
		}
		
	if(suma == a){
		x=a;
		printf("%d = ", x);
		for(p; p>0; p--){
			(p!=1)?printf("%d + ", valores[p-1]):printf("%d\n", valores[p-1]);
			
		}
							}
	else if(suma != a){
		printf("%d is NOT perfect.\n", a);
	}
}
else
printf("1 = 1\n");
	}
	}while(x != -1);
	
	
	return 0;
}
