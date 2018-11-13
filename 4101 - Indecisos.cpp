#include <bits/stdc++.h>

using namespace std;

int main(){
	
	char voto[1005];
	int P = 0, N = 0, tc, i, I = 0;
	
	scanf("%d", &tc);
	getchar();
	gets(voto);
	for(i = 0 ; i < tc ; i++){
		if(voto[i] == 'P')
			P++;
		else if(voto[i] == 'N')
			N++;
		else
			I++;
	}
	
//	printf("Mitad: %d\tP: %d\tN: %d\tI: %d\n", (tc/2), P, N, I);
	if(tc % 2 != 0){
		if(N > (tc/2))
			printf("NO\n");
		else if(P > (tc/2))
			printf("SI\n");
		else{
			printf("INDECISOS\n");
		}		
	}else{
		if(P > (tc/2))
			printf("SI\n");
		else if(N >= (tc/2))
			printf("NO\n");
		else
			printf("INDECISOS\n");
	}
	
	return 0;
}
