#include <cstdio>
using namespace std;

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	(a == 0 || (4*a*c)>(b*b))?printf("NO\n"):printf("YES\n");
	return 0;
}
