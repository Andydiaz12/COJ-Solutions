#include <bits/stdc++.h>

using namespace std;

int tree[100001];


void actu(int index, int valor, int n){
	
	while(index <= n){
		
		tree[index] += valor;
		
		index += index & (-index);
	}
	
}

int  query(int index){
	
	int suma = 0;
	
	while(index){
		
		suma += tree[index];
		
		index -= index & (-index);
		
	}
	
	return suma;
}

int main(){
	
	int tc, n, q, arr[100001], i, opc, opc_1, opc_2, opcion, j;
	
	scanf("%d", &tc);
	
	for(j = 0 ; j < tc ; j++){
		
		memset(tree, 0,  sizeof(tree));
		
		printf("Case %d:\n", j + 1);
		scanf("%d %d", &n, &q);
		
		for(i = 1 ; i <= n ; i++){
			scanf("%d", &arr[i]);
			actu(i, arr[i], n);
		}			
					
			
		while(q--){
			
			scanf("%d", &opcion);
				(opcion == 1) ? scanf("%d", &opc) : scanf("%d %d", &opc_1, &opc_2);
	
				if(opcion == 1){
					printf("%d\n", arr[opc + 1]);
					actu(opc + 1, -arr[opc + 1], n);
					arr[opc + 1] = 0;
				}
				
				else if(opcion == 2){
					
					actu(opc_1 + 1, opc_2, n);
					arr[opc_1 + 1] += opc_2;
				}
					
				else
					printf("%d\n", query(opc_2 + 1) - query(opc_1));
					
		}
			
		
	}
	
	
	return 0;
}
