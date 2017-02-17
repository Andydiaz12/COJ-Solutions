#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;

long valores_max(char (*a)[1000000], int b){
	long x;
	for(int i=0; i<b; i++){
		if((*a)[i] == '5')
		(*a)[i] = '6';
	}
	x=atol(*a);
	return x;
}

long valores_min(char (*a)[1000000], int b){
	long x;
	for(int i=0; i<b; i++){
		if((*a)[i] == '6')
		(*a)[i] = '5';
	}
	x=atol(*a);
	return x;
}

int main(){
	
	long maxa, maxb, mina, minb;
	int i, tam_a, tam_b;
	char a[1000000], b[1000000];
	scanf("%s %s", a, b);
	tam_a=strlen(a);
	tam_b=strlen(b);
	maxa=valores_max(&a, tam_a);
	mina=valores_min(&a, tam_a);
	maxb=valores_max(&b, tam_b);
	minb=valores_min(&b, tam_b);
	
	printf("%ld %ld\n", (mina+minb), (maxa+maxb));
	
	return 0;
}
