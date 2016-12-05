#include <cstdio>
using namespace std;

int main(){
	int casos, sum, i, valores[6];
	scanf("%d", &casos);
	while(casos--){
		sum=0;
		for(i=0; i<6; i++){
		scanf("%d", &valores[i]);
		sum+=valores[i];
		}
		((sum%2 == 0))?printf("Tobby puede cruzar\n"):printf("Tobby no puede cruzar\n");
	}
	
	return 0;
}
