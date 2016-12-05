#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
	int casos, n, m, i=0, arr[10][5], I, J, p, arr1[5], ban, resultado;
	scanf("%d", &casos);
	for(i=0; i<casos; i++){
		resultado=1;
		ban=arr1[0];
		scanf("%d %d", &n, &m);

								for(I=0; I<m; I++){
									for(J=0; J<n; J++)
									scanf("%d", &arr[I][J]);
								
								}
								for(J=0; J<n; J++){
									for(I=0; I<m; I++){
									arr1[J]=arr1[J]+arr[I][J];	
									}
								}
ban=arr1[0];
for(J=0; J<n; J++){
if(arr1[J]>ban){
ban=arr1[J];
resultado=J+1;
}
}

		printf("%d\n", resultado);
	}
	return 0;
}
