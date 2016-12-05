#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	long  N, i, L;
	double arr[100000],  p,  H, suma;
	do{
		suma=p=0;
		scanf("%lf %ld %ld", &H, &L, &N);
		if(H != 0 || L != 0 || N != 0){
		for(i=0; i<N; i++)
			scanf("%lf", &arr[i]);
		sort(arr, arr+N);
	for(L; L<(N-H); L++){
		suma+=arr[L];
		p=p+1;
	}
	printf("%.6lf\n", suma/p);
}
	}while(H != 0 || L != 0 || N != 0);
	return 0;
}
