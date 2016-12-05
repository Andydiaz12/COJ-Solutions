#include <cstdio>
using namespace std;

int recursividad(int base){
	if(base == 1)
		return 1;
	else 
		return ((base*base)+recursividad(base-1));
	
}


int main(){
	
	int n=1, Base, solucion;
	
	while(n != 0){
		scanf("%d", &n);
		if(n != 0){
			scanf("%d", &Base);
			solucion=recursividad(Base);
			printf("%d\n", solucion);
			}
			
	}
	
	return 0;
}
