#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	
	int valores, arr[1000], i=0;
	scanf("%d", &valores);
	for(i=0; i<valores; i++)
		scanf("%d", &arr[i]);

	sort(arr, arr+valores);
	for(i=0; i<valores; i++)
	printf("%d\n", arr[i]);	
	return 0;
}
