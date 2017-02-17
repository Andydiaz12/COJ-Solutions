#include <cstdio>
using namespace std;

int main(){
	
	int casos, x, y;
	scanf("%d", &casos);
	while(casos--){
	scanf("%d %d", &x, &y);
	if(x%2 == 0)
	(x == y) ? printf("%d\n", x+y) : (y == (x-2) ) ? printf("%d\n", x+y) : printf("No Number\n");
	else
	(x == y) ? printf("%d\n", (x+y)-1) : (y == (x-2) ) ? printf("%d\n", (x+y)-1) : printf("No Number\n");
}	
	
	return 0;
}
