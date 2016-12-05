#include <cstdio>
using namespace std;

int main(){
	long long a, i, sum=0;
	
	scanf("%lld", &a);
	if(a<=0){
	for(a; a<=1; a++){
		sum+=a;
	}
	printf("%lld\n", sum);
}
	else
	{
	for(i=0; i<=a; i++){
		sum+=i;
	}
	printf("%lld\n", sum);
}
	
	return 0;
}
