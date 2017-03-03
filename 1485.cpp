#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){
	char cadena[1000];
	int x;
	
	
	gets(cadena);
	x=strlen(cadena);
	sort(cadena, cadena+x);
	
	for(int i=0 ; i<x; i++)
	(i+1 == x) ? printf("%c\n", cadena[i]) : printf("%c", cadena[i]);
	return 0;
}
