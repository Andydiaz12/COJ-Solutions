#include <cstdio>
using namespace std;

int main(){
	long A, B;
	scanf("%ld %ld", &A, &B);
	printf("%ld\n", ((2*(A+B))+(A-B)+(B-A)));
	return 0;
}
