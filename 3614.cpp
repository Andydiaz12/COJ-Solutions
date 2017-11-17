#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

void unidad(int i, char numero[2]){
	
		if(numero[i] == '1')
		printf("one\n");
		else if(numero[i] == '2')
		printf("two\n");
		else if(numero[i] == '3')
		printf("three\n");
		else if(numero[i] == '4')
		printf("four\n");
		else if(numero[i] == '5')
		printf("five\n");
		else if(numero[i] == '6')
		printf("six\n");
		else if(numero[i] == '7')
		printf("seven\n");
		else if(numero[i] == '8')
		printf("eight\n");
		else if(numero[i] == '9')
		printf("nine\n");
}


int main(){
	
	int  casos, size, i, bandera;
	char numero[3];
	
	scanf("%d", &casos);
	
	while(casos--){
	scanf("%s", numero);
	size = strlen(numero);
	i=bandera=0;
	

			
	if(size == 2){
		
		if(numero[i] == '1'){
			if(numero[i+1] == '0')
			printf("ten");
			else if(numero[i+1] == '1')
			printf("eleven");
			else if(numero[i+1] == '2')
			printf("twelve");
			else if(numero[i+1] == '3')
			printf("thirteen");
			else if(numero[i+1] == '4')
			printf("fourteen");
			else if(numero[i+1] == '5')
			printf("fifteen");
			else if(numero[i+1] == '6')
			printf("sixteen");
			else if(numero[i+1] == '7')
			printf("seventeen");
			else if(numero[i+1] == '8')
			printf("eighteen");
			else if(numero[i+1] == '9')
			printf("nineteen");
			
			bandera = 1;
			
		}
		else if(numero[i] == '2')
		printf("twenty");
		else if(numero[i] == '3')
		printf("thirty");
		else if(numero[i] == '4')
		printf("forty");
		else if(numero[i] == '5')
		printf("fifty");
		else if(numero[i] == '6')
		printf("sixty");
		else if(numero[i] == '7')
		printf("seventy");
		else if(numero[i] == '8')
		printf("eighty");
		else if(numero[i] == '9')
		printf("ninety");
		
		if(size >= 2 && bandera == 0 && numero[1] != '0'){
		printf("-");
		unidad(1,numero);	
		}
		else{
			printf("\n");
		}
		
		
	
	}
	
	else if(size == 1){
		i=0;
		if(numero[i] == '0')
		printf("zero\n");
		else
		unidad(i, numero);
	}
	
	}
	
	return 0;
}
