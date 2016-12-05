#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;
 
int main(){
 	int i;
	float valores[12], x=0;
 	for(i=0; i<12; i++){
 	scanf("%f", &valores[i]);
	x+=valores[i];
 }
 printf("$%.2f\n", x/12);
 	return 0;
 }
