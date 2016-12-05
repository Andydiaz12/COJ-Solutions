#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	int casos, decimal, unidad, numero_letras;
	char numero[100];
	
	scanf("%d",&casos);
	while(casos--){
		scanf("%s", numero);
		numero_letras=strlen(numero);
		decimal=numero[numero_letras-2]*10;
		unidad=numero[numero_letras-1];
		(((decimal+unidad)%4 == 0 || (decimal+unidad)==0))?printf("YES\n"):printf("NO\n");
	}
	return 0;
}
