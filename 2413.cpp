#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	
	int casos, a, x;
	char valores[100000];
	scanf("%d", &casos);
	while(casos--){
		scanf("%s", valores);
		a=strlen(valores);
		x=valores[a-1]-'0';
		(x == 0 || x == 5)?printf("YES\n"):printf("NO\n");
	}
	
	return 0;
}