#include <cstdio>
using namespace std;

int main(){
	int a, b, c, n;
	scanf("%d", &n);
	while(n--){
	scanf("%d %d %d", &a, &b, &c);
	((4*a*c)>(b*b))?printf("NO\n"):printf("SI\n");
}
	return 0;
}
