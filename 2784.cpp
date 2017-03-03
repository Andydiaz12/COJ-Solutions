#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int main(){
	int i, luchadores ;
	scanf("%d", &luchadores);
	
	int pesos[luchadores];
	
	for(i = 0 ; i < luchadores ; i++)
		scanf("%d", &pesos[i]);
	
	sort(pesos , pesos + luchadores);

	if(luchadores == 1)
	printf("%d\n", pesos[0]);
	
	else{
		printf("%d ", pesos[luchadores-1]);
		for(i = 0; i < (luchadores-1) ; i++)
		(i + 1 == luchadores) ? printf("%d\n", pesos[i]) : printf("%d ", pesos[i]);
	}
	
}
