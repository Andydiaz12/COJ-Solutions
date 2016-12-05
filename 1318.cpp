#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	
	int arr[3];
	char letras[3];

	scanf("%d %d %d %s", &arr[0], &arr[1], &arr[2], letras);
	sort(arr, arr+3);
	if(letras[0] == 'A'){
		if(letras[1] == 'B')
		printf("%d %d %d\n", arr[0], arr[1], arr[2]);
		else if(letras[1] == 'C')
		printf("%d %d %d\n", arr[0], arr[2], arr[1]);
	}
	else if(letras[0] == 'B'){
	if(letras[1] == 'A')
		printf("%d %d %d\n", arr[1], arr[0], arr[2]);
		else if(letras[1] == 'C')
		printf("%d %d %d\n", arr[1], arr[2], arr[0]);
					
}

	else if(letras[0] == 'C'){
	if(letras[1] == 'A')
		printf("%d %d %d\n", arr[2], arr[0], arr[1]);
		else if(letras[1] == 'B')
		printf("%d %d %d\n", arr[2], arr[1], arr[0]);
						
}
return 0;
}
