#include <cstdio>
#include <cstring>
using namespace std;
int main(){

	char x[1000000];
	int p, i, casos;
	scanf("%d", &casos);
	while(casos--){
	scanf("%s", x);
	p=strlen(x);
	printf("%s", x);
	for(i=0; i<p; i++){
		if(i+1 == p)
		printf("0\n");
		else 
		printf("0");
	}
}

return 0;
}
