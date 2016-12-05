#include <cstdio>
using namespace std;

int main(){
	int casos, ninos, dulces, suma, i;
	scanf("%d", &casos);
	
	while(casos--){
		suma=dulces=0;
		getchar();
		scanf("%d", &ninos);
		for(i=0; i<ninos; i++){
		scanf("%d", &dulces);
		suma+=dulces;
	}
	(suma%ninos == 0)?printf("YES\n"):printf("NO\n");
	}
	
	return 0;
}
