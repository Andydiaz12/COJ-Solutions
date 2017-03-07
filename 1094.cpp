#include <cstdio>
#include <cstring>

using namespace std;

int main(){

	char numero[10000];
	int casos, tamano;

	scanf("%d", &casos);
		while(casos--){
			getchar();
	gets(numero);
	tamano = strlen(numero);
	(numero[tamano-1] == '1' || numero[tamano-1] == '3' || numero[tamano-1] == '5' || numero[tamano-1] == '7' || numero[tamano-1] == '9') ? printf("odd\n") : printf("even\n"); 
	}


	return 0;
}