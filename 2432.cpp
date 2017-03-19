#include <cstdio>
#include <algorithm>
#define MAX 100000

using namespace std;

int main(){
	
		int casos, i;
		double valores[MAX];
		
		while(scanf("%d", &casos) && casos != 0){
			for(i = 0 ; i < casos ; i++)
			scanf("%lf", &valores[i]);
			
			sort(valores, valores+casos);
			
			(casos%2 != 0) ? printf("%.1lf\n", valores[casos/2]) : printf("%.1lf\n", ((valores[casos/2] + valores[(casos/2)-1])/2));
		}
		
	
	return 0;
}
