#include <bits/stdc++.h>

using namespace std;

int main(){
	
	char arr_1[100], arr_2[100];
	int size, cont;
	
	while(scanf("%s", arr_1) && arr_1[0] != 'X'){
		
		cont = 0;
		
		scanf("%s", arr_2);
		
		for(int i = 0 ; i < strlen(arr_1) ; i++){
			if(arr_1[i] != arr_2[i])
				cont++;
		}
		
		printf("Hamming distance is %d.\n", cont);
	}
	
	return 0;
}
