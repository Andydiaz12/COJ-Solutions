#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){
	int i, casos, x, a, I, suma=0;
	char numero[1000];
	scanf("%d", &casos);
	for(i=0; i<casos; i++){
		x=suma=0;
		scanf("%s", numero);
		a=strlen(numero);
		if((numero[a-1]-'0')%2 == 0)
		x=1;
		for(I=0; I<a; I++){
		suma+=numero[I]-'0';
	}
		if(suma%3 == 0 && x==1)
		x=1;
		else if(suma%3 != 0 && x== 1)
		x=0;
	(x==1)?printf("YES\n"):printf("NO\n");
		
	}
	return 0;
}


